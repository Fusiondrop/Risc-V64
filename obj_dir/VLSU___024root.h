// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLSU.h for the primary calling header

#ifndef VERILATED_VLSU___024ROOT_H_
#define VERILATED_VLSU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VLSU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VLSU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_lsu__DOT__clk;
    CData/*0:0*/ tb_lsu__DOT__load;
    CData/*0:0*/ tb_lsu__DOT__store;
    CData/*2:0*/ tb_lsu__DOT__funct3;
    CData/*0:0*/ tb_lsu__DOT__writeEnable;
    CData/*7:0*/ tb_lsu__DOT__mem_writeMask;
    CData/*0:0*/ tb_lsu__DOT__exc_valid;
    CData/*0:0*/ tb_lsu__DOT__exc_StLd;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lsu__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_lsu__DOT__addr;
    QData/*63:0*/ tb_lsu__DOT__storeData;
    QData/*63:0*/ tb_lsu__DOT__mem_writeData;
    QData/*63:0*/ tb_lsu__DOT__exc_addr;
    QData/*63:0*/ tb_lsu__DOT__readDatabus;
    VlUnpacked<QData/*63:0*/, 1024> tb_lsu__DOT__mem__DOT__D_mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hec994c29__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VLSU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLSU___024root(VLSU__Syms* symsp, const char* v__name);
    ~VLSU___024root();
    VL_UNCOPYABLE(VLSU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
