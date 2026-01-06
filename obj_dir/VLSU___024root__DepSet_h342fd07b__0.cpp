// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLSU.h for the primary calling header

#include "VLSU__pch.h"
#include "VLSU___024root.h"

VL_ATTR_COLD void VLSU___024root___eval_initial__TOP(VLSU___024root* vlSelf);
VlCoroutine VLSU___024root___eval_initial__TOP__Vtiming__0(VLSU___024root* vlSelf);
VlCoroutine VLSU___024root___eval_initial__TOP__Vtiming__1(VLSU___024root* vlSelf);

void VLSU___024root___eval_initial(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_initial\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VLSU___024root___eval_initial__TOP(vlSelf);
    VLSU___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VLSU___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine VLSU___024root___eval_initial__TOP__Vtiming__0(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_initial__TOP__Vtiming__0\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lsu__DOT__load = 0U;
    vlSelfRef.tb_lsu__DOT__store = 0U;
    vlSelfRef.tb_lsu__DOT__funct3 = 0U;
    vlSelfRef.tb_lsu__DOT__addr = 0ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0ULL;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         70);
    VL_WRITEF_NX("\n==== Teste 1: SD (store doubleword) ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 1U;
    vlSelfRef.tb_lsu__DOT__load = 0U;
    vlSelfRef.tb_lsu__DOT__funct3 = 3U;
    vlSelfRef.tb_lsu__DOT__addr = 0ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0x11223344556677ULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         79);
    co_await vlSelfRef.__VtrigSched_hec994c29__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu.clk)", 
                                                         "testbench/tb_lsu.sv", 
                                                         80);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         81);
    if (VL_LIKELY((((0x11223344556677ULL == vlSelfRef.tb_lsu__DOT__readDatabus) 
                    & (~ (IData)(vlSelfRef.tb_lsu__DOT__exc_valid)))))) {
        VL_WRITEF_NX("Teste 1 PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 1 FAIL: lido=%x exc_valid=%b\n",0,
                     64,vlSelfRef.tb_lsu__DOT__readDatabus,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__exc_valid));
        VL_FINISH_MT("testbench/tb_lsu.sv", 87, "");
    }
    VL_WRITEF_NX("\n==== Teste 2: SB (store byte) addr=2 (offset=2) ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 1U;
    vlSelfRef.tb_lsu__DOT__load = 0U;
    vlSelfRef.tb_lsu__DOT__funct3 = 0U;
    vlSelfRef.tb_lsu__DOT__addr = 2ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0xaaULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         99);
    co_await vlSelfRef.__VtrigSched_hec994c29__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu.clk)", 
                                                         "testbench/tb_lsu.sv", 
                                                         100);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         101);
    if (VL_LIKELY((((0x11223344aa6677ULL == vlSelfRef.tb_lsu__DOT__readDatabus) 
                    & (~ (IData)(vlSelfRef.tb_lsu__DOT__exc_valid)))))) {
        VL_WRITEF_NX("Teste 2 PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 2 FAIL: lido=%x exc_valid=%b\n",0,
                     64,vlSelfRef.tb_lsu__DOT__readDatabus,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__exc_valid));
        VL_FINISH_MT("testbench/tb_lsu.sv", 107, "");
    }
    VL_WRITEF_NX("\n==== Teste 3: SW (store word) addr=0 ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 1U;
    vlSelfRef.tb_lsu__DOT__load = 0U;
    vlSelfRef.tb_lsu__DOT__funct3 = 2U;
    vlSelfRef.tb_lsu__DOT__addr = 0ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0xdeadbeefULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         118);
    co_await vlSelfRef.__VtrigSched_hec994c29__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu.clk)", 
                                                         "testbench/tb_lsu.sv", 
                                                         119);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         120);
    if (VL_LIKELY((((0x112233deadbeefULL == vlSelfRef.tb_lsu__DOT__readDatabus) 
                    & (~ (IData)(vlSelfRef.tb_lsu__DOT__exc_valid)))))) {
        VL_WRITEF_NX("Teste 3 PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 3 FAIL: lido=%x exc_valid=%b\n",0,
                     64,vlSelfRef.tb_lsu__DOT__readDatabus,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__exc_valid));
        VL_FINISH_MT("testbench/tb_lsu.sv", 126, "");
    }
    VL_WRITEF_NX("\n==== Teste 3b: SH (store halfword) addr=0 ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 1U;
    vlSelfRef.tb_lsu__DOT__load = 0U;
    vlSelfRef.tb_lsu__DOT__funct3 = 1U;
    vlSelfRef.tb_lsu__DOT__addr = 0ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0xa1b2ULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         137);
    co_await vlSelfRef.__VtrigSched_hec994c29__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu.clk)", 
                                                         "testbench/tb_lsu.sv", 
                                                         138);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         139);
    if (VL_LIKELY((((0x112233deada1b2ULL == vlSelfRef.tb_lsu__DOT__readDatabus) 
                    & (~ (IData)(vlSelfRef.tb_lsu__DOT__exc_valid)))))) {
        VL_WRITEF_NX("Teste 3b PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 3b FAIL: lido=%x exc_valid=%b\n",0,
                     64,vlSelfRef.tb_lsu__DOT__readDatabus,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__exc_valid));
        VL_FINISH_MT("testbench/tb_lsu.sv", 145, "");
    }
    VL_WRITEF_NX("\n==== Teste 4: Misaligned STORE (SW addr=2) deve gerar excecao e NAO escrever ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 1U;
    vlSelfRef.tb_lsu__DOT__load = 0U;
    vlSelfRef.tb_lsu__DOT__funct3 = 2U;
    vlSelfRef.tb_lsu__DOT__addr = 2ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0x11112222ULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         156);
    co_await vlSelfRef.__VtrigSched_hec994c29__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu.clk)", 
                                                         "testbench/tb_lsu.sv", 
                                                         157);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         158);
    if (VL_LIKELY((((((IData)(vlSelfRef.tb_lsu__DOT__exc_valid) 
                      & (IData)(vlSelfRef.tb_lsu__DOT__exc_StLd)) 
                     & (vlSelfRef.tb_lsu__DOT__exc_addr 
                        == vlSelfRef.tb_lsu__DOT__addr)) 
                    & (0x112233deada1b2ULL == vlSelfRef.tb_lsu__DOT__readDatabus))))) {
        VL_WRITEF_NX("Teste 4 PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 4 FAIL: exc_valid=%b exc_StLd=%b exc_addr=%x lido=%x\n",0,
                     1,vlSelfRef.tb_lsu__DOT__exc_valid,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__exc_StLd),
                     64,vlSelfRef.tb_lsu__DOT__exc_addr,
                     64,vlSelfRef.tb_lsu__DOT__readDatabus);
        VL_FINISH_MT("testbench/tb_lsu.sv", 166, "");
    }
    VL_WRITEF_NX("\n==== Teste 5: Misaligned LOAD (LW addr=2) deve gerar excecao ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 0U;
    vlSelfRef.tb_lsu__DOT__load = 1U;
    vlSelfRef.tb_lsu__DOT__funct3 = 2U;
    vlSelfRef.tb_lsu__DOT__addr = 2ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0ULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         176);
    if (VL_LIKELY((((((IData)(vlSelfRef.tb_lsu__DOT__exc_valid) 
                      & (~ (IData)(vlSelfRef.tb_lsu__DOT__exc_StLd))) 
                     & (vlSelfRef.tb_lsu__DOT__exc_addr 
                        == vlSelfRef.tb_lsu__DOT__addr)) 
                    & (~ (IData)(vlSelfRef.tb_lsu__DOT__writeEnable)))))) {
        VL_WRITEF_NX("Teste 5 PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 5 FAIL: exc_valid=%b exc_StLd=%b exc_addr=%x writeEnable=%b\n",0,
                     1,vlSelfRef.tb_lsu__DOT__exc_valid,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__exc_StLd),
                     64,vlSelfRef.tb_lsu__DOT__exc_addr,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__writeEnable));
        VL_FINISH_MT("testbench/tb_lsu.sv", 183, "");
    }
    VL_WRITEF_NX("\n==== Teste 6: Aligned LOAD (LW addr=4) NAO deve gerar excecao ====\n",0);
    vlSelfRef.tb_lsu__DOT__store = 0U;
    vlSelfRef.tb_lsu__DOT__load = 1U;
    vlSelfRef.tb_lsu__DOT__funct3 = 2U;
    vlSelfRef.tb_lsu__DOT__addr = 4ULL;
    vlSelfRef.tb_lsu__DOT__storeData = 0ULL;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_lsu.sv", 
                                         193);
    if (VL_LIKELY(((1U & ((~ (IData)(vlSelfRef.tb_lsu__DOT__exc_valid)) 
                          & (~ (IData)(vlSelfRef.tb_lsu__DOT__writeEnable))))))) {
        VL_WRITEF_NX("Teste 6 PASS\n",0);
    } else {
        VL_WRITEF_NX("Teste 6 FAIL: exc_valid=%b writeEnable=%b\n",0,
                     1,vlSelfRef.tb_lsu__DOT__exc_valid,
                     1,(IData)(vlSelfRef.tb_lsu__DOT__writeEnable));
        VL_FINISH_MT("testbench/tb_lsu.sv", 199, "");
    }
    VL_WRITEF_NX("\n==== TODOS OS TESTES LSU FINALIZADOS ====\n",0);
    VL_FINISH_MT("testbench/tb_lsu.sv", 203, "");
}

void VLSU___024root___act_comb__TOP__0(VLSU___024root* vlSelf);

void VLSU___024root___eval_act(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_act\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VLSU___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VLSU__ConstPool__TABLE_h3389a15b_0;
extern const VlUnpacked<CData/*0:0*/, 128> VLSU__ConstPool__TABLE_hcbd35ad4_0;

VL_INLINE_OPT void VLSU___024root___act_comb__TOP__0(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___act_comb__TOP__0\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_lsu__DOT__dut__DOT__misaligned_store;
    tb_lsu__DOT__dut__DOT__misaligned_store = 0;
    CData/*0:0*/ tb_lsu__DOT__dut__DOT__misaligned_load;
    tb_lsu__DOT__dut__DOT__misaligned_load = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.tb_lsu__DOT__readDatabus = vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
        [(0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                            >> 3U)))];
    __Vtableidx2 = ((((0U != (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                      << 6U) | ((0x20U & ((IData)(vlSelfRef.tb_lsu__DOT__addr) 
                                          << 5U)) | 
                                ((0U != (3U & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                                 << 4U))) | (((IData)(vlSelfRef.tb_lsu__DOT__funct3) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_lsu__DOT__load)));
    tb_lsu__DOT__dut__DOT__misaligned_load = VLSU__ConstPool__TABLE_h3389a15b_0
        [__Vtableidx2];
    __Vtableidx1 = (((0x40U & ((IData)(vlSelfRef.tb_lsu__DOT__addr) 
                               << 6U)) | (((0U != (3U 
                                                   & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                                           << 5U) | 
                                          ((0U != (7U 
                                                   & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.tb_lsu__DOT__funct3) 
                        << 1U) | (IData)(vlSelfRef.tb_lsu__DOT__store)));
    tb_lsu__DOT__dut__DOT__misaligned_store = VLSU__ConstPool__TABLE_hcbd35ad4_0
        [__Vtableidx1];
    vlSelfRef.tb_lsu__DOT__writeEnable = 0U;
    vlSelfRef.tb_lsu__DOT__exc_valid = 0U;
    vlSelfRef.tb_lsu__DOT__exc_StLd = 0U;
    vlSelfRef.tb_lsu__DOT__exc_addr = 0ULL;
    if (vlSelfRef.tb_lsu__DOT__load) {
        if (tb_lsu__DOT__dut__DOT__misaligned_load) {
            vlSelfRef.tb_lsu__DOT__exc_valid = 1U;
            vlSelfRef.tb_lsu__DOT__exc_StLd = 0U;
            vlSelfRef.tb_lsu__DOT__exc_addr = vlSelfRef.tb_lsu__DOT__addr;
        }
    } else if (vlSelfRef.tb_lsu__DOT__store) {
        if (tb_lsu__DOT__dut__DOT__misaligned_store) {
            vlSelfRef.tb_lsu__DOT__exc_valid = 1U;
            vlSelfRef.tb_lsu__DOT__exc_StLd = 1U;
            vlSelfRef.tb_lsu__DOT__exc_addr = vlSelfRef.tb_lsu__DOT__addr;
        }
    }
    vlSelfRef.tb_lsu__DOT__mem_writeMask = 0U;
    vlSelfRef.tb_lsu__DOT__mem_writeData = 0ULL;
    if ((1U & (~ (IData)(vlSelfRef.tb_lsu__DOT__load)))) {
        if (vlSelfRef.tb_lsu__DOT__store) {
            if (tb_lsu__DOT__dut__DOT__misaligned_store) {
                vlSelfRef.tb_lsu__DOT__writeEnable = 0U;
            } else {
                vlSelfRef.tb_lsu__DOT__writeEnable = 1U;
                if ((4U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    vlSelfRef.tb_lsu__DOT__writeEnable = 0U;
                }
            }
            if ((1U & (~ (IData)(tb_lsu__DOT__dut__DOT__misaligned_store)))) {
                if ((4U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    vlSelfRef.tb_lsu__DOT__mem_writeMask = 0U;
                    vlSelfRef.tb_lsu__DOT__mem_writeData = 0ULL;
                } else if ((2U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    if ((1U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                        vlSelfRef.tb_lsu__DOT__mem_writeMask 
                            = (0xffU & 0xffU);
                        vlSelfRef.tb_lsu__DOT__mem_writeData 
                            = vlSelfRef.tb_lsu__DOT__storeData;
                    } else {
                        vlSelfRef.tb_lsu__DOT__mem_writeMask 
                            = (0xffU & ((IData)(0xfU) 
                                        << (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))));
                        vlSelfRef.tb_lsu__DOT__mem_writeData 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_lsu__DOT__storeData, 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.tb_lsu__DOT__addr)), 3U));
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    vlSelfRef.tb_lsu__DOT__mem_writeMask 
                        = (0xffU & ((IData)(3U) << 
                                    (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))));
                    vlSelfRef.tb_lsu__DOT__mem_writeData 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_lsu__DOT__storeData, 
                                        VL_SHIFTL_III(32,32,32, 
                                                      (7U 
                                                       & (IData)(vlSelfRef.tb_lsu__DOT__addr)), 3U));
                } else {
                    vlSelfRef.tb_lsu__DOT__mem_writeMask 
                        = (0xffU & ((IData)(1U) << 
                                    (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))));
                    vlSelfRef.tb_lsu__DOT__mem_writeData 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_lsu__DOT__storeData, 
                                        VL_SHIFTL_III(32,32,32, 
                                                      (7U 
                                                       & (IData)(vlSelfRef.tb_lsu__DOT__addr)), 3U));
                }
            }
        }
    }
}

void VLSU___024root___nba_sequent__TOP__0(VLSU___024root* vlSelf);
void VLSU___024root___nba_comb__TOP__0(VLSU___024root* vlSelf);

void VLSU___024root___eval_nba(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_nba\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VLSU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VLSU___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VLSU___024root___nba_sequent__TOP__0(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___nba_sequent__TOP__0\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v0;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v0;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v0;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v1;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v1;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v1;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v2;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v2;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v2;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v3;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v3;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v3;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v4;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v4 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v4;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v4;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v5;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v5 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v5;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v5;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v6;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v6 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v6;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v6;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v7;
    __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v7 = 0;
    SData/*9:0*/ __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v7;
    __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v7;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v7 = 0;
    // Body
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v0 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v1 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v2 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v3 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v4 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v5 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v6 = 0U;
    __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v7 = 0U;
    if (vlSelfRef.tb_lsu__DOT__writeEnable) {
        if ((1U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v0 
                = (0xffU & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeData));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v0 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v1 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 8U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v1 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v2 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 0x10U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v2 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v3 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 0x18U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v3 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v3 = 1U;
        }
        if ((0x10U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v4 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 0x20U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v4 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v4 = 1U;
        }
        if ((0x20U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v5 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 0x28U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v5 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v5 = 1U;
        }
        if ((0x40U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v6 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 0x30U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v6 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v6 = 1U;
        }
        if ((0x80U & (IData)(vlSelfRef.tb_lsu__DOT__mem_writeMask))) {
            __VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v7 
                = (0xffU & (IData)((vlSelfRef.tb_lsu__DOT__mem_writeData 
                                    >> 0x38U)));
            __VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v7 
                = (0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                                     >> 3U)));
            __VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v7 = 1U;
        }
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v0) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v0]) 
               | (IData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v0)));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v1) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v1]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v2) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v2]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v2)) 
                  << 0x10U));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v3) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v3]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v3)) 
                  << 0x18U));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v4) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v4]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v4)) 
                  << 0x20U));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v5) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v5]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v5)) 
                  << 0x28U));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v6) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v6]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v6)) 
                  << 0x30U));
    }
    if (__VdlySet__tb_lsu__DOT__mem__DOT__D_mem__v7) {
        vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem[__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v7] 
            = ((0xffffffffffffffULL & vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
                [__VdlyDim0__tb_lsu__DOT__mem__DOT__D_mem__v7]) 
               | ((QData)((IData)(__VdlyVal__tb_lsu__DOT__mem__DOT__D_mem__v7)) 
                  << 0x38U));
    }
}

VL_INLINE_OPT void VLSU___024root___nba_comb__TOP__0(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___nba_comb__TOP__0\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_lsu__DOT__dut__DOT__misaligned_store;
    tb_lsu__DOT__dut__DOT__misaligned_store = 0;
    CData/*0:0*/ tb_lsu__DOT__dut__DOT__misaligned_load;
    tb_lsu__DOT__dut__DOT__misaligned_load = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((0U != (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                      << 6U) | ((0x20U & ((IData)(vlSelfRef.tb_lsu__DOT__addr) 
                                          << 5U)) | 
                                ((0U != (3U & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                                 << 4U))) | (((IData)(vlSelfRef.tb_lsu__DOT__funct3) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_lsu__DOT__load)));
    tb_lsu__DOT__dut__DOT__misaligned_load = VLSU__ConstPool__TABLE_h3389a15b_0
        [__Vtableidx2];
    __Vtableidx1 = (((0x40U & ((IData)(vlSelfRef.tb_lsu__DOT__addr) 
                               << 6U)) | (((0U != (3U 
                                                   & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                                           << 5U) | 
                                          ((0U != (7U 
                                                   & (IData)(vlSelfRef.tb_lsu__DOT__addr))) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.tb_lsu__DOT__funct3) 
                        << 1U) | (IData)(vlSelfRef.tb_lsu__DOT__store)));
    tb_lsu__DOT__dut__DOT__misaligned_store = VLSU__ConstPool__TABLE_hcbd35ad4_0
        [__Vtableidx1];
    vlSelfRef.tb_lsu__DOT__readDatabus = vlSelfRef.tb_lsu__DOT__mem__DOT__D_mem
        [(0x3ffU & (IData)((vlSelfRef.tb_lsu__DOT__addr 
                            >> 3U)))];
    vlSelfRef.tb_lsu__DOT__exc_valid = 0U;
    vlSelfRef.tb_lsu__DOT__exc_StLd = 0U;
    vlSelfRef.tb_lsu__DOT__exc_addr = 0ULL;
    if (vlSelfRef.tb_lsu__DOT__load) {
        if (tb_lsu__DOT__dut__DOT__misaligned_load) {
            vlSelfRef.tb_lsu__DOT__exc_valid = 1U;
            vlSelfRef.tb_lsu__DOT__exc_StLd = 0U;
            vlSelfRef.tb_lsu__DOT__exc_addr = vlSelfRef.tb_lsu__DOT__addr;
        }
    } else if (vlSelfRef.tb_lsu__DOT__store) {
        if (tb_lsu__DOT__dut__DOT__misaligned_store) {
            vlSelfRef.tb_lsu__DOT__exc_valid = 1U;
            vlSelfRef.tb_lsu__DOT__exc_StLd = 1U;
            vlSelfRef.tb_lsu__DOT__exc_addr = vlSelfRef.tb_lsu__DOT__addr;
        }
    }
    vlSelfRef.tb_lsu__DOT__writeEnable = 0U;
    vlSelfRef.tb_lsu__DOT__mem_writeMask = 0U;
    vlSelfRef.tb_lsu__DOT__mem_writeData = 0ULL;
    if ((1U & (~ (IData)(vlSelfRef.tb_lsu__DOT__load)))) {
        if (vlSelfRef.tb_lsu__DOT__store) {
            if (tb_lsu__DOT__dut__DOT__misaligned_store) {
                vlSelfRef.tb_lsu__DOT__writeEnable = 0U;
            } else {
                vlSelfRef.tb_lsu__DOT__writeEnable = 1U;
                if ((4U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    vlSelfRef.tb_lsu__DOT__writeEnable = 0U;
                }
            }
            if ((1U & (~ (IData)(tb_lsu__DOT__dut__DOT__misaligned_store)))) {
                if ((4U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    vlSelfRef.tb_lsu__DOT__mem_writeMask = 0U;
                    vlSelfRef.tb_lsu__DOT__mem_writeData = 0ULL;
                } else if ((2U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    if ((1U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                        vlSelfRef.tb_lsu__DOT__mem_writeMask 
                            = (0xffU & 0xffU);
                        vlSelfRef.tb_lsu__DOT__mem_writeData 
                            = vlSelfRef.tb_lsu__DOT__storeData;
                    } else {
                        vlSelfRef.tb_lsu__DOT__mem_writeMask 
                            = (0xffU & ((IData)(0xfU) 
                                        << (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))));
                        vlSelfRef.tb_lsu__DOT__mem_writeData 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_lsu__DOT__storeData, 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.tb_lsu__DOT__addr)), 3U));
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_lsu__DOT__funct3))) {
                    vlSelfRef.tb_lsu__DOT__mem_writeMask 
                        = (0xffU & ((IData)(3U) << 
                                    (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))));
                    vlSelfRef.tb_lsu__DOT__mem_writeData 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_lsu__DOT__storeData, 
                                        VL_SHIFTL_III(32,32,32, 
                                                      (7U 
                                                       & (IData)(vlSelfRef.tb_lsu__DOT__addr)), 3U));
                } else {
                    vlSelfRef.tb_lsu__DOT__mem_writeMask 
                        = (0xffU & ((IData)(1U) << 
                                    (7U & (IData)(vlSelfRef.tb_lsu__DOT__addr))));
                    vlSelfRef.tb_lsu__DOT__mem_writeData 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_lsu__DOT__storeData, 
                                        VL_SHIFTL_III(32,32,32, 
                                                      (7U 
                                                       & (IData)(vlSelfRef.tb_lsu__DOT__addr)), 3U));
                }
            }
        }
    }
}

void VLSU___024root___timing_resume(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___timing_resume\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hec994c29__0.resume(
                                                   "@(posedge tb_lsu.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VLSU___024root___timing_commit(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___timing_commit\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hec994c29__0.commit(
                                                   "@(posedge tb_lsu.clk)");
    }
}

void VLSU___024root___eval_triggers__act(VLSU___024root* vlSelf);

bool VLSU___024root___eval_phase__act(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_phase__act\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VLSU___024root___eval_triggers__act(vlSelf);
    VLSU___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VLSU___024root___timing_resume(vlSelf);
        VLSU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VLSU___024root___eval_phase__nba(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_phase__nba\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VLSU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSU___024root___dump_triggers__nba(VLSU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLSU___024root___dump_triggers__act(VLSU___024root* vlSelf);
#endif  // VL_DEBUG

void VLSU___024root___eval(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VLSU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_lsu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VLSU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/tb_lsu.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VLSU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VLSU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VLSU___024root___eval_debug_assertions(VLSU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSU___024root___eval_debug_assertions\n"); );
    VLSU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
