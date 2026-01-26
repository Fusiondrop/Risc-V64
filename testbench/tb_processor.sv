//------------------------------------------------------------------------------
// tb_processor.sv
//
// Testbench end-to-end para rodar o processador usando program.hex.
// NÃO injeta instruções manualmente como o tb_top; apenas roda o programa.
//
// Uso típico (na raiz do projeto):
//   make processor
//   ./obj_dir/Vtb_processor +HEX=program.hex +MAXCYC=5000 +SIGADDR=0 +SIG=0000000000c0ffee
//
// O programa deve escrever a assinatura SIG em DataMemory no endereço SIGADDR (em bytes).
//------------------------------------------------------------------------------

module tb_processor;
  localparam int N = 64;

  // Clock/Reset
  logic clk, rst;

  // Datapath <-> ControlUnit
  logic        regWriteEnable;
  logic        load, store;
  logic        word;
  logic [3:0]  ALUControl;

  logic        JALR;
  logic        sel_mux_pcnext;
  logic        sel_mux_srcB;
  logic [1:0]  sel_mux_srcA;
  logic [1:0]  sel_mux_writeback;

  logic        Overflow, Carry, Zero, Negative;
  logic        funct7b30;   // instr[30]
  logic [2:0]  funct3;
  logic [6:0]  opcode;

  // Instâncias (você já tem esses módulos)
  Datapath #(.N(N)) dp (
    .clk(clk), .rst(rst),
    .regWriteEnable(regWriteEnable),
    .load(load), .store(store),
    .word(word),
    .ALUControl(ALUControl),

    .JALR(JALR),
    .sel_mux_pcnext(sel_mux_pcnext),
    .sel_mux_srcB(sel_mux_srcB),
    .sel_mux_srcA(sel_mux_srcA),
    .sel_mux_writeback(sel_mux_writeback),

    .Overflow(Overflow),
    .Carry(Carry),
    .Zero(Zero),
    .Negative(Negative),

    .funct7(funct7b30),
    .funct3(funct3),
    .opcode(opcode)
  );

  ControlUnit cu (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7b30),

    .Overflow(Overflow),
    .Carry(Carry),
    .Zero(Zero),
    .Negative(Negative),

    .regWriteEnable(regWriteEnable),
    .load(load),
    .store(store),
    .word(word),
    .ALUControl(ALUControl),

    .JALR(JALR),
    .sel_mux_pcnext(sel_mux_pcnext),
    .sel_mux_srcB(sel_mux_srcB),
    .sel_mux_srcA(sel_mux_srcA),
    .sel_mux_writeback(sel_mux_writeback)
  );

  // Clock helper
  task automatic tick;
    begin
      #1 clk = 1'b1;
      #1 clk = 1'b0;
    end
  endtask

  // Reset síncrono (1 tick)
  task automatic do_reset;
    begin
      rst = 1'b1;
      tick();
      rst = 1'b0;
      #1;
    end
  endtask

  // DataMemory é word-addressed internamente (1024 palavras).
  // Para N=64, cada palavra = 8 bytes => index = addr_bytes[12:3].
  localparam int BYTE_LSB = $clog2(N/8); // 3 quando N=64

  function automatic int unsigned dmem_index(input logic [N-1:0] addr_bytes);
    return int'(addr_bytes[BYTE_LSB + 9 : BYTE_LSB]); // 10 bits => 0..1023
  endfunction

  // Plusargs
  string hexfile;
  int unsigned max_cycles;
  logic [N-1:0] sig_addr_bytes;
  logic [N-1:0] sig_expected;

  initial begin
    // Defaults
    hexfile        = "program.hex";
    max_cycles     = 5000;
    sig_addr_bytes = '0;                 // endereço 0 (bytes)
    sig_expected   = 64'h0000000000C0FFEE;

    void'($value$plusargs("HEX=%s",     hexfile));
    void'($value$plusargs("MAXCYC=%d",  max_cycles));
    void'($value$plusargs("SIGADDR=%h", sig_addr_bytes));
    void'($value$plusargs("SIG=%h",     sig_expected));

    $display("=== tb_processor ===");
    $display("HEX     = %s", hexfile);
    $display("MAXCYC  = %0d", max_cycles);
    $display("SIGADDR = 0x%0h (bytes)", sig_addr_bytes);
    $display("SIG     = 0x%0h", sig_expected);
    $display("====================");

    // Carrega o HEX diretamente na InstructionMemory interna
    // (mesmo que InstructionMemory já tenha $readmemh, isso garante o arquivo certo)
    $readmemh(hexfile, dp.instr_mem.I_mem);

    clk = 1'b0;
    do_reset();

    for (int unsigned c = 0; c < max_cycles; c++) begin
      tick();

      if (dp.data_mem.D_mem[dmem_index(sig_addr_bytes)] === sig_expected) begin
        $display("[PASS] assinatura encontrada no ciclo %0d: D_mem[%0d]=0x%0h",
                 c, dmem_index(sig_addr_bytes),
                 dp.data_mem.D_mem[dmem_index(sig_addr_bytes)]);
        $finish;
      end
    end

    $display("[FAIL] timeout (%0d ciclos). assinatura atual: D_mem[%0d]=0x%0h",
             max_cycles, dmem_index(sig_addr_bytes),
             dp.data_mem.D_mem[dmem_index(sig_addr_bytes)]);
    $stop;
  end
endmodule
