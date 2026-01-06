module tb_lsu;

    localparam int N = 64;
    localparam int BYTES = N/8;

    logic clk;

    // Entradas do LSU
    logic         load;
    logic         store;
    logic [2:0]   funct3;
    logic [N-1:0] addr;
    logic [N-1:0] storeData;

    // Saídas do LSU
    logic               writeEnable;
    logic [N-1:0]       mem_address;
    logic [N-1:0]       mem_writeData;
    logic [BYTES-1:0]   mem_writeMask;

    logic               exc_valid;
    logic               exc_StLd;
    logic [N-1:0]       exc_addr;

    // Saída da memória
    logic [N-1:0] readDatabus;

    // DUT
    LSU #(.N(N)) dut (
        .load(load),
        .store(store),
        .funct3(funct3),
        .addr(addr),
        .storeData(storeData),

        .writeEnable(writeEnable),
        .mem_address(mem_address),
        .mem_writeData(mem_writeData),
        .mem_writeMask(mem_writeMask),

        .exc_valid(exc_valid),
        .exc_StLd(exc_StLd),
        .exc_addr(exc_addr)
    );

    // DataMemory
    DataMemory #(.N(N)) mem (
        .clk(clk),
        .writeEnable(writeEnable),
        .writeMask(mem_writeMask),
        .address(mem_address),
        .writeData(mem_writeData),
        .readDatabus(readDatabus)
    );

    // Clock
    initial clk = 1'b0;
    always #5 clk = ~clk;

    // Test sequence
    initial begin
        // Defaults
        load      = 1'b0;
        store     = 1'b0;
        funct3    = 3'b000;
        addr      = '0;
        storeData = '0;

        // Espera um pouco
        #2;

        $display("\n==== Teste 1: SD (store doubleword) ====");
        store     = 1'b1;
        load      = 1'b0;
        funct3    = 3'b011; // SD
        addr      = 64'h0000_0000_0000_0000;
        storeData = 64'h0011_2233_4455_6677;

        #1;
        @(posedge clk);
        #1;

        if (readDatabus === 64'h0011_2233_4455_6677 && exc_valid === 1'b0) begin
            $display("Teste 1 PASS");
        end else begin
            $display("Teste 1 FAIL: lido=%h exc_valid=%b", readDatabus, exc_valid);
            $finish;
        end

        $display("\n==== Teste 2: SB (store byte) addr=2 (offset=2) ====");
        // Antes: 0x0011223344556677
        // SB em addr=2 troca o byte2 (B2) -> vira 0x0011223344AA6677
        store     = 1'b1;
        load      = 1'b0;
        funct3    = 3'b000; // SB
        addr      = 64'h0000_0000_0000_0002;
        storeData = 64'h0000_0000_0000_00AA;

        #1;
        @(posedge clk);
        #1;

        if (readDatabus === 64'h0011_2233_44AA_6677 && exc_valid === 1'b0) begin
            $display("Teste 2 PASS");
        end else begin
            $display("Teste 2 FAIL: lido=%h exc_valid=%b", readDatabus, exc_valid);
            $finish;
        end

        $display("\n==== Teste 3: SW (store word) addr=0 ====");
        // Troca 32 bits inferiores -> 0x00112233DEADBEEF
        store     = 1'b1;
        load      = 1'b0;
        funct3    = 3'b010; // SW
        addr      = 64'h0000_0000_0000_0000;
        storeData = 64'h0000_0000_DEAD_BEEF;

        #1;
        @(posedge clk);
        #1;

        if (readDatabus === 64'h0011_2233_DEAD_BEEF && exc_valid === 1'b0) begin
            $display("Teste 3 PASS");
        end else begin
            $display("Teste 3 FAIL: lido=%h exc_valid=%b", readDatabus, exc_valid);
            $finish;
        end

        $display("\n==== Teste 3b: SH (store halfword) addr=0 ====");
        // Troca 16 bits inferiores -> ...DEADA1B2
        store     = 1'b1;
        load      = 1'b0;
        funct3    = 3'b001; // SH
        addr      = 64'h0000_0000_0000_0000;
        storeData = 64'h0000_0000_0000_A1B2;

        #1;
        @(posedge clk);
        #1;

        if (readDatabus === 64'h0011_2233_DEAD_A1B2 && exc_valid === 1'b0) begin
            $display("Teste 3b PASS");
        end else begin
            $display("Teste 3b FAIL: lido=%h exc_valid=%b", readDatabus, exc_valid);
            $finish;
        end

        $display("\n==== Teste 4: Misaligned STORE (SW addr=2) deve gerar excecao e NAO escrever ====");
        // Valor atual esperado: 0x00112233DEADA1B2
        store     = 1'b1;
        load      = 1'b0;
        funct3    = 3'b010; // SW
        addr      = 64'h0000_0000_0000_0002; // desalinhado p/ word
        storeData = 64'h0000_0000_1111_2222;

        #1;
        @(posedge clk);
        #1;

        if (exc_valid === 1'b1 && exc_StLd === 1'b1 && exc_addr === addr &&
            readDatabus === 64'h0011_2233_DEAD_A1B2) begin
            $display("Teste 4 PASS");
        end else begin
            $display("Teste 4 FAIL: exc_valid=%b exc_StLd=%b exc_addr=%h lido=%h",
                     exc_valid, exc_StLd, exc_addr, readDatabus);
            $finish;
        end

        $display("\n==== Teste 5: Misaligned LOAD (LW addr=2) deve gerar excecao ====");
        store     = 1'b0;
        load      = 1'b1;
        funct3    = 3'b010; // LW
        addr      = 64'h0000_0000_0000_0002; // desalinhado p/ word
        storeData = '0;

        #1;

        if (exc_valid === 1'b1 && exc_StLd === 1'b0 && exc_addr === addr && writeEnable === 1'b0) begin
            $display("Teste 5 PASS");
        end else begin
            $display("Teste 5 FAIL: exc_valid=%b exc_StLd=%b exc_addr=%h writeEnable=%b",
                     exc_valid, exc_StLd, exc_addr, writeEnable);
            $finish;
        end

        $display("\n==== Teste 6: Aligned LOAD (LW addr=4) NAO deve gerar excecao ====");
        store     = 1'b0;
        load      = 1'b1;
        funct3    = 3'b010; // LW
        addr      = 64'h0000_0000_0000_0004; // alinhado
        storeData = '0;

        #1;

        if (exc_valid === 1'b0 && writeEnable === 1'b0) begin
            $display("Teste 6 PASS");
        end else begin
            $display("Teste 6 FAIL: exc_valid=%b writeEnable=%b", exc_valid, writeEnable);
            $finish;
        end

        $display("\n==== TODOS OS TESTES LSU FINALIZADOS ====");
        $finish;
    end

endmodule
