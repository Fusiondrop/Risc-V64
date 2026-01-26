//------------------------------------------------------------------------------
// TopLevel.sv
//
// Módulo de topo (single-cycle) que integra:
//
//   - Datapath (caminho de dados)
//   - ControlUnit (unidade de controle combinacional)
//
// A ControlUnit decodifica opcode/funct3 e instr[30] (funct7),
// e decide branches usando as flags da ULA (Zero/Negative/Carry/Overflow).
//
// Observação:
//  - A InstructionMemory ainda pode fazer $readmemh("program.hex", ...).
//    O testbench preenche a memória via hierarquia, mas um program.hex
//    no diretório raiz remove o warning em runtime.
//
//------------------------------------------------------------------------------
module TopLevel #(
    parameter int N = 64
)(
    input  logic clk,
    input  logic rst
);

    // -----------------------------
    // Sinais de controle (CU -> DP)
    // -----------------------------
    logic        regWriteEnable;
    logic        load;
    logic        store;
    logic        word;
    logic [3:0]  ALUControl;

    logic        JALR;
    logic        sel_mux_pcnext;
    logic        sel_mux_srcB;
    logic [1:0]  sel_mux_srcA;
    logic [1:0]  sel_mux_writeback;

    // -----------------------------
    // Sinais de status/decodificação (DP -> CU)
    // -----------------------------
    logic        Overflow;
    logic        Carry;
    logic        Zero;
    logic        Negative;

    logic        funct7;   // (comentário: é o bit instr[30], usado como "funct7[5]" para diferenciar add/sub, srl/sra, etc.)
    logic [2:0]  funct3;
    logic [6:0]  opcode;

    // -----------------------------
    // Datapath
    // -----------------------------
    Datapath #(.N(N)) dp (
        .clk(clk),
        .rst(rst),

        .regWriteEnable(regWriteEnable),
        .load(load),
        .store(store),
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

        .funct7(funct7),
        .funct3(funct3),
        .opcode(opcode)
    );

    // -----------------------------
    // Control Unit
    // -----------------------------
    ControlUnit cu (
        .Zero(Zero),
        .Negative(Negative),
        .Carry(Carry),
        .Overflow(Overflow),

        .funct7(funct7),
        .funct3(funct3),
        .opcode(opcode),

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

endmodule
