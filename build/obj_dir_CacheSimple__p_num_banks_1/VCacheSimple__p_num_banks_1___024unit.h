// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheSimple__p_num_banks_1.h for the primary calling header

#ifndef _VCACHESIMPLE__P_NUM_BANKS_1___024UNIT_H_
#define _VCACHESIMPLE__P_NUM_BANKS_1___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VCacheSimple__p_num_banks_1__Dpi.h"

//==========

class VCacheSimple__p_num_banks_1__Syms;

//----------

VL_MODULE(VCacheSimple__p_num_banks_1___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCacheSimple__p_num_banks_1__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCacheSimple__p_num_banks_1___024unit);  ///< Copying not allowed
  public:
    VCacheSimple__p_num_banks_1___024unit(const char* name = "TOP");
    ~VCacheSimple__p_num_banks_1___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCacheSimple__p_num_banks_1__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
