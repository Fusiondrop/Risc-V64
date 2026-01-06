// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLSU__SYMS_H_
#define VERILATED_VLSU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VLSU.h"

// INCLUDE MODULE CLASSES
#include "VLSU___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VLSU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VLSU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VLSU___024root                 TOP;

    // CONSTRUCTORS
    VLSU__Syms(VerilatedContext* contextp, const char* namep, VLSU* modelp);
    ~VLSU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
