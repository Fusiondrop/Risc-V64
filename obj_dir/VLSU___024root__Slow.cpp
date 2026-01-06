// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLSU.h for the primary calling header

#include "VLSU__pch.h"
#include "VLSU__Syms.h"
#include "VLSU___024root.h"

void VLSU___024root___ctor_var_reset(VLSU___024root* vlSelf);

VLSU___024root::VLSU___024root(VLSU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLSU___024root___ctor_var_reset(this);
}

void VLSU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VLSU___024root::~VLSU___024root() {
}
