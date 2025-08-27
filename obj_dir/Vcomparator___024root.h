// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomparator.h for the primary calling header

#ifndef VERILATED_VCOMPARATOR___024ROOT_H_
#define VERILATED_VCOMPARATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcomparator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcomparator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ tb_comparator__DOT__DataInA;
    CData/*7:0*/ tb_comparator__DOT__DataInB;
    CData/*3:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT__x;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18;
    CData/*3:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17;
    CData/*0:0*/ tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcomparator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcomparator___024root(Vcomparator__Syms* symsp, const char* v__name);
    ~Vcomparator___024root();
    VL_UNCOPYABLE(Vcomparator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
