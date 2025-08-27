// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcomparator__pch.h"

//============================================================
// Constructors

Vcomparator::Vcomparator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcomparator__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcomparator::Vcomparator(const char* _vcname__)
    : Vcomparator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcomparator::~Vcomparator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcomparator___024root___eval_debug_assertions(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomparator___024root___eval_static(Vcomparator___024root* vlSelf);
void Vcomparator___024root___eval_initial(Vcomparator___024root* vlSelf);
void Vcomparator___024root___eval_settle(Vcomparator___024root* vlSelf);
void Vcomparator___024root___eval(Vcomparator___024root* vlSelf);

void Vcomparator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcomparator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcomparator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcomparator___024root___eval_static(&(vlSymsp->TOP));
        Vcomparator___024root___eval_initial(&(vlSymsp->TOP));
        Vcomparator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcomparator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcomparator::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcomparator::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcomparator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcomparator___024root___eval_final(Vcomparator___024root* vlSelf);

VL_ATTR_COLD void Vcomparator::final() {
    Vcomparator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcomparator::hierName() const { return vlSymsp->name(); }
const char* Vcomparator::modelName() const { return "Vcomparator"; }
unsigned Vcomparator::threads() const { return 1; }
void Vcomparator::prepareClone() const { contextp()->prepareClone(); }
void Vcomparator::atClone() const {
    contextp()->threadPoolpOnClone();
}
