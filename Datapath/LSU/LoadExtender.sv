module LoadExtender #(
    parameter N = 64
)(
    input  logic [N-1:0]               mem_readData,
    input  logic [2:0]                 funct3,
    input  logic [$clog2(N/8)-1:0]     byte_offset,

    output logic [N-1:0]               loadedData
);

    logic [N-1:0] shifted;
    assign shifted = mem_readData >> (byte_offset * 8);

    always_comb begin
        loadedData = '0;

        case (funct3)
            // LB
            3'b000: begin
                loadedData = {{(N-8){shifted[7]}}, shifted[7:0]};
            end

            // LH
            3'b001: begin
                loadedData = {{(N-16){shifted[15]}}, shifted[15:0]};
            end

            // LW
            3'b010: begin
                loadedData = {{(N-32){shifted[31]}}, shifted[31:0]};
            end

            // LD
            3'b011: begin
                loadedData = shifted;
            end

            // LBU
            3'b100: begin
                loadedData = {{(N-8){1'b0}}, shifted[7:0]};
            end

            // LHU
            3'b101: begin
                loadedData = {{(N-16){1'b0}}, shifted[15:0]};
            end

            // LWU
            3'b110: begin
                loadedData = {{(N-32){1'b0}}, shifted[31:0]};
            end

            default: begin
                loadedData = '0;
            end
        endcase
    end

endmodule
