module Datapath #(
    parameter N = 64
)(
    input  logic       clk, rst,
    input  logic       regWriteEnable,
    input  logic       load, store,
    input  logic       word,
    input  logic [3:0] ALUControl,

    input  logic       JALR,
    input  logic       sel_mux_pcnext,
    input  logic       sel_mux_srcB,
    input  logic [1:0] sel_mux_srcA,
    input  logic [1:0] sel_mux_writeback,
    
    output logic       Overflow,
    output logic       Carry,
    output logic       Zero,
    output logic       Negative,

    output logic       funct7,
    output logic [2:0] funct3,
    output logic [6:0] opcode
);
    wire [N-1:0] pc_index;
    wire [31:0] instr;
    wire [N-1:0] imm_ext;
    wire [N-1:0] RD1, RD2;
    wire [N-1:0] w_mux_srcA, w_mux_srcB;
    wire [N-1:0] ALUResult;
    wire         w_memWriteEnable;
    wire [N-1:0] w_memAddress;
    wire [7:0]   w_memWriteMask;
    wire [N-1:0] w_memWriteData;
    wire [N-1:0] w_memToLoadExt;
    wire [N-1:0] w_loadData;
    wire [N-1:0] w_pc_plus4;
    wire [N-1:0] w_mux_writeBack;
    wire [N-1:0] w_mux_pc_next;
    wire [N-1:0] pc_target;

    assign pc_target = JALR ? {ALUResult[N-1:1], 1'b0} : ALUResult;

    mux2                #(.N(N)) mux_pc_next(.data0(w_pc_plus4), .data1(pc_target), .sel(sel_mux_pcnext), .mux_out(w_mux_pc_next));
    ProgramCounter      #(.N(N)) pc(.clk(clk), .rst(rst), .PC_IN(w_mux_pc_next), .PC_OUT(pc_index));
    ProgramCounter_inc  #(.N(N)) pc_plus4(.PC_in(pc_index), .PC_out(w_pc_plus4));

    InstructionMemory   #(.N(N)) instr_mem(.addr(pc_index), .instr(instr));

    RegisterFile        #(.N(N)) reg_file(.clk(clk), .writeEnable(regWriteEnable), .rs1(instr[19:15]), .rs2(instr[24:20]), .rd(instr[11:7]), .writerData(w_mux_writeBack), .readData1(RD1), .readData2(RD2));

    ImmGenerator        #(.N(N)) imm_gen(.instr(instr), .imm_out(imm_ext));

    mux3                #(.N(N)) mux_SrcA(.data0(RD1), .data1(pc_index), .data2('0), .sel(sel_mux_srcA), .mux_out(w_mux_srcA));
    mux2                #(.N(N)) mux_SrcB(.data0(RD2), .data1(imm_ext), .sel(sel_mux_srcB), .mux_out(w_mux_srcB));
    ULA                 #(.N(N)) ula(.dataA(w_mux_srcA), .dataB(w_mux_srcB), .word(word), .ALUControl(ALUControl), .ALUOut(ALUResult), .Overflow(Overflow), .Carry(Carry), .Negative(Negative), .Zero(Zero));

    LSU                 #(.N(N)) lsu(.load(load), .store(store), .funct3(instr[14:12]), .addr(ALUResult), .storeData(RD2), .writeEnable(w_memWriteEnable), .mem_address(w_memAddress), .mem_writeData(w_memWriteData), .mem_writeMask(w_memWriteMask), .exc_valid(), .exc_StLd(), .exc_addr());
    LoadExtender        #(.N(N)) load_ext(.mem_readData(w_memToLoadExt), .funct3(instr[14:12]), .byte_offset(ALUResult[2:0]), .loadedData(w_loadData));

    DataMemory          #(.N(N)) data_mem(.clk(clk), .writeEnable(w_memWriteEnable), .writeMask(w_memWriteMask), .address(w_memAddress), .writeData(w_memWriteData), .readDatabus(w_memToLoadExt));

    mux3                #(.N(N)) mux_writeback(.data0(ALUResult), .data1(w_loadData), .data2(w_pc_plus4), .sel(sel_mux_writeback), .mux_out(w_mux_writeBack));

    assign funct7 = instr[30];
    assign funct3 = instr[14:12];
    assign opcode = instr[6:0];
endmodule
