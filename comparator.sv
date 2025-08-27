module comparator #(
    parameter N = 8
)(
    input   logic [N-1:0] A,
    input   logic [N-1:0] B,
    output  logic         gt,
    output  logic         lt,
    output  logic         eq
);
    localparam M = N/4;
    wire [M-1:0] W_gt, W_lt, W_eq;

    four_bit_comparator comp0(
        .i_gt(1'b0),
        .i_lt(1'b0),
        .i_eq(1'b1),
        .A(A[3:0]),
        .B(B[3:0]),
        .gt(W_gt[0]),
        .lt(W_lt[0]),
        .eq(W_eq[0])
    );

    genvar i;
    generate
        for(i = 1; i < M; i++) begin: cascade_comp
            four_bit_comparator comp(
                .i_gt(W_gt[i-1]), 
                .i_lt(W_lt[i-1]), 
                .i_eq(W_eq[i-1]), 
                .A(A[i*4 +: 4]), 
                .B(B[i*4 +: 4]), 
                .gt(W_gt[i]), 
                .lt(W_lt[i]), 
                .eq(W_eq[i])
            );
        end
    endgenerate

    assign gt = W_gt[M-1];
    assign lt = W_lt[M-1];
    assign eq = W_eq[M-1];

endmodule

module four_bit_comparator(
    input   logic       i_gt,   // cascading greater_than input
    input   logic       i_lt,   // cascading lesser_than input
    input   logic       i_eq,   // cascading equal input
    input   logic [3:0] A,
    input   logic [3:0] B,
    output  logic       gt,
    output  logic       lt,
    output  logic       eq
  );

  wire [3:0] x;

  genvar i;
  generate
    for(i = 0; i < 4; i++)
    begin
      assign x[i] = ~((~A[i] & B[i]) ^ (A[i] & ~B[i]));
    end
  endgenerate

  wire eq_bit = &(x);
  wire gt_bit = (x[3] & x[2] & x[1] & (A[0] & ~B[0])) ^ (x[3] & x[2] & (A[1] & ~B[1])) ^ (x[3] & (A[2] & ~B[2])) ^ (A[3] & ~B[3]);
  wire lt_bit = (x[3] & x[2] & x[1] & (~A[0] & B[0])) ^ (x[3] & x[2] & (~A[1] & B[1])) ^ (x[3] & (~A[2] & B[2])) ^ (~A[3] & B[3]);

  assign gt = gt_bit | (eq_bit & i_gt);
  assign lt = lt_bit | (eq_bit & i_lt);
  assign eq = eq_bit & i_eq;
endmodule
