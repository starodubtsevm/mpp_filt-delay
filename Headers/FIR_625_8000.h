#ifndef __FIR_625_H__
#define __FIR_625_H__

#define LENGTH_FIR_625    1045

static fract16 fir625coeff[LENGTH_FIR_625] =
{
      0,      0,      2,      2,      3,      2,      1,      0,
     -1,     -2,     -3,     -2,     -1,      0,      1,      2,
      3,      3,      2,      0,      0,     -2,     -2,     -3,
     -2,     -1,      0,      1,      2,      3,      3,      2,
      0,      0,     -2,     -3,     -3,     -2,     -1,      0,
      1,      3,      3,      3,      1,      0,     -1,     -2,
     -3,     -3,     -2,     -1,      0,      2,      3,      3,
      3,      1,      0,     -1,     -3,     -3,     -3,     -2,
      0,      1,      2,      3,      3,      2,      1,      0,
     -2,     -3,     -3,     -3,     -2,      0,      1,      3,
      3,      3,      2,      1,      0,     -2,     -3,     -3,
     -3,     -1,      0,      1,      3,      3,      3,      2,
      0,     -1,     -2,     -3,     -3,     -2,     -1,      0,
      2,      3,      3,      3,      2,      0,     -1,     -2,
     -3,     -3,     -2,     -1,      0,      2,      3,      3,
      2,      1,      0,     -1,     -2,     -3,     -2,     -1,
      0,      0,      1,      2,      2,      1,      0,      0,
     -1,     -1,     -2,     -1,     -1,      0,      0,      1,
      1,      1,      1,      0,      0,      0,      0,      0,
      0,      0,      0,      0,      0,      0,      0,      0,
      0,      0,      0,      0,      0,      0,      0,      0,
      0,     -1,     -1,     -1,     -1,      0,      0,      2,
      2,      2,      2,      1,      0,     -2,     -3,     -4,
     -3,     -2,      0,      2,      4,      5,      5,      3,
      1,     -1,     -4,     -6,     -7,     -5,     -3,      0,
      4,      7,      9,      8,      5,      0,     -3,     -8,
    -10,    -10,     -8,     -3,      2,      7,     11,     13,
     11,      6,      0,     -6,    -12,    -15,    -14,    -10,
     -3,      4,     12,     16,     17,     14,      7,     -1,
    -10,    -17,    -20,    -18,    -11,     -2,      8,     17,
     22,     22,     16,      7,     -4,    -16,    -23,    -26,
    -22,    -12,      0,     13,     23,     29,     27,     19,
      6,     -9,    -22,    -30,    -32,    -25,    -13,      3,
     19,     31,     36,     32,     20,      3,    -14,    -30,
    -38,    -38,    -28,    -11,      8,     26,     39,     43,
     36,     21,      0,    -21,    -38,    -47,    -44,    -30,
     -9,     14,     35,     49,     50,     40,     20,     -5,
    -30,    -48,    -55,    -49,    -31,     -5,     22,     45,
     58,     57,     43,     17,    -12,    -40,    -59,    -64,
    -54,    -31,      0,     31,     56,     68,     64,     44,
     13,    -20,    -51,    -70,    -72,    -57,    -28,      7,
     42,     68,     78,     69,     44,      7,    -31,    -63,
    -81,    -80,    -59,    -24,     16,     55,     80,     87,
     74,     42,      0,    -43,    -76,    -92,    -86,    -59,
    -18,     27,     68,     93,     96,     76,     38,     -9,
    -56,    -89,   -102,    -91,    -57,    -10,     40,     82,
    105,    103,     77,     31,    -21,    -70,   -103,   -112,
    -94,    -53,      0,     54,     96,    116,    108,     75,
     23,    -34,    -85,   -116,   -120,    -95,    -47,     12,
     69,    111,    126,    112,     71,     12,    -49,   -100,
   -128,   -126,    -93,    -38,     26,     85,    124,    135,
    113,     64,      0,    -65,   -115,   -139,   -129,    -89,
    -27,     41,    101,    137,    141,    112,     55,    -14,
    -81,   -130,   -148,   -131,    -83,    -14,     57,    116,
    148,    145,    108,     44,    -30,    -98,   -143,   -155,
   -130,    -74,      0,     74,    131,    158,    147,    101,
     31,    -46,   -114,   -155,   -159,   -126,    -62,     16,
     91,    145,    165,    146,     92,     16,    -63,   -129,
   -164,   -161,   -119,    -49,     33,    107,    157,    169,
    142,     80,      0,    -81,   -143,   -171,   -159,   -110,
    -33,     50,    123,    167,    171,    135,     67,    -17,
    -97,   -155,   -176,   -155,    -98,    -17,     67,    137,
    174,    170,    125,     51,    -34,   -113,   -165,   -178,
   -148,    -84,      0,     84,    149,    178,    166,    114,
     35,    -52,   -127,   -172,   -176,   -139,    -68,     17,
    100,    158,    180,    158,    100,     17,    -68,   -139,
   -176,   -172,   -127,    -52,     35,    114,    166,    178,
    149,     84,      0,    -84,   -148,   -178,   -165,   -113,
    -34,     51,    125,    170,    174,    137,     67,    -17,
    -98,   -155,   -176,   -155,    -97,    -17,     67,    135,
    171,    167,    123,     50,    -33,   -110,   -159,   -171,
   -143,    -81,      0,     80,    142,    169,    157,    107,
     33,    -49,   -119,   -161,   -164,   -129,    -63,     16,
     92,    146,    165,    145,     91,     16,    -62,   -126,
   -159,   -155,   -114,    -46,     31,    101,    147,    158,
    131,     74,      0,    -74,   -130,   -155,   -143,    -98,
    -30,     44,    108,    145,    148,    116,     57,    -14,
    -83,   -131,   -148,   -130,    -81,    -14,     55,    112,
    141,    137,    101,     41,    -27,    -89,   -129,   -139,
   -115,    -65,      0,     64,    113,    135,    124,     85,
     26,    -38,    -93,   -126,   -128,   -100,    -49,     12,
     71,    112,    126,    111,     69,     12,    -47,    -95,
   -120,   -116,    -85,    -34,     23,     75,    108,    116,
     96,     54,      0,    -53,    -94,   -112,   -103,    -70,
    -21,     31,     77,    103,    105,     82,     40,    -10,
    -57,    -91,   -102,    -89,    -56,     -9,     38,     76,
     96,     93,     68,     27,    -18,    -59,    -86,    -92,
    -76,    -43,      0,     42,     74,     87,     80,     55,
     16,    -24,    -59,    -80,    -81,    -63,    -31,      7,
     44,     69,     78,     68,     42,      7,    -28,    -57,
    -72,    -70,    -51,    -20,     13,     44,     64,     68,
     56,     31,      0,    -31,    -54,    -64,    -59,    -40,
    -12,     17,     43,     57,     58,     45,     22,     -5,
    -31,    -49,    -55,    -48,    -30,     -5,     20,     40,
     50,     49,     35,     14,     -9,    -30,    -44,    -47,
    -38,    -21,      0,     21,     36,     43,     39,     26,
      8,    -11,    -28,    -38,    -38,    -30,    -14,      3,
     20,     32,     36,     31,     19,      3,    -13,    -25,
    -32,    -30,    -22,     -9,      6,     19,     27,     29,
     23,     13,      0,    -12,    -22,    -26,    -23,    -16,
     -4,      7,     16,     22,     22,     17,      8,     -2,
    -11,    -18,    -20,    -17,    -10,     -1,      7,     14,
     17,     16,     12,      4,     -3,    -10,    -14,    -15,
    -12,     -6,      0,      6,     11,     13,     11,      7,
      2,     -3,     -8,    -10,    -10,     -8,     -3,      0,
      5,      8,      9,      7,      4,      0,     -3,     -5,
     -7,     -6,     -4,     -1,      1,      3,      5,      5,
      4,      2,      0,     -2,     -3,     -4,     -3,     -2,
      0,      1,      2,      2,      2,      2,      0,      0,
     -1,     -1,     -1,     -1,      0,      0,      0,      0,
      0,      0,      0,      0,      0,      0,      0,      0,
      0,      0,      0,      0,      0,      0,      0,      0,
      0,      0,      1,      1,      1,      1,      0,      0,
     -1,     -1,     -2,     -1,     -1,      0,      0,      1,
      2,      2,      1,      0,      0,     -1,     -2,     -3,
     -2,     -1,      0,      1,      2,      3,      3,      2,
      0,     -1,     -2,     -3,     -3,     -2,     -1,      0,
      2,      3,      3,      3,      2,      0,     -1,     -2,
     -3,     -3,     -2,     -1,      0,      2,      3,      3,
      3,      1,      0,     -1,     -3,     -3,     -3,     -2,
      0,      1,      2,      3,      3,      3,      1,      0,
     -2,     -3,     -3,     -3,     -2,      0,      1,      2,
      3,      3,      2,      1,      0,     -2,     -3,     -3,
     -3,     -1,      0,      1,      3,      3,      3,      2,
      0,     -1,     -2,     -3,     -3,     -2,     -1,      0,
      1,      3,      3,      3,      1,      0,     -1,     -2,
     -3,     -3,     -2,      0,      0,      2,      3,      3,
      2,      1,      0,     -1,     -2,     -3,     -2,     -2,
      0,      0,      2,      3,      3,      2,      1,      0,
     -1,     -2,     -3,     -2,     -1,      0,      1,      2,
      3,      2,      2,      0,      0
};

static fract16 delay625 =
{
0.0212,
169
};
#endif
