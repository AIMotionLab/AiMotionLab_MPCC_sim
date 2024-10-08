/* This file was automatically generated by CasADi 3.6.6.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_clear CASADI_PREFIX(clear)
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_sign CASADI_PREFIX(sign)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sign(casadi_real x) { return x<0 ? -1 : x>0 ? 1 : x;}

casadi_real casadi_sq(casadi_real x) { return x*x;}

void casadi_clear(casadi_real* x, casadi_int n) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = 0;
  }
}

void casadi_copy(const casadi_real* x, casadi_int n, casadi_real* y) {
  casadi_int i;
  if (y) {
    if (x) {
      for (i=0; i<n; ++i) *y++ = *x++;
    } else {
      for (i=0; i<n; ++i) *y++ = 0.;
    }
  }
}

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s4[14] = {12, 2, 0, 5, 9, 6, 7, 8, 10, 11, 6, 7, 8, 10};
static const casadi_int casadi_s5[3] = {2, 0, 0};

/* f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt:(i0[9],i1[3],i2[],i3[])->(o0[2],o1[12x2,9nz],o2[2x0]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real *rr, *ss;
  casadi_real w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, *w16=w+16, w17;
  /* #0: @0 = 61.4282 */
  w0 = 6.1428199999999997e+01;
  /* #1: @1 = input[0][7] */
  w1 = arg[0] ? arg[0][7] : 0;
  /* #2: @1 = (@0*@1) */
  w1  = (w0*w1);
  /* #3: @2 = 3.012 */
  w2 = 3.0120000000000000e+00;
  /* #4: @3 = input[0][3] */
  w3 = arg[0] ? arg[0][3] : 0;
  /* #5: @4 = (@2*@3) */
  w4  = (w2*w3);
  /* #6: @1 = (@1-@4) */
  w1 -= w4;
  /* #7: @4 = 0.604 */
  w4 = 6.0399999999999998e-01;
  /* #8: @5 = sign(@3) */
  w5 = casadi_sign( w3 );
  /* #9: @4 = (@4*@5) */
  w4 *= w5;
  /* #10: @1 = (@1-@4) */
  w1 -= w4;
  /* #11: @4 = sq(@1) */
  w4 = casadi_sq( w1 );
  /* #12: @5 = 2500 */
  w5 = 2500.;
  /* #13: @4 = (@4/@5) */
  w4 /= w5;
  /* #14: @5 = 41.7372 */
  w5 = 4.1737200000000001e+01;
  /* #15: @6 = input[0][8] */
  w6 = arg[0] ? arg[0][8] : 0;
  /* #16: @7 = input[0][4] */
  w7 = arg[0] ? arg[0][4] : 0;
  /* #17: @8 = 0.163 */
  w8 = 1.6300000000000001e-01;
  /* #18: @9 = input[0][5] */
  w9 = arg[0] ? arg[0][5] : 0;
  /* #19: @10 = (@8*@9) */
  w10  = (w8*w9);
  /* #20: @10 = (@7+@10) */
  w10  = (w7+w10);
  /* #21: @11 = 0.0001 */
  w11 = 1.0000000000000000e-04;
  /* #22: @11 = (@11+@3) */
  w11 += w3;
  /* #23: @12 = atan2(@10,@11) */
  w12  = atan2(w10,w11);
  /* #24: @6 = (@6-@12) */
  w6 -= w12;
  /* #25: @6 = (@5*@6) */
  w6  = (w5*w6);
  /* #26: @12 = sq(@6) */
  w12 = casadi_sq( w6 );
  /* #27: @13 = 2500 */
  w13 = 2500.;
  /* #28: @12 = (@12/@13) */
  w12 /= w13;
  /* #29: @4 = (@4+@12) */
  w4 += w12;
  /* #30: output[0][0] = @4 */
  if (res[0]) res[0][0] = w4;
  /* #31: @4 = sq(@1) */
  w4 = casadi_sq( w1 );
  /* #32: @12 = 2500 */
  w12 = 2500.;
  /* #33: @4 = (@4/@12) */
  w4 /= w12;
  /* #34: @12 = 29.4662 */
  w12 = 2.9466200000000001e+01;
  /* #35: @13 = 0.168 */
  w13 = 1.6800000000000001e-01;
  /* #36: @9 = (@13*@9) */
  w9  = (w13*w9);
  /* #37: @9 = (@9-@7) */
  w9 -= w7;
  /* #38: @7 = 0.0001 */
  w7 = 1.0000000000000000e-04;
  /* #39: @7 = (@7+@3) */
  w7 += w3;
  /* #40: @3 = atan2(@9,@7) */
  w3  = atan2(w9,w7);
  /* #41: @3 = (@12*@3) */
  w3  = (w12*w3);
  /* #42: @14 = sq(@3) */
  w14 = casadi_sq( w3 );
  /* #43: @15 = 2500 */
  w15 = 2500.;
  /* #44: @14 = (@14/@15) */
  w14 /= w15;
  /* #45: @4 = (@4+@14) */
  w4 += w14;
  /* #46: output[0][1] = @4 */
  if (res[0]) res[0][1] = w4;
  /* #47: @16 = zeros(12x2,9nz) */
  casadi_clear(w16, 9);
  /* #48: @4 = sq(@10) */
  w4 = casadi_sq( w10 );
  /* #49: @14 = sq(@11) */
  w14 = casadi_sq( w11 );
  /* #50: @4 = (@4+@14) */
  w4 += w14;
  /* #51: @10 = (@10/@4) */
  w10 /= w4;
  /* #52: @6 = (2.*@6) */
  w6 = (2.* w6 );
  /* #53: @14 = 0.0004 */
  w14 = 4.0000000000000002e-04;
  /* #54: @15 = ones(2x1,1nz) */
  w15 = 1.;
  /* #55: {@17, NULL} = vertsplit(@15) */
  w17 = w15;
  /* #56: @14 = (@14*@17) */
  w14 *= w17;
  /* #57: @6 = (@6*@14) */
  w6 *= w14;
  /* #58: @5 = (@5*@6) */
  w5 *= w6;
  /* #59: @10 = (@10*@5) */
  w10 *= w5;
  /* #60: @6 = (2.*@1) */
  w6 = (2.* w1 );
  /* #61: @14 = 0.0004 */
  w14 = 4.0000000000000002e-04;
  /* #62: @14 = (@14*@17) */
  w14 *= w17;
  /* #63: @6 = (@6*@14) */
  w6 *= w14;
  /* #64: @14 = (@2*@6) */
  w14  = (w2*w6);
  /* #65: @10 = (@10-@14) */
  w10 -= w14;
  /* #66: (@16[0] = @10) */
  for (rr=w16+0, ss=(&w10); rr!=w16+1; rr+=1) *rr = *ss++;
  /* #67: @11 = (@11/@4) */
  w11 /= w4;
  /* #68: @11 = (@11*@5) */
  w11 *= w5;
  /* #69: @4 = (-@11) */
  w4 = (- w11 );
  /* #70: (@16[1] = @4) */
  for (rr=w16+1, ss=(&w4); rr!=w16+2; rr+=1) *rr = *ss++;
  /* #71: @8 = (@8*@11) */
  w8 *= w11;
  /* #72: @8 = (-@8) */
  w8 = (- w8 );
  /* #73: (@16[2] = @8) */
  for (rr=w16+2, ss=(&w8); rr!=w16+3; rr+=1) *rr = *ss++;
  /* #74: @6 = (@0*@6) */
  w6  = (w0*w6);
  /* #75: (@16[3] = @6) */
  for (rr=w16+3, ss=(&w6); rr!=w16+4; rr+=1) *rr = *ss++;
  /* #76: (@16[4] = @5) */
  for (rr=w16+4, ss=(&w5); rr!=w16+5; rr+=1) *rr = *ss++;
  /* #77: @1 = (2.*@1) */
  w1 = (2.* w1 );
  /* #78: @5 = 0.0004 */
  w5 = 4.0000000000000002e-04;
  /* #79: @6 = ones(2x1,1nz) */
  w6 = 1.;
  /* #80: {NULL, @8} = vertsplit(@6) */
  w8 = w6;
  /* #81: @5 = (@5*@8) */
  w5 *= w8;
  /* #82: @1 = (@1*@5) */
  w1 *= w5;
  /* #83: @2 = (@2*@1) */
  w2 *= w1;
  /* #84: @2 = (-@2) */
  w2 = (- w2 );
  /* #85: @5 = sq(@9) */
  w5 = casadi_sq( w9 );
  /* #86: @6 = sq(@7) */
  w6 = casadi_sq( w7 );
  /* #87: @5 = (@5+@6) */
  w5 += w6;
  /* #88: @9 = (@9/@5) */
  w9 /= w5;
  /* #89: @3 = (2.*@3) */
  w3 = (2.* w3 );
  /* #90: @6 = 0.0004 */
  w6 = 4.0000000000000002e-04;
  /* #91: @6 = (@6*@8) */
  w6 *= w8;
  /* #92: @3 = (@3*@6) */
  w3 *= w6;
  /* #93: @12 = (@12*@3) */
  w12 *= w3;
  /* #94: @9 = (@9*@12) */
  w9 *= w12;
  /* #95: @2 = (@2-@9) */
  w2 -= w9;
  /* #96: (@16[5] = @2) */
  for (rr=w16+5, ss=(&w2); rr!=w16+6; rr+=1) *rr = *ss++;
  /* #97: @7 = (@7/@5) */
  w7 /= w5;
  /* #98: @7 = (@7*@12) */
  w7 *= w12;
  /* #99: @12 = (-@7) */
  w12 = (- w7 );
  /* #100: (@16[6] = @12) */
  for (rr=w16+6, ss=(&w12); rr!=w16+7; rr+=1) *rr = *ss++;
  /* #101: @13 = (@13*@7) */
  w13 *= w7;
  /* #102: (@16[7] = @13) */
  for (rr=w16+7, ss=(&w13); rr!=w16+8; rr+=1) *rr = *ss++;
  /* #103: @0 = (@0*@1) */
  w0 *= w1;
  /* #104: (@16[8] = @0) */
  for (rr=w16+8, ss=(&w0); rr!=w16+9; rr+=1) *rr = *ss++;
  /* #105: output[1][0] = @16 */
  casadi_copy(w16, 9, res[1]);
  return 0;
}

CASADI_SYMBOL_EXPORT int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_release(int mem) {
}

CASADI_SYMBOL_EXPORT void f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_incref(void) {
}

CASADI_SYMBOL_EXPORT void f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s4;
    case 2: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 5;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 26;
  return 0;
}

CASADI_SYMBOL_EXPORT int f1tenth_bicycle_model_constr_h_fun_jac_uxt_zt_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 5*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 26*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
