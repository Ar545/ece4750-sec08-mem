// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheSimple__p_num_banks_1.h for the primary calling header

#include "VCacheSimple__p_num_banks_1.h"
#include "VCacheSimple__p_num_banks_1__Syms.h"

#include "verilated_dpi.h"

//==========

void VCacheSimple__p_num_banks_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCacheSimple__p_num_banks_1::eval\n"); );
    VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("lab3_mem/CacheSimple.v", 185, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCacheSimple__p_num_banks_1::_eval_initial_loop(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("lab3_mem/CacheSimple.v", 185, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCacheSimple__p_num_banks_1::__Vdpiexp_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::__Vdpiexp_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[128];
    WData/*4095:0*/ __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[128];
    IData/*31:0*/ __Vilp;
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[0U] = 0x28U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if ((0x10U & (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[0U] = 0x3f20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if ((8U & (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[0U] = 0x3f20U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if ((4U & (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))) {
                __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[0U] = 0x3f20U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if ((2U & (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))) {
                    if ((1U & (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))) {
                        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[0U] = 0x5720U;
                        __Vilp = 1U;
                        while ((__Vilp <= 0x7fU)) {
                            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[__Vilp] = 0U;
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                            = trace_str[0U];
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WIII(8,(0xfffU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                              (0xffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                    } else {
                        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[0U] = 0x494eU;
                        __Vilp = 1U;
                        while ((__Vilp <= 0x7fU)) {
                            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[__Vilp] = 0U;
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                            = trace_str[0U];
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WIII(8,(0xfffU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                              (0xffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))) {
                        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[0U] = 0x5443U;
                        __Vilp = 1U;
                        while ((__Vilp <= 0x7fU)) {
                            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[__Vilp] = 0U;
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                            = trace_str[0U];
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WIII(8,(0xfffU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                              (0xffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                    } else {
                        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[0U] = 0x4920U;
                        __Vilp = 1U;
                        while ((__Vilp <= 0x7fU)) {
                            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[__Vilp] = 0U;
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                        }
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                            = trace_str[0U];
                        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WIII(8,(0xfffU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                              (0xffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                    }
                }
            }
        }
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[0U] = 0x5bU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [1U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [1U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [2U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [2U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [3U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [3U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [4U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [4U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [5U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [5U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [6U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [6U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [7U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [7U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [8U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [8U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [9U]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [9U]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xaU]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0xaU]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xbU]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0xbU]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xcU]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0xcU]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xdU]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0xdU]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xeU]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0xeU]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xfU]) {
        VL_SFORMAT_X(4096,vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str
                     ,"%x",12,(0xfffU & vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                               [0xfU]));
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x202d20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[0U] = 0x5dU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[0U] = 0x29U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
}

void VCacheSimple__p_num_banks_1::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCacheSimple__p_num_banks_1__Vcb_line_trace_t __Vcb = (VCacheSimple__p_num_banks_1__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VCacheSimple__p_num_banks_1__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VCacheSimple__p_num_banks_1::_sequent__TOP__3(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::_sequent__TOP__3\n"); );
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v2;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v4;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v6;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v8;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v10;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v12;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v14;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v16;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v18;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v20;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v22;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v24;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v26;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v28;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v30;
    CData/*0:0*/ __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31;
    CData/*0:0*/ __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31;
    // Body
    if (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem[(0xfU 
                                                                                & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                                                >> 4U))] 
            = (0xffffffU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                            >> 8U));
    }
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v0 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v2 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v4 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v6 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v8 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v10 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v12 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v14 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v16 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v18 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v20 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v22 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v24 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v26 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v28 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v30 = 0U;
    __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31 = 0U;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out 
            = ((IData)(vlTOPp->reset) ? 0U : (7U & 
                                              (vlTOPp->proc2cache_reqstream_msg[2U] 
                                               >> 0xaU)));
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out 
            = ((IData)(vlTOPp->reset) ? 0U : (0xffU 
                                              & (vlTOPp->proc2cache_reqstream_msg[2U] 
                                                 >> 2U)));
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_next));
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v0 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v2 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (1U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v4 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (2U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v6 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (3U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v8 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (4U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v10 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (5U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v12 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (6U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v14 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (7U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v16 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (8U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v18 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (9U == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                               >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v20 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0xaU == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                 >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v22 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0xbU == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                 >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v24 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0xcU == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                 >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v26 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0xdU == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                 >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v28 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0xeU == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                 >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v30 = 1U;
    } else {
        if (((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en) 
             & (0xfU == (0xfU & (vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                 >> 4U))))) {
            __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31 
                = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in;
            __Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31 = 1U;
        }
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v0) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v1;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v2) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[1U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[1U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v3;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v4) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[2U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[2U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v5;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v6) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[3U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[3U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v7;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v8) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[4U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[4U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v9;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v10) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[5U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[5U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v11;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v12) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[6U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[6U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v13;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v14) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[7U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[7U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v15;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v16) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[8U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[8U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v17;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v18) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[9U] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[9U] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v19;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v20) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xaU] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xaU] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v21;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v22) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xbU] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xbU] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v23;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v24) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xcU] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xcU] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v25;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v26) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xdU] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xdU] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v27;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v28) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xeU] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xeU] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v29;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v30) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xfU] = 0U;
    }
    if (__Vdlyvset__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile[0xfU] 
            = __Vdlyvval__CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile__v31;
    }
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT____Vcellout__v__proc2cache_respstream_msg 
        = (0x200000000000ULL | ((QData)((IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                                << 0x24U));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en))) {
        vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
            = ((IData)(vlTOPp->reset) ? 0U : ((vlTOPp->proc2cache_reqstream_msg[2U] 
                                               << 0x1eU) 
                                              | (vlTOPp->proc2cache_reqstream_msg[1U] 
                                                 >> 2U)));
    }
    vlTOPp->proc2cache_respstream_msg = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT____Vcellout__v__proc2cache_respstream_msg;
    vlTOPp->__Vtableidx2 = vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg;
    vlTOPp->proc2cache_reqstream_rdy = vlTOPp->__Vtable2_proc2cache_reqstream_rdy
        [vlTOPp->__Vtableidx2];
    vlTOPp->proc2cache_respstream_val = vlTOPp->__Vtable2_proc2cache_respstream_val
        [vlTOPp->__Vtableidx2];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en 
        = vlTOPp->__Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__cachereq_reg_en
        [vlTOPp->__Vtableidx2];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen 
        = vlTOPp->__Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen
        [vlTOPp->__Vtableidx2];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in 
        = vlTOPp->__Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bit_in
        [vlTOPp->__Vtableidx2];
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en 
        = vlTOPp->__Vtable2_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_write_en
        [vlTOPp->__Vtableidx2];
}

VL_INLINE_OPT void VCacheSimple__p_num_banks_1::_combo__TOP__4(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::_combo__TOP__4\n"); );
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->proc2cache_reqstream_val) 
                             << 7U) | (((2U == (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out)) 
                                        << 6U) | (((IData)(vlTOPp->proc2cache_respstream_rdy) 
                                                   << 5U) 
                                                  | (IData)(vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_reg))));
    vlTOPp->CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_next 
        = vlTOPp->__Vtable1_CacheSimple___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state_next
        [vlTOPp->__Vtableidx1];
}

void VCacheSimple__p_num_banks_1::_eval(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::_eval\n"); );
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VCacheSimple__p_num_banks_1::_change_request(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::_change_request\n"); );
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCacheSimple__p_num_banks_1::_change_request_1(VCacheSimple__p_num_banks_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::_change_request_1\n"); );
    VCacheSimple__p_num_banks_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCacheSimple__p_num_banks_1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheSimple__p_num_banks_1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((cache2mem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("cache2mem_reqstream_rdy");}
    if (VL_UNLIKELY((cache2mem_respstream_msg[4U] & 0xfffc0000U))) {
        Verilated::overWidthError("cache2mem_respstream_msg");}
    if (VL_UNLIKELY((cache2mem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("cache2mem_respstream_val");}
    if (VL_UNLIKELY((proc2cache_reqstream_msg[2U] & 0xffffc000U))) {
        Verilated::overWidthError("proc2cache_reqstream_msg");}
    if (VL_UNLIKELY((proc2cache_reqstream_val & 0xfeU))) {
        Verilated::overWidthError("proc2cache_reqstream_val");}
    if (VL_UNLIKELY((proc2cache_respstream_rdy & 0xfeU))) {
        Verilated::overWidthError("proc2cache_respstream_rdy");}
}
#endif  // VL_DEBUG
