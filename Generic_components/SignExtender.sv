module SignExtender #(
    parameter IN  = 32,
    parameter OUT = 64
)(
    input  logic [IN-1:0]  in,  // Barramento de entrada selecionável
    output logic [OUT-1:0] out  // Barramento de saída de dados extendidos
);
    assign out = {{(OUT-IN){in[IN-1]}}, in}; // replicação e concatenação do bit mais significante da entrada
endmodule
