// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLSU.h for the primary calling header

#include "VLSU__pch.h"
#include "VLSU___024root.h"

VL_ATTR_COLD void VLSU___024root___eval_static(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_static\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu__DOT__clk__0 
        = vlSelfRef.tb_lsu__DOT__clk;
}

VL_ATTR_COLD void VLSU___024root___eval_initial__TOP(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_initial__TOP\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lsu__DOT__clk = 0U;
}

VL_ATTR_COLD void VLSU___024root___eval_final(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_final\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSU___024root___dump_triggers__stl(VLSU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VLSU___024root___eval_phase__stl(VLSU___024root* vlSelf);

VL_ATTR_COLD void VLSU___024root___eval_settle(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_settle\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VLSU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_lsu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VLSU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSU___024root___dump_triggers__stl(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___dump_triggers__stl\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VLSU___024root___act_comb__TOP__0(VLSU___024root* vlSelf);

VL_ATTR_COLD void VLSU___024root___eval_stl(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_stl\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VLSU___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VLSU___024root___eval_triggers__stl(VLSU___024root* vlSelf);

VL_ATTR_COLD bool VLSU___024root___eval_phase__stl(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_phase__stl\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VLSU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VLSU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSU___024root___dump_triggers__act(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___dump_triggers__act\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_lsu.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSU___024root___dump_triggers__nba(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___dump_triggers__nba\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_lsu.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VLSU___024root___ctor_var_reset(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___ctor_var_reset\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_lsu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1142111362910026600ull);
    vlSelf->tb_lsu__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6744863122029717577ull);
    vlSelf->tb_lsu__DOT__store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8794521414462274393ull);
    vlSelf->tb_lsu__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3624863582073990965ull);
    vlSelf->tb_lsu__DOT__addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6463539211773318356ull);
    vlSelf->tb_lsu__DOT__storeData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2172595150192259860ull);
    vlSelf->tb_lsu__DOT__writeEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4109339415192529029ull);
    vlSelf->tb_lsu__DOT__mem_writeData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8778731503002851548ull);
    vlSelf->tb_lsu__DOT__mem_writeMask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15920591127284045210ull);
    vlSelf->tb_lsu__DOT__exc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2379722351752577281ull);
    vlSelf->tb_lsu__DOT__exc_StLd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1607840917411888794ull);
    vlSelf->tb_lsu__DOT__exc_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2857133681660832440ull);
    vlSelf->tb_lsu__DOT__readDatabus = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3366727497289654994ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_lsu__DOT__mem__DOT__D_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16504298738018815943ull);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_lsu__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14732321432319048053ull);
}
