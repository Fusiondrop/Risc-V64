// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLoadExtender__pch.h"

//============================================================
// Constructors

VLoadExtender::VLoadExtender(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VLoadExtender__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VLoadExtender::VLoadExtender(const char* _vcname__)
    : VLoadExtender(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VLoadExtender::~VLoadExtender() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VLoadExtender___024root___eval_debug_assertions(VLoadExtender___024root* vlSelf);
#endif  // VL_DEBUG
void VLoadExtender___024root___eval_static(VLoadExtender___024root* vlSelf);
void VLoadExtender___024root___eval_initial(VLoadExtender___024root* vlSelf);
void VLoadExtender___024root___eval_settle(VLoadExtender___024root* vlSelf);
void VLoadExtender___024root___eval(VLoadExtender___024root* vlSelf);

void VLoadExtender::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLoadExtender::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLoadExtender___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VLoadExtender___024root___eval_static(&(vlSymsp->TOP));
        VLoadExtender___024root___eval_initial(&(vlSymsp->TOP));
        VLoadExtender___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VLoadExtender___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VLoadExtender::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VLoadExtender::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VLoadExtender::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VLoadExtender___024root___eval_final(VLoadExtender___024root* vlSelf);

VL_ATTR_COLD void VLoadExtender::final() {
    VLoadExtender___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VLoadExtender::hierName() const { return vlSymsp->name(); }
const char* VLoadExtender::modelName() const { return "VLoadExtender"; }
unsigned VLoadExtender::threads() const { return 1; }
void VLoadExtender::prepareClone() const { contextp()->prepareClone(); }
void VLoadExtender::atClone() const {
    contextp()->threadPoolpOnClone();
}
