module tb_top;

  localparam N = 64;

  // -----------------------------
  // Clock / Reset
  // -----------------------------
  logic clk;
  logic rst;

  // -----------------------------
  // DUT
  // -----------------------------
  // -----------------------------
  // DUT
  // -----------------------------
  TopLevel #(.N(N)) dut (
    .clk(clk),
    .rst(rst)
  );

  // -----------------------------
  // Constantes de opcode
  // -----------------------------
  localparam logic [6:0] OP_IMM     = 7'b0010011;
  localparam logic [6:0] OP         = 7'b0110011;
  localparam logic [6:0] LUI_OP     = 7'b0110111;
  localparam logic [6:0] AUIPC_OP   = 7'b0010111;
  localparam logic [6:0] JAL_OP     = 7'b1101111;
  localparam logic [6:0] JALR_OP    = 7'b1100111;
  localparam logic [6:0] BRANCH_OP  = 7'b1100011;
  localparam logic [6:0] LOAD_OP    = 7'b0000011;
  localparam logic [6:0] STORE_OP   = 7'b0100011;

  // RV64I word ops
  localparam logic [6:0] OP_IMM_32  = 7'b0011011; // *IW
  localparam logic [6:0] OP_32      = 7'b0111011; // *W

  // -----------------------------
  // ALUControl (conforme sua ULA.sv)
  // -----------------------------
  localparam logic [3:0] ALU_ADD  = 4'b0000;
  localparam logic [3:0] ALU_SUB  = 4'b1000;
  localparam logic [3:0] ALU_SLL  = 4'b0001;
  localparam logic [3:0] ALU_SLT  = 4'b0010;
  localparam logic [3:0] ALU_SLTU = 4'b0011;
  localparam logic [3:0] ALU_XOR  = 4'b0100;
  localparam logic [3:0] ALU_SRL  = 4'b0101;
  localparam logic [3:0] ALU_OR   = 4'b0110;
  localparam logic [3:0] ALU_AND  = 4'b0111;
  localparam logic [3:0] ALU_SRA  = 4'b1101;

  // -----------------------------
  // Helpers: NOP (addi x0,x0,0)
  // -----------------------------
  function automatic logic [31:0] enc_nop();
    return 32'h0000_0013;
  endfunction

  // -----------------------------
  // Helpers: encoder de instruções
  // -----------------------------
  function automatic logic [31:0] enc_r(
    input logic [6:0] f7,
    input logic [4:0] rs2,
    input logic [4:0] rs1,
    input logic [2:0] f3,
    input logic [4:0] rd,
    input logic [6:0] opc
  );
    return {f7, rs2, rs1, f3, rd, opc};
  endfunction

  function automatic logic [31:0] enc_i(
    input logic [11:0] imm,
    input logic [4:0]  rs1,
    input logic [2:0]  f3,
    input logic [4:0]  rd,
    input logic [6:0]  opc
  );
    return {imm, rs1, f3, rd, opc};
  endfunction

  function automatic logic [31:0] enc_s(
    input logic [11:0] imm,
    input logic [4:0]  rs2,
    input logic [4:0]  rs1,
    input logic [2:0]  f3,
    input logic [6:0]  opc
  );
    return {imm[11:5], rs2, rs1, f3, imm[4:0], opc};
  endfunction

  // imm_b é offset em bytes (múltiplo de 2). bit0 sempre 0.
  function automatic logic [31:0] enc_b(
    input int          imm_b,
    input logic [4:0]  rs2,
    input logic [4:0]  rs1,
    input logic [2:0]  f3,
    input logic [6:0]  opc
  );
    logic [12:0] imm;
    begin
      imm = imm_b[12:0];
      return {imm[12], imm[10:5], rs2, rs1, f3, imm[4:1], imm[11], opc};
    end
  endfunction

  function automatic logic [31:0] enc_u(
    input logic [19:0] imm20,
    input logic [4:0]  rd,
    input logic [6:0]  opc
  );
    return {imm20, rd, opc};
  endfunction

  // imm_j é offset em bytes (múltiplo de 2). bit0 sempre 0.
  function automatic logic [31:0] enc_j(
    input int          imm_j,
    input logic [4:0]  rd,
    input logic [6:0]  opc
  );
    logic [20:0] imm;
    begin
      imm = imm_j[20:0];
      return {imm[20], imm[10:1], imm[11], imm[19:12], rd, opc};
    end
  endfunction

  // -----------------------------
  // Clock tick
  // -----------------------------
  task automatic tick();
    #1 clk = 1'b1;
    #1 clk = 1'b0;
    #1;
  endtask

  // -----------------------------
  // Init via hierarquia
  // -----------------------------
  task automatic init_imem(input logic [31:0] fill);
    int i;
    begin
      // sobrescreve o conteúdo carregado por program.hex
      for (i = 0; i < 1024; i++) begin
        dut.dp.instr_mem.I_mem[i] = fill;
      end
    end
  endtask

  task automatic init_regs();
    int i;
    begin
      for (i = 0; i < 32; i++) begin
        dut.dp.reg_file.Registers[i] = '0;
      end
      dut.dp.reg_file.Registers[0] = '0;
    end
  endtask

  task automatic init_dmem();
    int i;
    begin
      for (i = 0; i < 1024; i++) begin
        dut.dp.data_mem.D_mem[i] = '0;
      end
    end
  endtask

  task automatic set_reg(input int r, input logic [N-1:0] v);
    if (r != 0) dut.dp.reg_file.Registers[r] = v;
  endtask

  function automatic logic [N-1:0] get_reg(input int r);
    if (r == 0) return '0;
    return dut.dp.reg_file.Registers[r];
  endfunction


  function automatic int unsigned dmem_index(input logic [N-1:0] addr_bytes);
    return int'(addr_bytes[12:3]);
  endfunction

  // -----------------------------
  // Checks
  // -----------------------------
  task automatic expect_reg(input int r, input logic [N-1:0] exp, input string tag);
    logic [N-1:0] got;
    begin
      got = get_reg(r);
      if (got !== exp) begin
        $display("[FAIL] %s | x%0d got=0x%016h exp=0x%016h", tag, r, got, exp);
        $fatal;
      end else begin
        $display("[ OK ] %s | x%0d = 0x%016h", tag, r, got);
      end
    end
  endtask

  task automatic expect_pc(input logic [N-1:0] exp, input string tag);
    logic [N-1:0] got;
    begin
      got = dut.dp.pc_index;
      if (got !== exp) begin
        $display("[FAIL] %s | PC got=0x%016h exp=0x%016h", tag, got, exp);
        $fatal;
      end else begin
        $display("[ OK ] %s | PC = 0x%016h", tag, got);
      end
    end
  endtask


  // -----------------------------
  // Reset helper
  // -----------------------------
  task automatic do_reset();
    begin
      rst = 1'b1;
      tick();      // aplica reset na borda de subida
      rst = 1'b0;
      #1;          // só deixa estabilizar; NÃO execute outro tick aqui
    end
  endtask

  // -----------------------------
  // Testes
  // -----------------------------
  initial begin
    clk = 1'b0;
    rst = 1'b0;

    // sobrescreve memórias após o initial $readmemh do InstructionMemory
    #2;

    // =============================
    // Grupo 1: R-type
    // =============================
    init_imem(enc_nop());
    init_regs();
    init_dmem();
    do_reset();

    set_reg(1, 64'd10);
    set_reg(2, 64'd20);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b000, 5'd3, OP); // add x3,x1,x2
    tick();
    expect_reg(3, 64'd30, "ADD");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd10);
    set_reg(2, 64'd20);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b000, 5'd3, OP); // sub
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FFF6, "SUB (10-20)");

    // AND/OR/XOR
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFF00_FF00_FF00_FF00);
    set_reg(2, 64'h0F0F_0F0F_0F0F_0F0F);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b111, 5'd3, OP); // and
    tick();
    expect_reg(3, 64'h0F00_0F00_0F00_0F00, "AND");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hF000_0000_0000_0000);
    set_reg(2, 64'h0FFF_FFFF_FFFF_FFFF);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b110, 5'd3, OP); // or
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FFFF, "OR");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hAAAA_AAAA_AAAA_AAAA);
    set_reg(2, 64'hFFFF_0000_FFFF_0000);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b100, 5'd3, OP); // xor
    tick();
    expect_reg(3, 64'h5555_AAAA_5555_AAAA, "XOR");

    // Shift: SLL, SRL, SRA
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    set_reg(2, 64'd3);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b001, 5'd3, OP); // sll
    tick();
    expect_reg(3, 64'd8, "SLL");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    set_reg(2, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b101, 5'd3, OP); // srl
    tick();
    expect_reg(3, 64'h4000_0000_0000_0000, "SRL");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    set_reg(2, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b101, 5'd3, OP); // sra
    tick();
    expect_reg(3, 64'hC000_0000_0000_0000, "SRA");

    // SLT/SLTU
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // -1
    set_reg(2, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b010, 5'd3, OP); // slt (signed)
    tick();
    expect_reg(3, 64'd1, "SLT signed (-1 < 1)");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // unsigned max
    set_reg(2, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b011, 5'd3, OP); // sltu
    tick();
    expect_reg(3, 64'd0, "SLTU (max < 1) false");

    // =============================
    // Grupo 2: I-type
    // =============================
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd10);
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd20, 5'd1, 3'b000, 5'd3, OP_IMM); // addi x3,x1,20
    tick();
    expect_reg(3, 64'd30, "ADDI");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h00FF);
    dut.dp.instr_mem.I_mem[0] = enc_i(12'h0F0, 5'd1, 3'b111, 5'd3, OP_IMM); // andi
    tick();
    expect_reg(3, 64'h00F0, "ANDI");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h00F0);
    dut.dp.instr_mem.I_mem[0] = enc_i(12'h00F, 5'd1, 3'b110, 5'd3, OP_IMM); // ori
    tick();
    expect_reg(3, 64'h00FF, "ORI");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h00AA);
    dut.dp.instr_mem.I_mem[0] = enc_i(12'h0FF, 5'd1, 3'b100, 5'd3, OP_IMM); // xori
    tick();
    expect_reg(3, 64'h0055, "XORI");

    // slli (imm[11:6]=0, shamt=3)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_i({6'b000000, 6'd3}, 5'd1, 3'b001, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'd8, "SLLI");

    // srli (funct7b5=0, shamt=1)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    dut.dp.instr_mem.I_mem[0] = enc_i({6'b000000, 6'd1}, 5'd1, 3'b101, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'h4000_0000_0000_0000, "SRLI");

    // srai (imm[11:6]=010000, shamt=1) => bit30=1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    dut.dp.instr_mem.I_mem[0] = enc_i({6'b010000, 6'd1}, 5'd1, 3'b101, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'hC000_0000_0000_0000, "SRAI");

    // slti / sltiu
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // -1
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd1, 5'd1, 3'b010, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'd1, "SLTI (-1 < 1)");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // unsigned max
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd1, 5'd1, 3'b011, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'd0, "SLTIU (max < 1) false");

    // =============================
    // Grupo 3: LUI / AUIPC
    // =============================
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    dut.dp.instr_mem.I_mem[0] = enc_u(20'h12345, 5'd3, LUI_OP); // lui x3,0x12345
    tick();
    expect_reg(3, 64'h0000_0000_1234_5000, "LUI");

    // AUIPC com PC conhecido: roda 2 nops (PC=8), depois auipc
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    dut.dp.instr_mem.I_mem[0] = enc_nop(); // pc=0
    dut.dp.instr_mem.I_mem[1] = enc_nop(); // pc=4
    dut.dp.instr_mem.I_mem[2] = enc_u(20'h00001, 5'd3, AUIPC_OP); // auipc x3,0x1 => 0x1000 + PC(8)=0x1008
    tick(); tick(); tick();
    expect_reg(3, 64'h0000_0000_0000_1008, "AUIPC (PC=8)");

    // =============================
    // Grupo 4: Loads / Stores (base 0x100)
    // =============================
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_0000_0100); // x1 = base
    // coloca uma palavra em memória: 0xABCD1234_80000000 (bytes: 00 00 00 80 34 12 CD AB)
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;

    // LB (offset 3 -> byte 0x80 => sign-ext)
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd3, 5'd1, 3'b000, 5'd3, LOAD_OP); // lb x3,3(x1)
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FF80, "LB");

    // LBU (offset 3 -> 0x80 => zero-ext)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd3, 5'd1, 3'b100, 5'd3, LOAD_OP); // lbu
    tick();
    expect_reg(3, 64'h0000_0000_0000_0080, "LBU");

    // LH (offset 2 -> half=0x8000 => sign-ext)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd2, 5'd1, 3'b001, 5'd3, LOAD_OP); // lh
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_8000, "LH");

    // LHU (offset 2 -> 0x8000 => zero-ext)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd2, 5'd1, 3'b101, 5'd3, LOAD_OP); // lhu
    tick();
    expect_reg(3, 64'h0000_0000_0000_8000, "LHU");

    // LW (offset 0 -> 0x80000000 => esperado: sign-ext em RV64)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd0, 5'd1, 3'b010, 5'd3, LOAD_OP); // lw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_8000_0000, "LW (RV64 sign-ext)");

    // LD (funct3=011)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'h1122_3344_5566_7788;
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd0, 5'd1, 3'b011, 5'd3, LOAD_OP); // ld
    tick();
    expect_reg(3, 64'h1122_3344_5566_7788, "LD");

    // LWU (RV64 extra: funct3=110) => zero-ext do word baixo
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.dp.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd0, 5'd1, 3'b110, 5'd3, LOAD_OP); // lwu
    tick();
    expect_reg(3, 64'h0000_0000_8000_0000, "LWU");

    // Stores: SB/SH/SW/SD
    // SD: store doubleword (funct3=011)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    set_reg(2, 64'hDEAD_BEEF_CAFE_BABE);
    dut.dp.instr_mem.I_mem[0] = enc_s(12'd0, 5'd2, 5'd1, 3'b011, STORE_OP); // sd x2,0(x1)
    tick();
    if (dut.dp.data_mem.D_mem[dmem_index(64'h100)] !== 64'hDEAD_BEEF_CAFE_BABE) begin
      $display("[FAIL] SD mem got=0x%016h exp=0x%016h", dut.dp.data_mem.D_mem[dmem_index(64'h100)], 64'hDEAD_BEEF_CAFE_BABE);
      $fatal;
    end else $display("[ OK ] SD");

    // SW: store word (funct3=010) em offset 0
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    set_reg(2, 64'hFFFF_FFFF_A1B2_C3D4);
    dut.dp.instr_mem.I_mem[0] = enc_s(12'd0, 5'd2, 5'd1, 3'b010, STORE_OP); // sw
    tick();
    if (dut.dp.data_mem.D_mem[dmem_index(64'h100)][31:0] !== 32'hA1B2_C3D4) begin
      $display("[FAIL] SW low32 got=0x%08h exp=0x%08h", dut.dp.data_mem.D_mem[dmem_index(64'h100)][31:0], 32'hA1B2_C3D4);
      $fatal;
    end else $display("[ OK ] SW");

    // =============================
    // Grupo 5: Branches (toma / não toma)
    // =============================
    // BEQ taken: x1==x2 -> PC salta pra +8 e executa addi x3,2
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd5); set_reg(2, 64'd5);
    dut.dp.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b000, BRANCH_OP); // beq x1,x2,+8
    dut.dp.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,1
    dut.dp.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,2
    tick(); // branch decide PC
    tick(); // executa a instrução do destino
    expect_reg(3, 64'd2, "BEQ taken");

    // BNE not taken: x1==x2 -> cai em addi x3,1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd5); set_reg(2, 64'd5);
    dut.dp.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b001, BRANCH_OP); // bne
    dut.dp.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.dp.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd1, "BNE not taken");

    // BLT taken: -1 < 1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF);
    set_reg(2, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b100, BRANCH_OP); // blt
    dut.dp.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.dp.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd2, "BLT taken");

    // =============================
    // Grupo 6: JAL / JALR
    // =============================
    // JAL: pula +8 e grava link (PC+4) em x1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    dut.dp.instr_mem.I_mem[0] = enc_j(8, 5'd1, JAL_OP); // jal x1,+8
    dut.dp.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,1 (não executa)
    dut.dp.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,2
    tick(); // jal
    expect_reg(1, 64'd4, "JAL link x1=PC+4");
    tick(); // executa destino
    expect_reg(3, 64'd2, "JAL jump target");

    // JALR: rs1=9, imm=0 => target=(9)&~1=8, link em x1=4
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(2, 64'd9); // x2 = 9
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd0, 5'd2, 3'b000, 5'd1, JALR_OP); // jalr x1,0(x2)
    dut.dp.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.dp.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick();
    expect_reg(1, 64'd4, "JALR link");
    tick();
    expect_reg(3, 64'd2, "JALR target @8");

    // =============================
    // Grupo 7: RV64I word ops (*W, *IW)
    // =============================
    // ADDW: (0x1_0000_0000 + 0x1_0000_0000) low32=0 => sign-ext=0
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0001_0000_0000);
    set_reg(2, 64'h0000_0001_0000_0000);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b000, 5'd3, OP_32); // addw
    tick();
    expect_reg(3, 64'h0000_0000_0000_0000, "ADDW sign-ext low32");

    // SUBW: 0 - 1 => low32=0xFFFF_FFFF => sign-ext = -1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd0);
    set_reg(2, 64'd1);
    dut.dp.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b000, 5'd3, OP_32); // subw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FFFF, "SUBW -> -1");

    // ADDIW: 0x7FFF_FFFF + 1 => 0x8000_0000 => sign-ext = 0xFFFF_FFFF_8000_0000
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_7FFF_FFFF);
    dut.dp.instr_mem.I_mem[0] = enc_i(12'd1, 5'd1, 3'b000, 5'd3, OP_IMM_32); // addiw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_8000_0000, "ADDIW sign-ext");

    $display("\n==============================");
    $display("ALL TOPLEVEL TESTS PASSED ✅");
    $display("==============================\n");
    $finish;
  end

endmodule
