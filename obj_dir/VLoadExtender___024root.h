// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLoadExtender.h for the primary calling header

#ifndef VERILATED_VLOADEXTENDER___024ROOT_H_
#define VERILATED_VLOADEXTENDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VLoadExtender__Syms;

class alignas(VL_CACHE_LINE_BYTES) VLoadExtender___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ tb_LoadExtender__DOT__funct3;
    CData/*2:0*/ tb_LoadExtender__DOT__byte_offset;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_LoadExtender__DOT__mem_readData;
    QData/*63:0*/ tb_LoadExtender__DOT__loadedData;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VLoadExtender__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLoadExtender___024root(VLoadExtender__Syms* symsp, const char* v__name);
    ~VLoadExtender___024root();
    VL_UNCOPYABLE(VLoadExtender___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
