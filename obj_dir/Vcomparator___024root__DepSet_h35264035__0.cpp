// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"
#include "Vcomparator___024root.h"

VlCoroutine Vcomparator___024root___eval_initial__TOP__Vtiming__0(Vcomparator___024root* vlSelf);

void Vcomparator___024root___eval_initial(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_initial\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcomparator___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vcomparator___024root___eval_initial__TOP__Vtiming__0(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_comparator__DOT__DataInA = 4U;
    vlSelfRef.tb_comparator__DOT__DataInB = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         10);
    VL_WRITEF_NX("Teste1: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 4U;
    vlSelfRef.tb_comparator__DOT__DataInB = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         15);
    VL_WRITEF_NX("Teste2: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 2U;
    vlSelfRef.tb_comparator__DOT__DataInB = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         20);
    VL_WRITEF_NX("Teste3: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 0x20U;
    vlSelfRef.tb_comparator__DOT__DataInB = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         25);
    VL_WRITEF_NX("Teste4: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 0x40U;
    vlSelfRef.tb_comparator__DOT__DataInB = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         30);
    VL_WRITEF_NX("Teste5: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 0x20U;
    vlSelfRef.tb_comparator__DOT__DataInB = 0x40U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         35);
    VL_WRITEF_NX("Teste6: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 0x20U;
    vlSelfRef.tb_comparator__DOT__DataInB = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         40);
    VL_WRITEF_NX("Teste7: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 0x20U;
    vlSelfRef.tb_comparator__DOT__DataInB = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         45);
    VL_WRITEF_NX("Teste8: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
    vlSelfRef.tb_comparator__DOT__DataInA = 8U;
    vlSelfRef.tb_comparator__DOT__DataInB = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_comparator.sv", 
                                         50);
    VL_WRITEF_NX("Teste9: A=%3# B=%3# -> gt=%b lt=%b eq=%b\n",0,
                 8,vlSelfRef.tb_comparator__DOT__DataInA,
                 8,(IData)(vlSelfRef.tb_comparator__DOT__DataInB),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15)))))),
                 1,((((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                      & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                     ^ (((IData)((0xcU == (0xcU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)))) 
                         & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                        ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x) 
                             >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                           ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11)))) 
                    | ((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                       & (((IData)((0xeU == (0xeU & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                           & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2)) 
                          ^ (((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x)))) 
                              & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5)) 
                             ^ ((((IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x) 
                                  >> 3U) & (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8)) 
                                ^ (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11)))))),
                 1,((0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x)) 
                    & (0xfU == (IData)(vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x))));
}

void Vcomparator___024root___act_sequent__TOP__0(Vcomparator___024root* vlSelf);

void Vcomparator___024root___eval_act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcomparator___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcomparator___024root___act_sequent__TOP__0(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___act_sequent__TOP__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18 
        = (1U & ((~ (IData)(vlSelfRef.tb_comparator__DOT__DataInB)) 
                 & (IData)(vlSelfRef.tb_comparator__DOT__DataInA)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                     >> 1U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                >> 1U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                     >> 2U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                >> 2U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                     >> 3U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                >> 3U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2 
        = (1U & ((~ (IData)(vlSelfRef.tb_comparator__DOT__DataInA)) 
                 & (IData)(vlSelfRef.tb_comparator__DOT__DataInB)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                     >> 1U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                >> 1U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                     >> 2U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                >> 2U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                     >> 3U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                >> 3U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__comp0__DOT__x 
        = (0xfU & (~ (((8U & ((0xfffffff8U & (((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                   >> 3U)) 
                                               << 3U) 
                                              & (IData)(vlSelfRef.tb_comparator__DOT__DataInB))) 
                              ^ (0xfffffff8U & (((~ 
                                                  ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                   >> 3U)) 
                                                 << 3U) 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DataInA))))) 
                       | (4U & ((0xfffffffcU & (((~ 
                                                  ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                   >> 2U)) 
                                                 << 2U) 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DataInB))) 
                                ^ (0xfffffffcU & ((
                                                   (~ 
                                                    ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                     >> 2U)) 
                                                   << 2U) 
                                                  & (IData)(vlSelfRef.tb_comparator__DOT__DataInA)))))) 
                      | ((2U & ((0xfffffffeU & (((~ 
                                                  ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                   >> 1U)) 
                                                 << 1U) 
                                                & (IData)(vlSelfRef.tb_comparator__DOT__DataInB))) 
                                ^ (0xfffffffeU & ((
                                                   (~ 
                                                    ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                     >> 1U)) 
                                                   << 1U) 
                                                  & (IData)(vlSelfRef.tb_comparator__DOT__DataInA))))) 
                         | (1U & (((~ (IData)(vlSelfRef.tb_comparator__DOT__DataInA)) 
                                   & (IData)(vlSelfRef.tb_comparator__DOT__DataInB)) 
                                  ^ ((~ (IData)(vlSelfRef.tb_comparator__DOT__DataInB)) 
                                     & (IData)(vlSelfRef.tb_comparator__DOT__DataInA))))))));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                     >> 4U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                >> 4U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                     >> 5U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                >> 5U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                     >> 6U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                >> 6U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15 
        = (IData)(((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                       >> 7U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                  >> 7U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                     >> 4U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                >> 4U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                     >> 5U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                >> 5U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8 
        = (1U & ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                     >> 6U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                >> 6U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11 
        = (IData)(((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                       >> 7U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                  >> 7U)));
    vlSelfRef.tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x 
        = (0xfU & (~ (((8U & ((0xffffff8U & (((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                  >> 7U)) 
                                              << 3U) 
                                             & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                >> 4U))) 
                              ^ (0xffffff8U & (((~ 
                                                 ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                  >> 7U)) 
                                                << 3U) 
                                               & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                  >> 4U))))) 
                       | (4U & ((0xffffffcU & (((~ 
                                                 ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                  >> 6U)) 
                                                << 2U) 
                                               & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                  >> 4U))) 
                                ^ (0xffffffcU & (((~ 
                                                   ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                    >> 6U)) 
                                                  << 2U) 
                                                 & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                    >> 4U)))))) 
                      | ((2U & ((0xffffffeU & (((~ 
                                                 ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                  >> 5U)) 
                                                << 1U) 
                                               & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                  >> 4U))) 
                                ^ (0xffffffeU & (((~ 
                                                   ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                    >> 5U)) 
                                                  << 1U) 
                                                 & ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                                    >> 4U))))) 
                         | (1U & (((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                       >> 4U)) & ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                                  >> 4U)) 
                                  ^ ((~ ((IData)(vlSelfRef.tb_comparator__DOT__DataInB) 
                                         >> 4U)) & 
                                     ((IData)(vlSelfRef.tb_comparator__DOT__DataInA) 
                                      >> 4U))))))));
}

void Vcomparator___024root___eval_nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcomparator___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vcomparator___024root___timing_resume(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___timing_resume\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcomparator___024root___eval_triggers__act(Vcomparator___024root* vlSelf);

bool Vcomparator___024root___eval_phase__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcomparator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcomparator___024root___timing_resume(vlSelf);
        Vcomparator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcomparator___024root___eval_phase__nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcomparator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__nba(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__act(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomparator___024root___eval(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcomparator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_comparator.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcomparator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/tb_comparator.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcomparator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcomparator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcomparator___024root___eval_debug_assertions(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_debug_assertions\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
