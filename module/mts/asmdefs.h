#define zero    $0      /* wired zero */
#define AT      $at     /* assembler temp */
#define v0      $2      /* return value */
#define v1      $3
#define a0      $4      /* argument registers */
#define a1      $5
#define a2      $6
#define a3      $7
#ifdef USE_EABI_EFECTIVE_REG_NAME
#define a4      $8      /* argument registers */
#define a5      $9
#define a6      $10
#define a7      $11
#else
#define t0      $8      /* caller saved (o32 old style names: default) */
#define t1      $9
#define t2      $10
#define t3      $11
#endif
#define t4      $12
#define t5      $13
#define t6      $14
#define t7      $15
#define s0      $16     /* callee saved */
#define s1      $17
#define s2      $18
#define s3      $19
#define s4      $20
#define s5      $21
#define s6      $22
#define s7      $23
#define t8      $24     /* caller saved */
#define t9      $25
#define k0      $26     /* kernel temporary */
#define k1      $27
#define gp      $28     /* global pointer */
#define sp      $29     /* stack pointer */
#define fp      $30     /* frame pointer */
#define ra      $31     /* return address */

#define fv0     $f0     /* floating-point */
#define fv1     $f1
#define ft0     $f2
#define ft1     $f3
#define ft2     $f4
#define ft3     $f5
#define ft4     $f6
#define ft5     $f7
#define ft6     $f8
#define ft7     $f9
#define ft8     $f10
#define ft9     $f11
#define fa0     $f12
#define fa1     $f13
#define fa2     $f14
#define fa3     $f15
#define fa4     $f16
#define fa5     $f17
#define fa6     $f18
#define fa7     $f19
#define fs0     $f20
#define fs1     $f21
#define fs2     $f22
#define fs3     $f23
#define fs4     $f24
#define fs5     $f25
#define fs6     $f26
#define fs7     $f27
#define fs8     $f28
#define fs9     $f29
#define fs10    $f30
#define fs11    $f31
