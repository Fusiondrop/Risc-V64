// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"
#include "Vcomparator___024root.h"

VL_ATTR_COLD void Vcomparator___024root___eval_static(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_static\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcomparator___024root___eval_final(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_final\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__stl(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcomparator___024root___eval_phase__stl(Vcomparator___024root* vlSelf);

VL_ATTR_COLD void Vcomparator___024root___eval_settle(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_settle\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcomparator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_comparator.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcomparator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__stl(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__stl\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcomparator___024root___act_sequent__TOP__0(Vcomparator___024root* vlSelf);

VL_ATTR_COLD void Vcomparator___024root___eval_stl(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_stl\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcomparator___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcomparator___024root___eval_triggers__stl(Vcomparator___024root* vlSelf);

VL_ATTR_COLD bool Vcomparator___024root___eval_phase__stl(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__stl\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcomparator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcomparator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcomparator___024root___ctor_var_reset(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___ctor_var_reset\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_comparator__DOT__DataInA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8967573617578177644ull);
    vlSelf->tb_comparator__DOT__DataInB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13583620783555930878ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT__x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2601993285207592729ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6240290983710055041ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 354931715954397495ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1329291235574886406ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5364401875971998724ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10342276484915796502ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2021675087036059218ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13350563487071639633ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__comp0__DOT____VdfgRegularize_h72fef5c9_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17829660059424363549ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT__x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18371037659144018708ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10044499647654497911ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15926855433453649710ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7556721663033822301ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18124627860998830031ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14606184358428853878ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5581046855072177461ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7671257705006965960ull);
    vlSelf->tb_comparator__DOT__DUT__DOT__cascade_comp__BRA__1__KET____DOT__comp__DOT____VdfgRegularize_h72fef5c9_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5333526778676355193ull);
    }
