TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing

NEANDER_RV64I = \
	./ULA/ULA.sv \
	./ULA/comparator.sv \
	./ULA/rippleSubAdder.sv \
	./ULA/sll.sv \
	./ULA/srl.sv \
	./ULA/sra.sv \
	./ULA/mux2_1.sv

TESTBENCH = ./testbench/tb_ula.sv \

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(NEANDER_RV64I) $(TESTBENCH)
clean:
	rm -rf obj_dir