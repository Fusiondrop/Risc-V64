module tb_LoadExtender;

    localparam N = 64;
    localparam OFF_BITS = $clog2(N/8);

    logic [N-1:0]      mem_readData;
    logic [2:0]        funct3;
    logic [OFF_BITS-1:0] byte_offset;

    logic [N-1:0]      loadedData;

    // DUT
    LoadExtender #(.N(N)) dut (
        .mem_readData(mem_readData),
        .funct3(funct3),
        .byte_offset(byte_offset),
        .loadedData(loadedData)
    );

    initial begin
        // Padrão de bytes para testar sign/zero extend e offsets
        // mem_readData = 0x80_7F_FF_00_12_34_56_9A
        // Bytes: B7=80, B6=7F, B5=FF, B4=00, B3=12, B2=34, B1=56, B0=9A
        mem_readData = 64'h80_7F_FF_00_12_34_56_9A;
        funct3       = 3'b000;
        byte_offset  = '0;

        #1;

        // -------------------------
        // LB (sign-extend 8 bits)
        // -------------------------
        $display("\n==== LB ====");

        // LB offset 0: byte = 0x9A (negativo)
        funct3      = 3'b000;
        byte_offset = 3'd0;
        #1;
        if (loadedData === 64'hFFFF_FFFF_FFFF_FF9A) $display("[PASS] LB offset0 (0x9A -> sign)");
        else begin
            $display("[FAIL] LB offset0 got=%h exp=%h", loadedData, 64'hFFFF_FFFF_FFFF_FF9A);
            $finish;
        end

        // LB offset 7: byte = 0x80 (negativo)
        funct3      = 3'b000;
        byte_offset = 3'd7;
        #1;
        if (loadedData === 64'hFFFF_FFFF_FFFF_FF80) $display("[PASS] LB offset7 (0x80 -> sign)");
        else begin
            $display("[FAIL] LB offset7 got=%h exp=%h", loadedData, 64'hFFFF_FFFF_FFFF_FF80);
            $finish;
        end

        // -------------------------
        // LBU (zero-extend 8 bits)
        // -------------------------
        $display("\n==== LBU ====");

        // LBU offset 0: byte = 0x9A -> zero
        funct3      = 3'b100;
        byte_offset = 3'd0;
        #1;
        if (loadedData === 64'h0000_0000_0000_009A) $display("[PASS] LBU offset0 (0x9A -> zero)");
        else begin
            $display("[FAIL] LBU offset0 got=%h exp=%h", loadedData, 64'h0000_0000_0000_009A);
            $finish;
        end

        // LBU offset 5: byte = 0xFF -> zero
        funct3      = 3'b100;
        byte_offset = 3'd5;
        #1;
        if (loadedData === 64'h0000_0000_0000_00FF) $display("[PASS] LBU offset5 (0xFF -> zero)");
        else begin
            $display("[FAIL] LBU offset5 got=%h exp=%h", loadedData, 64'h0000_0000_0000_00FF);
            $finish;
        end

        // -------------------------
        // LH (sign-extend 16 bits)
        // -------------------------
        $display("\n==== LH ====");

        // LH offset 0: halfword = 0x569A (positivo)
        funct3      = 3'b001;
        byte_offset = 3'd0;
        #1;
        if (loadedData === 64'h0000_0000_0000_569A) $display("[PASS] LH offset0 (0x569A -> sign+)");
        else begin
            $display("[FAIL] LH offset0 got=%h exp=%h", loadedData, 64'h0000_0000_0000_569A);
            $finish;
        end

        // LH offset 6: halfword = 0x807F (negativo)
        funct3      = 3'b001;
        byte_offset = 3'd6;
        #1;
        if (loadedData === 64'hFFFF_FFFF_FFFF_807F) $display("[PASS] LH offset6 (0x807F -> sign-)");
        else begin
            $display("[FAIL] LH offset6 got=%h exp=%h", loadedData, 64'hFFFF_FFFF_FFFF_807F);
            $finish;
        end

        // -------------------------
        // LHU (zero-extend 16 bits)
        // -------------------------
        $display("\n==== LHU ====");

        // LHU offset 6: halfword = 0x807F -> zero
        funct3      = 3'b101;
        byte_offset = 3'd6;
        #1;
        if (loadedData === 64'h0000_0000_0000_807F) $display("[PASS] LHU offset6 (0x807F -> zero)");
        else begin
            $display("[FAIL] LHU offset6 got=%h exp=%h", loadedData, 64'h0000_0000_0000_807F);
            $finish;
        end

        // -------------------------
        // LW (sign-extend 32 bits)
        // -------------------------
        $display("\n==== LW ====");

        // LW offset 0: word = 0x1234569A (positivo)
        funct3      = 3'b010;
        byte_offset = 3'd0;
        #1;
        if (loadedData === 64'h0000_0000_1234_569A) $display("[PASS] LW offset0 (0x1234569A -> sign+)");
        else begin
            $display("[FAIL] LW offset0 got=%h exp=%h", loadedData, 64'h0000_0000_1234_569A);
            $finish;
        end

        // LW offset 4: word = 0x807FFF00 (negativo)
        funct3      = 3'b010;
        byte_offset = 3'd4;
        #1;
        if (loadedData === 64'hFFFF_FFFF_807F_FF00) $display("[PASS] LW offset4 (0x807FFF00 -> sign-)");
        else begin
            $display("[FAIL] LW offset4 got=%h exp=%h", loadedData, 64'hFFFF_FFFF_807F_FF00);
            $finish;
        end

        // -------------------------
        // LWU (zero-extend 32 bits)
        // -------------------------
        $display("\n==== LWU ====");

        // LWU offset 4: word = 0x807FFF00 -> zero
        funct3      = 3'b110;
        byte_offset = 3'd4;
        #1;
        if (loadedData === 64'h0000_0000_807F_FF00) $display("[PASS] LWU offset4 (0x807FFF00 -> zero)");
        else begin
            $display("[FAIL] LWU offset4 got=%h exp=%h", loadedData, 64'h0000_0000_807F_FF00);
            $finish;
        end

        // -------------------------
        // LD (64 bits)
        // -------------------------
        $display("\n==== LD ====");

        // LD offset 0: devolve palavra inteira
        funct3      = 3'b011;
        byte_offset = 3'd0;
        #1;
        if (loadedData === 64'h80_7F_FF_00_12_34_56_9A) $display("[PASS] LD offset0 (full word)");
        else begin
            $display("[FAIL] LD offset0 got=%h exp=%h", loadedData, 64'h80_7F_FF_00_12_34_56_9A);
            $finish;
        end

        // LD offset 3: shift 24 bits -> 0x000000807FFF0012
        funct3      = 3'b011;
        byte_offset = 3'd3;
        #1;
        if (loadedData === 64'h0000_0000_807F_FF00_12) begin
            // cuidado: esse literal tem 5 bytes, então vamos checar pelo hex correto de 64 bits:
            // mem >> 24 = 0x000000807FFF0012
            // (bytes: 00 00 00 80 7F FF 00 12)
        end
        if (loadedData === 64'h0000_0080_7FFF_0012) $display("[PASS] LD offset3 (>>24)");
        else begin
            $display("[FAIL] LD offset3 got=%h exp=%h", loadedData, 64'h0000_0080_7FFF_0012);
            $finish;
        end

        // -------------------------
        // default funct3
        // -------------------------
        $display("\n==== DEFAULT ====");

        funct3      = 3'b111;
        byte_offset = 3'd0;
        #1;
        if (loadedData === 64'h0000_0000_0000_0000) $display("[PASS] default -> 0");
        else begin
            $display("[FAIL] default got=%h exp=%h", loadedData, 64'h0000_0000_0000_0000);
            $finish;
        end

        $display("\nALL LoadExtender TESTS PASSED");
        $finish;
    end

endmodule
