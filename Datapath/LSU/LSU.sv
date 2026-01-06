module LSU #(
    parameter N = 64
)(
    input  logic               load,
    input  logic               store,

    input  logic [2:0]         funct3,
    input  logic [N-1:0]       addr,
    input  logic [N-1:0]       storeData,

    output logic               writeEnable,
    
    output logic [N-1:0]       mem_address,
    output logic [N-1:0]       mem_writeData,
    output logic [(N/8)-1:0]   mem_writeMask,

    // ---- exceções ----
    output logic               exc_valid,
    output logic               exc_StLd,
    output logic [N-1:0]       exc_addr
);

    localparam BYTES    = N/8;
    localparam OFF_BITS = $clog2(BYTES);

    logic [OFF_BITS-1:0] byte_offset;
    assign byte_offset = addr[OFF_BITS-1:0];

    logic misaligned_store;
    logic misaligned_load;

    /* Pela ISA as instruções de store e load devem estar alinhadas de acordo com o multiplo correspondente da tabela abaixo
    | Instrução | Alinhamento exigido |
    | --------- | ------------------- |
    | SB        | nenhum              |
    | SH        | addr % 2 == 0       |
    | SW        | addr % 4 == 0       |
    | SD        | addr % 8 == 0       |*/

    always_comb begin
        misaligned_store = 1'b0;

        if (store) begin
            case (funct3)
                // SB -> nunca desalinha
                3'b000: begin
                    misaligned_store = 1'b0;
                end
                // SH -> addr % 2 != 0
                3'b001: begin
                    misaligned_store = (byte_offset[0] != 1'b0);
                end
                // SW -> addr % 4 != 0
                3'b010: begin
                    misaligned_store = (byte_offset[1:0] != 2'b00);
                end
                // SD -> addr % 8 != 0
                3'b011: begin
                    misaligned_store = (byte_offset[2:0] != 3'b000);
                end
                default: begin
                    misaligned_store = 1'b0;
                end
            endcase
        end
    end

    always_comb begin
        misaligned_load = 1'b0;

        if (load) begin
            case (funct3)
                // LB / LBU -> nunca desalinha
                3'b000, 3'b100: begin
                    misaligned_load = 1'b0;
                end

                // LH / LHU -> addr % 2 != 0
                3'b001, 3'b101: begin
                    misaligned_load = (byte_offset[0] != 1'b0);
                end

                // LW / LWU -> addr % 4 != 0
                3'b010, 3'b110: begin
                    misaligned_load = (byte_offset[1:0] != 2'b00);
                end

                // LD -> addr % 8 != 0
                3'b011: begin
                    misaligned_load = (byte_offset[2:0] != 3'b000);
                end

                default: begin
                    misaligned_load = 1'b0;
                end
            endcase
        end
    end


    always_comb begin
        // Defaults
        writeEnable   = 1'b0;
        mem_writeMask = '0;
        mem_writeData = '0;

        exc_valid = 1'b0;
        exc_StLd = 1'b0;
        exc_addr  = '0;
        // LOAD
        if (load) begin
            if (misaligned_load) begin
                exc_valid = 1'b1;
                exc_StLd = 1'b0;
                exc_addr  = addr;
            end
        end

        // STORE
        else if (store) begin
            if (misaligned_store) begin
                writeEnable = 1'b0;

                exc_valid = 1'b1;
                exc_StLd = 1'b1;
                exc_addr  = addr;
            end
            // STORE válido
            else begin
                writeEnable = 1'b1;
                case (funct3)
                    // SB
                    3'b000: begin
                        mem_writeMask = ({{(BYTES-1){1'b0}},1'b1} << byte_offset);
                        mem_writeData = storeData << (byte_offset * 8);
                    end
                    // SH
                    3'b001: begin
                        mem_writeMask = ({{(BYTES-2){1'b0}},2'b11} << byte_offset);
                        mem_writeData = storeData << (byte_offset * 8);
                    end
                    // SW
                    3'b010: begin
                        mem_writeMask = ({{(BYTES-4){1'b0}},4'b1111} << byte_offset);
                        mem_writeData = storeData << (byte_offset * 8);
                    end
                    // SD
                    3'b011: begin
                        mem_writeMask = {BYTES{1'b1}};
                        mem_writeData = storeData;
                    end
                    default: begin
                        writeEnable   = 1'b0;
                        mem_writeMask = '0;
                        mem_writeData = '0;
                    end
                endcase
            end
        end
    end


    // Endereço sempre direto
    assign mem_address = addr;

endmodule
