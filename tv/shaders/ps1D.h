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
//   float Index;                       // Offset:    0 Size:     4 [unused]
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
// tx1D                              texture  float4          1d             t0      1 
// cbArrayControl                    cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// TEXCOORD                 0   xyzw        1     NONE   float   x   
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
dcl_resource_texture1d (float,float,float,float) t0
dcl_input_ps linear v1.x
dcl_output o0.xyzw
dcl_temps 4
sample r0.xyzw, v1.xxxx, t0.xyzw, s0
ine r1.x, cb0[0].y, l(1)
if_nz r1.x
  ieq r1.xyz, cb0[0].yyyy, l(2, 3, 4, 0)
  mad r2.xyz, r0.xyzx, l(2.510000, 2.510000, 2.510000, 0.000000), l(0.030000, 0.030000, 0.030000, 0.000000)
  mul r2.xyz, r0.xyzx, r2.xyzx
  mad r3.xyz, r0.xyzx, l(2.430000, 2.430000, 2.430000, 0.000000), l(0.590000, 0.590000, 0.590000, 0.000000)
  mad r3.xyz, r0.xyzx, r3.xyzx, l(0.140000, 0.140000, 0.140000, 0.000000)
  div_sat r2.xyz, r2.xyzx, r3.xyzx
  movc r2.xyz, cb0[0].zzzz, r2.xyzx, r0.xyzx
  movc r2.xyz, r1.zzzz, r0.wwww, r2.xyzx
  movc r1.yzw, r1.yyyy, r0.zzzz, r2.xxyz
  movc r0.yzw, r1.xxxx, r0.yyyy, r1.yyzw
else 
  mov r0.yzw, r0.xxxx
endif 
mov o0.xyz, r0.yzwy
mov o0.w, l(1.000000)
ret 
// Approximately 19 instruction slots used
#endif

const BYTE g_PS_1D[] =
{
     68,  88,  66,  67,  23, 116, 
     89,  95,  66, 166, 216,  85, 
    208, 121,  51,  82,  29, 157, 
     49, 231,   1,   0,   0,   0, 
     60,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    156,   1,   0,   0, 244,   1, 
      0,   0,  40,   2,   0,   0, 
    192,   4,   0,   0,  82,  68, 
     69,  70,  96,   1,   0,   0, 
      1,   0,   0,   0, 156,   0, 
      0,   0,   3,   0,   0,   0, 
     28,   0,   0,   0,   1,   4, 
    255, 255,   0,   1,   0,   0, 
     56,   1,   0,   0, 124,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    134,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      2,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 139,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 115,  97, 
    109,  76, 105, 110, 101,  97, 
    114,   0, 116, 120,  49,  68, 
      0,  99,  98,  65, 114, 114, 
     97, 121,  67, 111, 110, 116, 
    114, 111, 108,   0, 171, 171, 
    139,   0,   0,   0,   3,   0, 
      0,   0, 180,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    252,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   4,   1, 
      0,   0,   0,   0,   0,   0, 
     20,   1,   0,   0,   4,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0,  28,   1, 
      0,   0,   0,   0,   0,   0, 
     44,   1,   0,   0,   8,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0,  28,   1, 
      0,   0,   0,   0,   0,   0, 
     73, 110, 100, 101, 120,   0, 
    171, 171,   0,   0,   3,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     67, 104,  97, 110, 110, 101, 
    108,   0,   0,   0,   2,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     84, 111, 110, 101,  77,  97, 
    112, 112, 105, 110, 103,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  49, 
     48,  46,  49,   0,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   1, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  68,  82, 144,   2, 
      0,   0,  65,   0,   0,   0, 
    164,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     88,  16,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  98,  16, 
      0,   3,  18,  16,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   4,   0,   0,   0, 
     69,   0,   0,   9, 242,   0, 
     16,   0,   0,   0,   0,   0, 
      6,  16,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
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
      2,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0, 215, 163, 
     32,  64, 215, 163,  32,  64, 
    215, 163,  32,  64,   0,   0, 
      0,   0,   2,  64,   0,   0, 
    143, 194, 245,  60, 143, 194, 
    245,  60, 143, 194, 245,  60, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  50,   0,   0,  15, 
    114,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  31, 133,  27,  64, 
     31, 133,  27,  64,  31, 133, 
     27,  64,   0,   0,   0,   0, 
      2,  64,   0,   0,  61,  10, 
     23,  63,  61,  10,  23,  63, 
     61,  10,  23,  63,   0,   0, 
      0,   0,  50,   0,   0,  12, 
    114,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
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
     55,   0,   0,  10, 114,   0, 
     16,   0,   2,   0,   0,   0, 
    166, 138,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  55,   0, 
      0,   9, 114,   0,  16,   0, 
      2,   0,   0,   0, 166,  10, 
     16,   0,   1,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      2,   0,   0,   0,  55,   0, 
      0,   9, 226,   0,  16,   0, 
      1,   0,   0,   0,  86,   5, 
     16,   0,   1,   0,   0,   0, 
    166,  10,  16,   0,   0,   0, 
      0,   0,   6,   9,  16,   0, 
      2,   0,   0,   0,  55,   0, 
      0,   9, 226,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   1,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0,  86,  14,  16,   0, 
      1,   0,   0,   0,  18,   0, 
      0,   1,  54,   0,   0,   5, 
    226,   0,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  21,   0, 
      0,   1,  54,   0,   0,   5, 
    114,  32,  16,   0,   0,   0, 
      0,   0, 150,   7,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 116,   0,   0,   0, 
     19,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   5,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};
