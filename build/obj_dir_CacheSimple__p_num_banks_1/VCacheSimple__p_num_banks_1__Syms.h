// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCACHESIMPLE__P_NUM_BANKS_1__SYMS_H_
#define _VCACHESIMPLE__P_NUM_BANKS_1__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VCacheSimple__p_num_banks_1.h"
#include "VCacheSimple__p_num_banks_1___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VCacheSimple__p_num_banks_1__Vcb_line_trace_t) (VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VCacheSimple__p_num_banks_1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCacheSimple__p_num_banks_1*   TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_CacheSimple___05Fp_num_banks_1__v;
    
    // CREATORS
    VCacheSimple__p_num_banks_1__Syms(VCacheSimple__p_num_banks_1* topp, const char* namep);
    ~VCacheSimple__p_num_banks_1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
