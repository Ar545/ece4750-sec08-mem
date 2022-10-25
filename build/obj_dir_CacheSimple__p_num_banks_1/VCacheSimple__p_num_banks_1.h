// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCACHESIMPLE__P_NUM_BANKS_1_H_
#define _VCACHESIMPLE__P_NUM_BANKS_1_H_  // guard

#include "verilated_heavy.h"
#include "VCacheSimple__p_num_banks_1__Dpi.h"

//==========

class VCacheSimple__p_num_banks_1__Syms;

//----------

VL_MODULE(VCacheSimple__p_num_banks_1) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(cache2mem_reqstream_rdy,0,0);
    VL_OUT8(cache2mem_reqstream_val,0,0);
    VL_OUT8(cache2mem_respstream_rdy,0,0);
    VL_IN8(cache2mem_respstream_val,0,0);
    VL_OUT8(proc2cache_reqstream_rdy,0,0);
    VL_IN8(proc2cache_reqstream_val,0,0);
    VL_IN8(proc2cache_respstream_rdy,0,0);
    VL_OUT8(proc2cache_respstream_val,0,0);
    VL_OUTW(cache2mem_reqstream_msg,175,0,6);
    VL_INW(cache2mem_respstream_msg,145,0,5);
    VL_INW(proc2cache_reqstream_msg,77,0,3);
    VL_OUT64(proc2cache_respstream_msg,47,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en;
    CData/*0:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen;
    CData/*4:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg;
    CData/*4:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_next;
    CData/*0:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
    CData/*0:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en;
    CData/*2:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out;
    CData/*7:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out;
    WData/*4095:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[128];
    IData/*31:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out;
    IData/*31:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1;
    CData/*0:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[16];
    IData/*23:0*/ CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem[16];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*46:0*/ CacheSimple___05Fp_num_banks_1__DOT____Vcellout__v__proc2cache_respstream_msg;
    WData/*174:0*/ CacheSimple___05Fp_num_banks_1__DOT____Vcellout__v__cache2mem_reqstream_msg[6];
    static CData/*4:0*/ __Vtable1_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_next[256];
    static CData/*0:0*/ __Vtable2_proc2cache_reqstream_rdy[32];
    static CData/*0:0*/ __Vtable2_proc2cache_respstream_val[32];
    static CData/*0:0*/ __Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en[32];
    static CData/*0:0*/ __Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen[32];
    static CData/*0:0*/ __Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in[32];
    static CData/*0:0*/ __Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en[32];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCacheSimple__p_num_banks_1__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCacheSimple__p_num_banks_1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCacheSimple__p_num_banks_1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCacheSimple__p_num_banks_1();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCacheSimple__p_num_banks_1__Syms* symsp, bool first);
    static void __Vdpiexp_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
