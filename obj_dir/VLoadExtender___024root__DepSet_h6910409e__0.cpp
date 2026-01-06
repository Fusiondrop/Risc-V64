// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoadExtender.h for the primary calling header

#include "VLoadExtender__pch.h"
#include "VLoadExtender___024root.h"

VlCoroutine VLoadExtender___024root___eval_initial__TOP__Vtiming__0(VLoadExtender___024root* vlSelf);

void VLoadExtender___024root___eval_initial(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_initial\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VLoadExtender___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VLoadExtender___024root___eval_initial__TOP__Vtiming__0(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_initial__TOP__Vtiming__0\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_LoadExtender__DOT__mem_readData = 0x807fff001234569aULL;
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 0U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         28);
    VL_WRITEF_NX("\n==== LB ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 0U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         38);
    if (VL_LIKELY(((0xffffffffffffff9aULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LB offset0 (0x9A -> sign)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LB offset0 got=%x exp=ffffffffffffff9a\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 42, "");
    }
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 0U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 7U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         48);
    if (VL_LIKELY(((0xffffffffffffff80ULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LB offset7 (0x80 -> sign)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LB offset7 got=%x exp=ffffffffffffff80\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 52, "");
    }
    VL_WRITEF_NX("\n==== LBU ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 4U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         63);
    if (VL_LIKELY(((0x9aULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LBU offset0 (0x9A -> zero)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LBU offset0 got=%x exp=000000000000009a\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 67, "");
    }
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 4U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         73);
    if (VL_LIKELY(((0xffULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LBU offset5 (0xFF -> zero)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LBU offset5 got=%x exp=00000000000000ff\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 77, "");
    }
    VL_WRITEF_NX("\n==== LH ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 1U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         88);
    if (VL_LIKELY(((0x569aULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LH offset0 (0x569A -> sign+)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LH offset0 got=%x exp=000000000000569a\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 92, "");
    }
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 1U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 6U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         98);
    if (VL_LIKELY(((0xffffffffffff807fULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LH offset6 (0x807F -> sign-)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LH offset6 got=%x exp=ffffffffffff807f\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 102, "");
    }
    VL_WRITEF_NX("\n==== LHU ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 5U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 6U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         113);
    if (VL_LIKELY(((0x807fULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LHU offset6 (0x807F -> zero)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LHU offset6 got=%x exp=000000000000807f\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 117, "");
    }
    VL_WRITEF_NX("\n==== LW ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 2U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         128);
    if (VL_LIKELY(((0x1234569aULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LW offset0 (0x1234569A -> sign+)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LW offset0 got=%x exp=000000001234569a\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 132, "");
    }
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 2U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 4U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         138);
    if (VL_LIKELY(((0xffffffff807fff00ULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LW offset4 (0x807FFF00 -> sign-)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LW offset4 got=%x exp=ffffffff807fff00\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 142, "");
    }
    VL_WRITEF_NX("\n==== LWU ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 6U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 4U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         153);
    if (VL_LIKELY(((0x807fff00ULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LWU offset4 (0x807FFF00 -> zero)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LWU offset4 got=%x exp=00000000807fff00\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 157, "");
    }
    VL_WRITEF_NX("\n==== LD ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 3U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         168);
    if (VL_LIKELY(((0x807fff001234569aULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LD offset0 (full word)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LD offset0 got=%x exp=807fff001234569a\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 172, "");
    }
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 3U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         178);
    if (VL_LIKELY(((0x807fff0012ULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] LD offset3 (>>24)\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] LD offset3 got=%x exp=000000807fff0012\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 187, "");
    }
    VL_WRITEF_NX("\n==== DEFAULT ====\n",0);
    vlSelfRef.tb_LoadExtender__DOT__funct3 = 7U;
    vlSelfRef.tb_LoadExtender__DOT__byte_offset = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_LoadExtender.sv", 
                                         197);
    if (VL_LIKELY(((0ULL == vlSelfRef.tb_LoadExtender__DOT__loadedData)))) {
        VL_WRITEF_NX("[PASS] default -> 0\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] default got=%x exp=0000000000000000\n",0,
                     64,vlSelfRef.tb_LoadExtender__DOT__loadedData);
        VL_FINISH_MT("testbench/tb_LoadExtender.sv", 201, "");
    }
    VL_WRITEF_NX("\nALL LoadExtender TESTS PASSED \342\234\205\n",0);
    VL_FINISH_MT("testbench/tb_LoadExtender.sv", 205, "");
}

void VLoadExtender___024root___act_sequent__TOP__0(VLoadExtender___024root* vlSelf);

void VLoadExtender___024root___eval_act(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_act\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VLoadExtender___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VLoadExtender___024root___act_sequent__TOP__0(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___act_sequent__TOP__0\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ tb_LoadExtender__DOT__dut__DOT__shifted;
    tb_LoadExtender__DOT__dut__DOT__shifted = 0;
    // Body
    tb_LoadExtender__DOT__dut__DOT__shifted = VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_LoadExtender__DOT__mem_readData, 
                                                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_LoadExtender__DOT__byte_offset), 3U));
    vlSelfRef.tb_LoadExtender__DOT__loadedData = ((4U 
                                                   & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                     ? 0ULL
                                                     : (QData)((IData)(tb_LoadExtender__DOT__dut__DOT__shifted)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(tb_LoadExtender__DOT__dut__DOT__shifted))))
                                                     : (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(tb_LoadExtender__DOT__dut__DOT__shifted))))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                     ? tb_LoadExtender__DOT__dut__DOT__shifted
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (tb_LoadExtender__DOT__dut__DOT__shifted 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(tb_LoadExtender__DOT__dut__DOT__shifted))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_LoadExtender__DOT__funct3))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (tb_LoadExtender__DOT__dut__DOT__shifted 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(tb_LoadExtender__DOT__dut__DOT__shifted)))))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (tb_LoadExtender__DOT__dut__DOT__shifted 
                                                                                >> 7U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(tb_LoadExtender__DOT__dut__DOT__shifted))))))));
}

void VLoadExtender___024root___eval_nba(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_nba\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VLoadExtender___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VLoadExtender___024root___timing_resume(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___timing_resume\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VLoadExtender___024root___eval_triggers__act(VLoadExtender___024root* vlSelf);

bool VLoadExtender___024root___eval_phase__act(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_phase__act\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VLoadExtender___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VLoadExtender___024root___timing_resume(vlSelf);
        VLoadExtender___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VLoadExtender___024root___eval_phase__nba(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_phase__nba\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VLoadExtender___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__nba(VLoadExtender___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLoadExtender___024root___dump_triggers__act(VLoadExtender___024root* vlSelf);
#endif  // VL_DEBUG

void VLoadExtender___024root___eval(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VLoadExtender___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_LoadExtender.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VLoadExtender___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/tb_LoadExtender.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VLoadExtender___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VLoadExtender___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VLoadExtender___024root___eval_debug_assertions(VLoadExtender___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoadExtender___024root___eval_debug_assertions\n"); );
    VLoadExtender__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
