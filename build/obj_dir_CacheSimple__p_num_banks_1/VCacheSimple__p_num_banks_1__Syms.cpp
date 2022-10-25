// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCacheSimple__p_num_banks_1__Syms.h"
#include "VCacheSimple__p_num_banks_1.h"
#include "VCacheSimple__p_num_banks_1___024unit.h"



// FUNCTIONS
VCacheSimple__p_num_banks_1__Syms::VCacheSimple__p_num_banks_1__Syms(VCacheSimple__p_num_banks_1* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_CacheSimple___05Fp_num_banks_1__v.configure(this, name(), "CacheSimple__p_num_banks_1.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_CacheSimple___05Fp_num_banks_1__v.exportInsert(__Vfinal, "line_trace", (void*)(&VCacheSimple__p_num_banks_1::__Vdpiexp_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP));
    }
}
