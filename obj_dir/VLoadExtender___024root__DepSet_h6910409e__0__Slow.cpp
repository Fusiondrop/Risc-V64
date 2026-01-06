// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoadExtender.h for the primary calling header

#include "VLoadExtender__pch.h"
#include "VLoadExtender___024root.h"

VL_ATTR_COLD void VLoadExtender___024root___eval_static(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_static\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VLoadExtender___024root___eval_final(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_final\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__stl(VLoadExtender___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VLoadExtender___024root___eval_phase__stl(VLoadExtender___024root* vlSelf);

VL_ATTR_COLD void VLoadExtender___024root___eval_settle(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_settle\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VLoadExtender___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_LoadExtender.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VLoadExtender___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__stl(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___dump_triggers__stl\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VLoadExtender___024root___act_sequent__TOP__0(VLoadExtender___024root* vlSelf);

VL_ATTR_COLD void VLoadExtender___024root___eval_stl(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_stl\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VLoadExtender___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VLoadExtender___024root___eval_triggers__stl(VLoadExtender___024root* vlSelf);

VL_ATTR_COLD bool VLoadExtender___024root___eval_phase__stl(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_phase__stl\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VLoadExtender___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VLoadExtender___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__act(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___dump_triggers__act\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__nba(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___dump_triggers__nba\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VLoadExtender___024root___ctor_var_reset(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___ctor_var_reset\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_LoadExtender__DOT__mem_readData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5666705586542979811ull);
    vlSelf->tb_LoadExtender__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16740815568200603436ull);
    vlSelf->tb_LoadExtender__DOT__byte_offset = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6437720779054335101ull);
    vlSelf->tb_LoadExtender__DOT__loadedData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4851840103805874660ull);
    }
