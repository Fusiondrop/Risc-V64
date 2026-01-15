module ZeroExtender #(
    parameter IN  = 32,
    parameter OUT = 64
)(
    input  logic [IN-1:0]  in, // Barramento de entrada selecionável
    output logic [OUT-1:0] out // Barramento de saída extendidos
);
    assign out = {{(OUT-IN){1'b0}}, in}; // Replicação e concatenação de zeros com o barramento de entrada
endmodule
