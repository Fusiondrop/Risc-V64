module tb_comparator();
    parameter N = 8;

    logic [N-1:0] DataInA, DataInB;
    logic D;    // 0 = unsigned, 1 = signed
    logic gt, lt, eq;

    comparator DUT(.A(DataInA), .B(DataInB), .D(D), .gt(gt), .lt(lt), .eq(eq));
    initial begin
        // Test 1: A = B (4 = 4), unsigned
        DataInA = 8'b0000_0100; DataInB = 8'b0000_0100; D = 1'b0; #10;
        $display("Teste1: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 2: A > B (4 > 2), unsigned
        DataInA = 8'b0000_0100; DataInB = 8'b0000_0010; D = 1'b0; #10;
        $display("Teste2: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 3: A < B (2 < 4), unsigned
        DataInA = 8'b0000_0010; DataInB = 8'b0000_0100; D = 1'b0; #10;
        $display("Teste3: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 4: A = B (32 = 32), unsigned
        DataInA = 8'b0010_0000; DataInB = 8'b0010_0000; D = 1'b0; #10;
        $display("Teste4: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 5: A > B (64 > 32), unsigned
        DataInA = 8'b0100_0000; DataInB = 8'b0010_0000; D = 1'b0; #10;
        $display("Teste5: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 6: A < B (32 < 64), unsigned
        DataInA = 8'b0010_0000; DataInB = 8'b0100_0000; D = 1'b0; #10;
        $display("Teste6: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 7: A = B (32 = 8), signed
        DataInA = 8'b0010_0000; DataInB = 8'b0000_1000; D = 1'b1; #10;
        $display("Teste7: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", $signed(DataInA), $signed(DataInB), D, gt, lt, eq);

        // Test 8: A > B (89 > 57), signed
        DataInA = 8'b0101_1001; DataInB = 8'b0011_1001; D = 1'b1;  #10;
        $display("Teste8: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", $signed(DataInA), $signed(DataInB), D, gt, lt, eq);

        // Test 9: A < B (-127 < 1), signed
        DataInA = 8'b1000_0001; DataInB = 8'b0000_0001; D = 1'b1; #10;
        $display("Teste9: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", $signed(DataInA), $signed(DataInB), D, gt, lt, eq);

        // Test 10: A < B (-128 < -1), signed
        DataInA = 8'b1000_0000; DataInB = 8'b1111_1111; D = 1'b1; #10;
        $display("Teste10: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", $signed(DataInA), $signed(DataInB), D, gt, lt, eq);

        // Test 11: A < B (64 > 8), unsigned
        DataInA = 8'b0100_0000; DataInB = 8'b0000_1000; D = 1'b0; #10;
        $display("Teste11: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 12: A < B (8 < 64), unsigned
        DataInA = 8'b0000_1000; DataInB = 8'b0100_0000; D = 1'b0; #10;
        $display("Teste12: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", DataInA, DataInB, D, gt, lt, eq);

        // Test 13: A < B (-64 < 8), signed
        DataInA = 8'b1100_0000; DataInB = 8'b0000_1000; D = 1'b1; #10;
        $display("Teste13: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", $signed(DataInA), $signed(DataInB), D, gt, lt, eq);

        // Test 14: A < B (-120 < 64), signed
        DataInA = 8'b1000_1000; DataInB = 8'b0100_0000; D = 1'b1; #10;
        $display("Teste14: A=%d B=%d D=%b-> gt=%b lt=%b eq=%b", $signed(DataInA), $signed(DataInB), D, gt, lt, eq);
    end
endmodule
