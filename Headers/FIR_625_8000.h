#ifndef __FIR_625_H__
#define __FIR_625_H__

#define LENGTH_FIR_625    1024

static fract16 fir625coeff[LENGTH_FIR_625] =
{
      -3       -2       -1        0        1        2        3        2
       1        0       -1       -2       -3       -2       -2        0
       0        2        2        3        2        1        0       -1
      -2       -3       -2       -1        0        1        2        3
       3        2        1        0       -1       -2       -3       -2
      -1        0        1        2        3        3        2        0
       0       -2       -3       -3       -2       -1        0        1
       2        3        3        2        0       -1       -2       -3
      -3       -2       -1        0        2        3        3        3
       1        0       -1       -2       -3       -3       -2        0
       0        2        3        3        2        1        0       -1
      -3       -3       -3       -2        0        1        2        3
       3        2        1        0       -1       -2       -3       -2
      -1        0        1        2        3        2        2        0
       0       -1       -2       -2       -2       -1        0        1
       2        2        2        1        0        0       -1       -2
      -1       -1        0        0        0        1        1        1
       0        0        0        0        0        0        0        0
       0        0        0        0        0        0        0        0
       0        0        0        0        0        0       -1       -1
      -1       -1        0        0        1        2        2        2
       1        0       -1       -3       -3       -3       -2       -1
       1        3        4        5        4        2        0       -3
      -5       -6       -6       -4       -1        2        6        8
       8        6        3       -1       -5       -9      -10       -9
      -5        0        5        9       12       12        8        3
      -3       -9      -13      -14      -12       -6        0        8
      14       17       15       10        2       -6      -14      -18
     -19      -15       -7        3       12       20       22       19
      12        1      -10      -19      -25      -24      -17       -6
       6       18       26       28       23       12       -1      -15
     -26      -31      -29      -19       -4       11       25       33
      34       26       12       -5      -22      -34      -38      -33
     -20       -1       17       33       41       40       29       10
     -10      -30      -43      -46      -37      -20        2       25
      42       50       46       30        7      -17      -39      -52
     -53      -41      -19        8       34       52       59       51
      31        3      -26      -50      -62      -60      -43      -15
      16       44       63       67       55       29       -3      -36
     -61      -72      -66      -44      -10       25       56       74
      75       58       26      -11      -48      -73      -82      -71
     -43       -4       36       69       85       82       59       21
     -21      -60      -86      -91      -74      -40        4       48
      82       96       88       58       14      -33      -74      -98
     -99      -76      -34       15       62       95      106       92
      55        5      -46      -88     -110     -105      -75      -27
      27       77      109      115       94       50       -5      -61
    -103     -121     -110      -73      -18       41       92      121
     122       94       43      -18      -77     -117     -130     -112
     -67       -6       57      107      133      127       91       33
     -33      -92     -130     -138     -112      -60        6       73
     122      143      130       86       21      -49     -108     -143
    -143     -110      -50       22       89      136      151      130
      78        7      -65     -124     -153     -146     -104      -38
      38      106      149      157      128       68       -7      -82
    -138     -161     -146      -97      -23       55      121      160
     160      122       56      -24      -99     -151     -167     -144
     -86       -8       72      136      168      160      114       41
     -41     -115     -162     -170     -139      -74        8       89
     149      174      158      104       25      -59     -130     -170
    -171     -130      -59       25      105      160      177      152
      91        8      -76     -143     -176     -168     -120      -43
      43      120      169      177      144       76       -8      -92
    -154     -179     -162     -107      -26       60      133      174
     174      133       60      -26     -107     -162     -179     -154
     -92       -8       76      144      177      169      120       43
     -43     -120     -168     -176     -143      -76        8       91
     152      177      160      105       25      -59     -130     -171
    -170     -130      -59       25      104      158      174      149
      89        8      -74     -139     -170     -162     -115      -41
      41      114      160      168      136       72       -8      -86
    -144     -167     -151      -99      -24       56      122      160
     160      121       55      -23      -97     -146     -161     -138
     -82       -7       68      128      157      149      106       38
     -38     -104     -146     -153     -124      -65        7       78
     130      151      136       89       22      -50     -110     -143
    -143     -108      -49       21       86      130      143      122
      73        6      -60     -112     -138     -130      -92      -33
      33       91      127      133      107       57       -6      -67
    -112     -130     -117      -77      -18       43       94      122
     121       92       41      -18      -73     -110     -121     -103
     -61       -5       50       94      115      109       77       27
     -27      -75     -105     -110      -88      -46        5       55
      92      106       95       62       15      -34      -76      -99
     -98      -74      -33       14       58       88       96       82
      48        4      -40      -74      -91      -86      -60      -21
      21       59       82       85       69       36       -4      -43
     -71      -82      -73      -48      -11       26       58       75
      74       56       25      -10      -44      -66      -72      -61
     -36       -3       29       55       67       63       44       16
     -15      -43      -60      -62      -50      -26        3       31
      51       59       52       34        8      -19      -41      -53
     -52      -39      -17        7       30       46       50       42
      25        2      -20      -37      -46      -43      -30      -10
      10       29       40       41       33       17       -1      -20
     -33      -38      -34      -22       -5       12       26       34
      33       25       11       -4      -19      -29      -31      -26
     -15       -1       12       23       28       26       18        6
      -6      -17      -24      -25      -19      -10        1       12
      19       22       20       12        3       -7      -15      -19
     -18      -14       -6        2       10       15       17       14
       8        0       -6      -12      -14      -13       -9       -3
       3        8       12       12        9        5        0       -5
      -9      -10       -9       -5       -1        3        6        8
       8        6        2       -1       -4       -6       -6       -5
      -3        0        2        4        5        4        3        1
      -1       -2       -3       -3       -3       -1        0        1
       2        2        2        1        0        0       -1       -1
      -1       -1        0        0        0        0        0        0
       0        0        0        0        0        0        0        0
       0        0        0        0        0        0        0        0
       1        1        1        0        0        0       -1       -1
      -2       -1        0        0        1        2        2        2
       1        0       -1       -2       -2       -2       -1        0
       0        2        2        3        2        1        0       -1
      -2       -3       -2       -1        0        1        2        3
       3        2        1        0       -2       -3       -3       -3
      -1        0        1        2        3        3        2        0
       0       -2       -3       -3       -2       -1        0        1
       3        3        3        2        0       -1       -2       -3
      -3       -2       -1        0        2        3        3        2
       1        0       -1       -2       -3       -3       -2        0
       0        2        3        3        2        1        0       -1
      -2       -3       -2       -1        0        1        2        3
       3        2        1        0       -1       -2       -3       -2
      -1        0        1        2        3        2        2        0
       0       -2       -2       -3       -2       -1        0        1
       2        3        2        1        0       -1       -2       -3
};

static fract16 delay625=
{
0.0212
169
};
#endif
