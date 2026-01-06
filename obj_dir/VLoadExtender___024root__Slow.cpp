// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoadExtender.h for the primary calling header

#include "VLoadExtender__pch.h"
#include "VLoadExtender__Syms.h"
#include "VLoadExtender___024root.h"

void VLoadExtender___024root___ctor_var_reset(VLoadExtender___024root* vlSelf);

VLoadExtender___024root::VLoadExtender___024root(VLoadExtender__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLoadExtender___024root___ctor_var_reset(this);
}

void VLoadExtender___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VLoadExtender___024root::~VLoadExtender___024root() {
}
