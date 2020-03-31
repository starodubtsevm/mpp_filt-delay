#ifndef __FIR_925_H__
#define __FIR_925_H__

#define LENGTH_FIR_925    1045

static fract16 fir925coeff[LENGTH_FIR_925] =
{
       1        0       -2       -3       -2        0        1        3
       2        1        0       -2       -3       -1        0        2
       3        2        0       -1       -3       -2       -1        1
       2        3        1        0       -2       -3       -2        0
       1        3        3        1       -1       -3       -3       -1
       0        2        3        2        0       -2       -3       -3
      -1        1        3        3        2        0       -2       -3
      -2        0        2        3        3        1       -1       -3
      -3       -2        0        2        3        2        0       -2
      -3       -3       -1        1        3        3        2        0
      -3       -3       -2        0        2        3        3        1
      -1       -3       -3       -1        0        3        3        2
       0       -2       -3       -3       -1        1        3        3
       1        0       -3       -3       -2        0        2        3
       2        0       -1       -3       -3       -1        0        2
       3        2        0       -2       -3       -2        0        1
       2        2        1        0       -2       -2       -1        0
       1        2        1        0        0       -1       -1        0
       0        1        1        0        0        0       -1        0
       0        0        0        0        0        0        0        0
       0        0        0        0        0        0        0        1
       1        0        0       -1       -2       -1        0        1
       2        2        0       -1       -3       -3       -1        1
       3        4        2        0       -3       -5       -4        0
       3        6        6        2       -2       -6       -7       -4
       1        6        9        7        1       -5      -10       -9
      -3        4       10       11        6       -1       -9      -13
      -9       -1        8       14       13        5       -6      -14
     -15       -9        2       13       18       13        1      -11
     -19      -17       -6        8       19       20       11       -3
     -18      -23      -16       -1       15       25       22        7
     -11      -25      -26      -14        5       23       29       21
       1      -19      -31      -27       -8       14       31       32
      17       -7      -29      -36      -25        0       24       38
      32       10      -18      -38      -39      -20       10       35
      44       29        0      -30      -46      -38      -11       22
      46       46       22      -12      -43      -52      -34        1
      36       54       45       12      -27      -54      -54      -25
      16       51       60       39       -2      -43      -63      -51
     -12       33       63       61       28      -20      -59      -69
     -44        4       51       73       58       13      -39      -73
     -69      -31       24       68       78       48       -6      -59
     -82      -64      -13       45       82       78       33      -28
     -77      -87      -53        8       67       92       71       12
     -52      -92      -86      -35       33       87       96       57
     -11      -76     -102      -77      -12       60      102       94
      37      -39      -97     -106      -61       15       85      112
      83       11      -67     -113     -101      -38       45      106
     114       64      -18      -94     -122      -88       -9       75
     122      108       39      -51     -116     -123      -67       22
     102      131       93        7      -82     -132     -115      -39
      57      125      131       70      -27     -111     -140      -97
      -5       90      141      121       39      -63     -134     -138
     -71       31      119      148      101        2      -97     -149
    -126      -38       69      143      144       72      -36     -127
    -155     -104        0      104      157      130       37      -75
    -150     -150      -73       40      135      161      106       -3
    -111     -164     -133      -35       81      157      154       73
     -45     -141     -166     -107        6      117      169      136
      33      -86     -163     -157      -72       50      147      170
     107      -10     -123     -174     -137      -30       91      168
     159       70      -54     -152     -173     -106       13      127
     177      137       27      -96     -171     -160      -68       58
     156      174      105      -17     -131     -179     -136      -24
      99      174      160       65      -62     -158     -175     -103
      21      134      180      134       21     -103     -175     -158
     -62       65      160      174       99      -24     -136     -179
    -131      -17      105      174      156       58      -68     -160
    -171      -96       27      137      177      127       13     -106
    -173     -152      -54       70      159      168       91      -30
    -137     -174     -123      -10      107      170      147       50
     -72     -157     -163      -86       33      136      169      117
       6     -107     -166     -141      -45       73      154      157
      81      -35     -133     -164     -111       -3      106      161
     135       40      -73     -150     -150      -75       37      130
     157      104        0     -104     -155     -127      -36       72
     144      143       69      -38     -126     -149      -97        2
     101      148      119       31      -71     -138     -134      -63
      39      121      141       90       -5      -97     -140     -111
     -27       70      131      125       57      -39     -115     -132
     -82        7       93      131      102       22      -67     -123
    -116      -51       39      108      122       75       -9      -88
    -122      -94      -18       64      114      106       45      -38
    -101     -113      -67       11       83      112       85       15
     -61     -106      -97      -39       37       94      102       60
     -12      -77     -102      -76      -11       57       96       87
      33      -35      -86      -92      -52       12       71       92
      67        8      -53      -87      -77      -28       33       78
      82       45      -13      -64      -82      -59       -6       48
      78       68       24      -31      -69      -73      -39       13
      58       73       51        4      -44      -69      -59      -20
      28       61       63       33      -12      -51      -63      -43
      -2       39       60       51       16      -25      -54      -54
     -27       12       45       54       36        1      -34      -52
     -43      -12       22       46       46       22      -11      -38
     -46      -30        0       29       44       35       10      -20
     -39      -38      -18       10       32       38       24        0
     -25      -36      -29       -7       17       32       31       14
      -8      -27      -31      -19        1       21       29       23
       5      -14      -26      -25      -11        7       22       25
      15       -1      -16      -23      -18       -3       11       20
      19        8       -6      -17      -19      -11        1       13
      18       13        2       -9      -15      -14       -6        5
      13       14        8       -1       -9      -13       -9       -1
       6       11       10        4       -3       -9      -10       -5
       1        7        9        6        1       -4       -7       -6
      -2        2        6        6        3        0       -4       -5
      -3        0        2        4        3        1       -1       -3
      -3       -1        0        2        2        1        0       -1
      -2       -1        0        0        1        1        0        0
       0        0        0        0        0        0        0        0
       0        0        0        0        0        0       -1        0
       0        0        1        1        0        0       -1       -1
       0        0        1        2        1        0       -1       -2
      -2        0        1        2        2        1        0       -2
      -3       -2        0        2        3        2        0       -1
      -3       -3       -1        0        2        3        2        0
      -2       -3       -3        0        1        3        3        1
      -1       -3       -3       -2        0        2        3        3
       0       -1       -3       -3       -1        1        3        3
       2        0       -2       -3       -3        0        2        3
       3        1       -1       -3       -3       -2        0        2
       3        2        0       -2       -3       -3       -1        1
       3        3        2        0       -2       -3       -2        0
       2        3        3        1       -1       -3       -3       -2
       0        2        3        2        0       -1       -3       -3
      -1        1        3        3        1        0       -2       -3
      -2        0        1        3        2        1       -1       -2
      -3       -1        0        2        3        2        0       -1
      -3       -2        0        1        2        3        1        0
      -2       -3       -2        0        1
};

static fract16 delay925=
{
0.0208
166
};
#endif
