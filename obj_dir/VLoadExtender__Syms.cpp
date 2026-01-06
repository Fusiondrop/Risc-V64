// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VLoadExtender__pch.h"
#include "VLoadExtender.h"
#include "VLoadExtender___024root.h"

// FUNCTIONS
VLoadExtender__Syms::~VLoadExtender__Syms()
{
}

VLoadExtender__Syms::VLoadExtender__Syms(VerilatedContext* contextp, const char* namep, VLoadExtender* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(66);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
