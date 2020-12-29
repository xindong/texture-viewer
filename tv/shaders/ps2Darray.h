#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer cbArrayControl
// {
//
//   float Index;                       // Offset:    0 Size:     4
//   int Channel;                       // Offset:    4 Size:     4
//   int ToneMapping;                   // Offset:    8 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// samLinear                         sampler      NA          NA             s0      1 
// tx2DArray                         texture  float4     2darray             t0      1 
// cbArrayControl                    cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// TEXCOORD                 0   xyzw        1     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_4_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2darray (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 4
mov r0.xy, v1.xyxx
mov r0.z, cb0[0].x
sample r0.xyzw, r0.xyzx, t0.zxyw, s0
ine r1.x, cb0[0].y, l(1)
if_nz r1.x
  ieq r1.xyz, cb0[0].yyyy, l(2, 3, 4, 0)
  mad r2.xyz, r0.yzxy, l(2.510000, 2.510000, 2.510000, 0.000000), l(0.030000, 0.030000, 0.030000, 0.000000)
  mul r2.xyz, r0.yzxy, r2.xyzx
  mad r3.xyz, r0.yzxy, l(2.430000, 2.430000, 2.430000, 0.000000), l(0.590000, 0.590000, 0.590000, 0.000000)
  mad r3.xyz, r0.yzxy, r3.xyzx, l(0.140000, 0.140000, 0.140000, 0.000000)
  div_sat r2.xyz, r2.xyzx, r3.xyzx
  mov r2.w, l(1.000000)
  movc r2.xyzw, cb0[0].zzzz, r2.xyzw, r0.yzxw
  mov r3.x, r0.w
  mov r3.w, l(1.000000)
  movc r2.xyzw, r1.zzzz, r3.xxxw, r2.xyzw
  mov r0.w, l(1.000000)
  movc r2.xyzw, r1.yyyy, r0.xxxw, r2.xyzw
  mov r0.w, l(1.000000)
  movc o0.xyzw, r1.xxxx, r0.zzzw, r2.xyzw
else 
  mov o0.xyz, r0.yyyy
  mov o0.w, l(1.000000)
endif 
ret 
// Approximately 25 instruction slots used
#endif

const BYTE g_PS_2DArray[] =
{
     68,  88,  66,  67, 168, 209, 
    244, 115, 153,  36,  58, 215, 
    230,  47, 150,  25,  76, 101, 
    131, 144,   1,   0,   0,   0, 
    188,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    160,   1,   0,   0, 248,   1, 
      0,   0,  44,   2,   0,   0, 
     64,   5,   0,   0,  82,  68, 
     69,  70, 100,   1,   0,   0, 
      1,   0,   0,   0, 160,   0, 
      0,   0,   3,   0,   0,   0, 
     28,   0,   0,   0,   1,   4, 
    255, 255,   0,   1,   0,   0, 
     60,   1,   0,   0, 124,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    134,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      5,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 144,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 115,  97, 
    109,  76, 105, 110, 101,  97, 
    114,   0, 116, 120,  50,  68, 
     65, 114, 114,  97, 121,   0, 
     99,  98,  65, 114, 114,  97, 
    121,  67, 111, 110, 116, 114, 
    111, 108,   0, 171, 144,   0, 
      0,   0,   3,   0,   0,   0, 
    184,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   1, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0,   8,   1,   0,   0, 
      0,   0,   0,   0,  24,   1, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0,  32,   1,   0,   0, 
      0,   0,   0,   0,  48,   1, 
      0,   0,   8,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0,  32,   1,   0,   0, 
      0,   0,   0,   0,  73, 110, 
    100, 101, 120,   0, 171, 171, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  67, 104, 
     97, 110, 110, 101, 108,   0, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  84, 111, 
    110, 101,  77,  97, 112, 112, 
    105, 110, 103,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  49,  48,  46, 
     49,   0,  73,  83,  71,  78, 
     80,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
     56,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     68,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,  15,   3,   0,   0, 
     83,  86,  95,  80,  79,  83, 
     73,  84,  73,  79,  78,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0, 171, 171, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     68,  82,  12,   3,   0,   0, 
     65,   0,   0,   0, 195,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  90,   0, 
      0,   3,   0,  96,  16,   0, 
      0,   0,   0,   0,  88,  64, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,  98,  16,   0,   3, 
     50,  16,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 104,   0,   0,   2, 
      4,   0,   0,   0,  54,   0, 
      0,   5,  50,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     54,   0,   0,   6,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     69,   0,   0,   9, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  38, 125,  16,   0, 
      0,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     39,   0,   0,   8,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,  31,   0,   4,   3, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  32,   0,   0,  11, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  86, 133,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      2,   0,   0,   0,   3,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      2,   0,   0,   0, 150,   4, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0, 215, 163, 
     32,  64, 215, 163,  32,  64, 
    215, 163,  32,  64,   0,   0, 
      0,   0,   2,  64,   0,   0, 
    143, 194, 245,  60, 143, 194, 
    245,  60, 143, 194, 245,  60, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      2,   0,   0,   0, 150,   4, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  50,   0,   0,  15, 
    114,   0,  16,   0,   3,   0, 
      0,   0, 150,   4,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  31, 133,  27,  64, 
     31, 133,  27,  64,  31, 133, 
     27,  64,   0,   0,   0,   0, 
      2,  64,   0,   0,  61,  10, 
     23,  63,  61,  10,  23,  63, 
     61,  10,  23,  63,   0,   0, 
      0,   0,  50,   0,   0,  12, 
    114,   0,  16,   0,   3,   0, 
      0,   0, 150,   4,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
      2,  64,   0,   0,  41,  92, 
     15,  62,  41,  92,  15,  62, 
     41,  92,  15,  62,   0,   0, 
      0,   0,  14,  32,   0,   7, 
    114,   0,  16,   0,   2,   0, 
      0,   0,  70,   2,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
     54,   0,   0,   5, 130,   0, 
     16,   0,   2,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  55,   0,   0,  10, 
    242,   0,  16,   0,   2,   0, 
      0,   0, 166, 138,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0, 150,  12, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5,  18,   0, 
     16,   0,   3,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,   0,  16,   0,   3,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  55,   0, 
      0,   9, 242,   0,  16,   0, 
      2,   0,   0,   0, 166,  10, 
     16,   0,   1,   0,   0,   0, 
      6,  12,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     55,   0,   0,   9, 242,   0, 
     16,   0,   2,   0,   0,   0, 
     86,   5,  16,   0,   1,   0, 
      0,   0,   6,  12,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     54,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  55,   0,   0,   9, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      1,   0,   0,   0, 166,  14, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  18,   0,   0,   1, 
     54,   0,   0,   5, 114,  32, 
     16,   0,   0,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  21,   0, 
      0,   1,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,  25,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      5,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0
};
