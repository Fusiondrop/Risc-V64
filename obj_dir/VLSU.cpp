// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLSU__pch.h"

//============================================================
// Constructors

VLSU::VLSU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VLSU__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VLSU::VLSU(const char* _vcname__)
    : VLSU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VLSU::~VLSU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VLSU___024root___eval_debug_assertions(VLSU___024root* vlSelf);
#endif  // VL_DEBUG
void VLSU___024root___eval_static(VLSU___024root* vlSelf);
void VLSU___024root___eval_initial(VLSU___024root* vlSelf);
void VLSU___024root___eval_settle(VLSU___024root* vlSelf);
void VLSU___024root___eval(VLSU___024root* vlSelf);

void VLSU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLSU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLSU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VLSU___024root___eval_static(&(vlSymsp->TOP));
        VLSU___024root___eval_initial(&(vlSymsp->TOP));
        VLSU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VLSU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VLSU::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VLSU::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VLSU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VLSU___024root___eval_final(VLSU___024root* vlSelf);

VL_ATTR_COLD void VLSU::final() {
    VLSU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VLSU::hierName() const { return vlSymsp->name(); }
const char* VLSU::modelName() const { return "VLSU"; }
unsigned VLSU::threads() const { return 1; }
void VLSU::prepareClone() const { contextp()->prepareClone(); }
void VLSU::atClone() const {
    contextp()->threadPoolpOnClone();
}
