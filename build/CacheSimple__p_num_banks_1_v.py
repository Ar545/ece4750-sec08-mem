
#=========================================================================
# VCacheSimple__p_num_banks_1_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# CacheSimple__p_num_banks_1
#-------------------------------------------------------------------------

class CacheSimple__p_num_banks_1( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * reset;        
        unsigned int * cache2mem_reqstream_msg;        
        unsigned char * cache2mem_reqstream_rdy;        
        unsigned char * cache2mem_reqstream_val;        
        unsigned int * cache2mem_respstream_msg;        
        unsigned char * cache2mem_respstream_rdy;        
        unsigned char * cache2mem_respstream_val;        
        unsigned int * proc2cache_reqstream_msg;        
        unsigned char * proc2cache_reqstream_rdy;        
        unsigned char * proc2cache_reqstream_val;        
        unsigned long * proc2cache_respstream_msg;        
        unsigned char * proc2cache_respstream_rdy;        
        unsigned char * proc2cache_respstream_val;

        // Verilator model
        void * model;

      } VCacheSimple__p_num_banks_1_t;

      VCacheSimple__p_num_banks_1_t * create_model( const char * );
      void destroy_model( VCacheSimple__p_num_banks_1_t *);
      void comb_eval( VCacheSimple__p_num_banks_1_t * );
      void seq_eval( VCacheSimple__p_num_banks_1_t * );
      void assert_en( bool en );
      void trace( VCacheSimple__p_num_banks_1_t *, char * );

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libCacheSimple__p_num_banks_1_v.so', os.path.getmtime( './libCacheSimple__p_num_banks_1_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libCacheSimple__p_num_banks_1_v.so')

    # increment instance count
    CacheSimple__p_num_banks_1.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "CacheSimple__p_num_banks_1.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.cache2mem = MemRequesterIfc( MemReqMsg__type__4__opaque_8__addr_32__len_4__data_128, MemRespMsg__type__4__opaque_8__test_2__len_4__data_128 )
    s.proc2cache = MemResponderIfc( MemReqMsg__type__4__opaque_8__addr_32__len_2__data_32, MemRespMsg__type__4__opaque_8__test_2__len_2__data_32 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_cache2mem_DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_cache2mem_DOT_reqstream_DOT_rdy():
      s.s_DOT_cache2mem_DOT_reqstream_DOT_rdy @= s.cache2mem.reqstream.rdy
    
    s.s_DOT_cache2mem_DOT_respstream_DOT_msg = Wire( Bits146 )
    @update
    def istruct_s_DOT_cache2mem_DOT_respstream_DOT_msg():
      s.s_DOT_cache2mem_DOT_respstream_DOT_msg @= s.cache2mem.respstream.msg
    
    s.s_DOT_cache2mem_DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_cache2mem_DOT_respstream_DOT_val():
      s.s_DOT_cache2mem_DOT_respstream_DOT_val @= s.cache2mem.respstream.val
    
    s.s_DOT_proc2cache_DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def istruct_s_DOT_proc2cache_DOT_reqstream_DOT_msg():
      s.s_DOT_proc2cache_DOT_reqstream_DOT_msg @= s.proc2cache.reqstream.msg
    
    s.s_DOT_proc2cache_DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2cache_DOT_reqstream_DOT_val():
      s.s_DOT_proc2cache_DOT_reqstream_DOT_val @= s.proc2cache.reqstream.val
    
    s.s_DOT_proc2cache_DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2cache_DOT_respstream_DOT_rdy():
      s.s_DOT_proc2cache_DOT_respstream_DOT_rdy @= s.proc2cache.respstream.rdy
    
    s.s_DOT_cache2mem_DOT_reqstream_DOT_msg = Wire( Bits176 )
    @update
    def ostruct_s_DOT_cache2mem_DOT_reqstream_DOT_msg():
      s.cache2mem.reqstream.msg.data @= s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[0:128]
      s.cache2mem.reqstream.msg.len @= s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[128:132]
      s.cache2mem.reqstream.msg.addr @= s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[132:164]
      s.cache2mem.reqstream.msg.opaque @= s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[164:172]
      s.cache2mem.reqstream.msg.type_ @= s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[172:176]
    
    s.s_DOT_cache2mem_DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_cache2mem_DOT_reqstream_DOT_val():
      s.cache2mem.reqstream.val @= s.s_DOT_cache2mem_DOT_reqstream_DOT_val
    
    s.s_DOT_cache2mem_DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_cache2mem_DOT_respstream_DOT_rdy():
      s.cache2mem.respstream.rdy @= s.s_DOT_cache2mem_DOT_respstream_DOT_rdy
    
    s.s_DOT_proc2cache_DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2cache_DOT_reqstream_DOT_rdy():
      s.proc2cache.reqstream.rdy @= s.s_DOT_proc2cache_DOT_reqstream_DOT_rdy
    
    s.s_DOT_proc2cache_DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def ostruct_s_DOT_proc2cache_DOT_respstream_DOT_msg():
      s.proc2cache.respstream.msg.data @= s.s_DOT_proc2cache_DOT_respstream_DOT_msg[0:32]
      s.proc2cache.respstream.msg.len @= s.s_DOT_proc2cache_DOT_respstream_DOT_msg[32:34]
      s.proc2cache.respstream.msg.test @= s.s_DOT_proc2cache_DOT_respstream_DOT_msg[34:36]
      s.proc2cache.respstream.msg.opaque @= s.s_DOT_proc2cache_DOT_respstream_DOT_msg[36:44]
      s.proc2cache.respstream.msg.type_ @= s.s_DOT_proc2cache_DOT_respstream_DOT_msg[44:48]
    
    s.s_DOT_proc2cache_DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2cache_DOT_respstream_DOT_val():
      s.proc2cache.respstream.val @= s.s_DOT_proc2cache_DOT_respstream_DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.cache2mem_reqstream_rdy[0] = int(s.s_DOT_cache2mem_DOT_reqstream_DOT_rdy)
      
      x = _ffi_m.cache2mem_respstream_msg
      x[0] = int(s.s_DOT_cache2mem_DOT_respstream_DOT_msg[0:32])
      x[1] = int(s.s_DOT_cache2mem_DOT_respstream_DOT_msg[32:64])
      x[2] = int(s.s_DOT_cache2mem_DOT_respstream_DOT_msg[64:96])
      x[3] = int(s.s_DOT_cache2mem_DOT_respstream_DOT_msg[96:128])
      x[4] = int(s.s_DOT_cache2mem_DOT_respstream_DOT_msg[128:146])
      
      _ffi_m.cache2mem_respstream_val[0] = int(s.s_DOT_cache2mem_DOT_respstream_DOT_val)
      
      x = _ffi_m.proc2cache_reqstream_msg
      x[0] = int(s.s_DOT_proc2cache_DOT_reqstream_DOT_msg[0:32])
      x[1] = int(s.s_DOT_proc2cache_DOT_reqstream_DOT_msg[32:64])
      x[2] = int(s.s_DOT_proc2cache_DOT_reqstream_DOT_msg[64:78])
      
      _ffi_m.proc2cache_reqstream_val[0] = int(s.s_DOT_proc2cache_DOT_reqstream_DOT_val)
      
      _ffi_m.proc2cache_respstream_rdy[0] = int(s.s_DOT_proc2cache_DOT_respstream_DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      x = _ffi_m.cache2mem_reqstream_msg
      s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[64:96] @= x[2]
      s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[96:128] @= x[3]
      s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[128:160] @= x[4]
      s.s_DOT_cache2mem_DOT_reqstream_DOT_msg[160:176] @= x[5]
      
      s.s_DOT_cache2mem_DOT_reqstream_DOT_val @= _ffi_m.cache2mem_reqstream_val[0]
      
      s.s_DOT_cache2mem_DOT_respstream_DOT_rdy @= _ffi_m.cache2mem_respstream_rdy[0]
      
      s.s_DOT_proc2cache_DOT_reqstream_DOT_rdy @= _ffi_m.proc2cache_reqstream_rdy[0]
      
      s.s_DOT_proc2cache_DOT_respstream_DOT_msg @= _ffi_m.proc2cache_respstream_msg[0]
      
      s.s_DOT_proc2cache_DOT_respstream_DOT_val @= _ffi_m.proc2cache_respstream_val[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 1:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, reset={s.reset}, cache2mem.reqstream.msg={s.cache2mem.reqstream.msg}, cache2mem.reqstream.rdy={s.cache2mem.reqstream.rdy}, cache2mem.reqstream.val={s.cache2mem.reqstream.val}, cache2mem.respstream.msg={s.cache2mem.respstream.msg}, cache2mem.respstream.rdy={s.cache2mem.respstream.rdy}, cache2mem.respstream.val={s.cache2mem.respstream.val}, proc2cache.reqstream.msg={s.proc2cache.reqstream.msg}, proc2cache.reqstream.rdy={s.proc2cache.reqstream.rdy}, proc2cache.reqstream.val={s.proc2cache.reqstream.val}, proc2cache.respstream.msg={s.proc2cache.respstream.msg}, proc2cache.respstream.rdy={s.proc2cache.respstream.rdy}, proc2cache.respstream.val={s.proc2cache.respstream.val},'

  def internal_line_trace( s ):
    return ''
