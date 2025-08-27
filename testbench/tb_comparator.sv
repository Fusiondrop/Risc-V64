module tb_comparator();
    parameter N = 8;

    logic [N-1:0] DataInA, DataInB;
    logic gt, lt, eq;

    comparator DUT(.A(DataInA), .B(DataInB), .gt(gt), .lt(lt), .eq(eq));
    initial begin
        // Test 1: A = B (4 = 4)
        DataInA = 8'b0000_0100; DataInB = 8'b0000_0100; #10;
        assert (gt === 0 && lt === 0 && eq === 1) else $error("Test 1 Failed.");
        $display("Teste1: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 2: A > B (4 > 2)
        DataInA = 8'b0000_0100; DataInB = 8'b0000_0010; #10;
        assert (gt === 1 && lt === 0 && eq === 0) else $error("Test 2 Failed.");
        $display("Teste2: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 3: A < B (2 < 4)
        DataInA = 8'b0000_0010; DataInB = 8'b0000_0100; #10;
        assert (gt === 0 && lt === 1 && eq === 0) else $error("Test 3 Failed.");
        $display("Teste3: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 4: A = B (32 = 32)
        DataInA = 8'b0010_0000; DataInB = 8'b0010_0000; #10;
        assert (gt === 0 && lt === 0 && eq === 1) else $error("Test 4 Failed.");
        $display("Teste4: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 5: A > B (64 > 32)
        DataInA = 8'b0100_0000; DataInB = 8'b0010_0000; #10;
        assert (gt === 1 && lt === 0 && eq === 0) else $error("Test 5 Failed.");
        $display("Teste5: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 6: A < B (32 < 64)
        DataInA = 8'b0010_0000; DataInB = 8'b0100_0000; #10;
        assert (gt === 0 && lt === 1 && eq === 0) else $error("Test 6 Failed.");
        $display("Teste6: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 7: A = B (32 = 8)
        DataInA = 8'b0010_0000; DataInB = 8'b000_1000; #10;
        assert (gt === 0 && lt === 0 && eq === 1) else $error("Test 7 Failed.");
        $display("Teste7: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 8: A > B (32 > 8)
        DataInA = 8'b0010_0000; DataInB = 8'b0000_1000; #10;
        assert (gt === 1 && lt === 0 && eq === 0) else $error("Test 8 Failed.");
        $display("Teste8: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);

        // Test 9: A < B (8 < 32)
        DataInA = 8'b0000_1000; DataInB = 8'b0010_0000; #10;
        assert (gt === 0 && lt === 1 && eq === 0) else $error("Test 9 Failed.");
        $display("Teste9: A=%d B=%d -> gt=%b lt=%b eq=%b", DataInA, DataInB, gt, lt, eq);
    end
endmodule
