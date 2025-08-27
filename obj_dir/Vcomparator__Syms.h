// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPARATOR__SYMS_H_
#define VERILATED_VCOMPARATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcomparator.h"

// INCLUDE MODULE CLASSES
#include "Vcomparator___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcomparator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcomparator* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcomparator___024root          TOP;

    // CONSTRUCTORS
    Vcomparator__Syms(VerilatedContext* contextp, const char* namep, Vcomparator* modelp);
    ~Vcomparator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
