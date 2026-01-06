// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoadExtender.h for the primary calling header

#include "VLoadExtender__pch.h"
#include "VLoadExtender__Syms.h"
#include "VLoadExtender___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__act(VLoadExtender___024root* vlSelf);
#endif  // VL_DEBUG

void VLoadExtender___024root___eval_triggers__act(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_triggers__act\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VLoadExtender___024root___dump_triggers__act(vlSelf);
    }
#endif
}
