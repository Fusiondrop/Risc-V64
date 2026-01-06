// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLOADEXTENDER__SYMS_H_
#define VERILATED_VLOADEXTENDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VLoadExtender.h"

// INCLUDE MODULE CLASSES
#include "VLoadExtender___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VLoadExtender__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VLoadExtender* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VLoadExtender___024root        TOP;

    // CONSTRUCTORS
    VLoadExtender__Syms(VerilatedContext* contextp, const char* namep, VLoadExtender* modelp);
    ~VLoadExtender__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
