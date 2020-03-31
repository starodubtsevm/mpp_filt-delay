import numpy as np
from calc import*
from plot import*
from print_to_file import*
from const import*

#-входные данные для расчетов----------------------------------------------

freqs = 475, 525, 575, 625, 675, 725, 775,825, 875, 925 # частоты фильтра
band = 22 # полоса пропускания фильтра
lpf_cut = 15 # частота среза фнч после детектора
ntaps = 1024
#--------------------------------------------------------------------------

print (freqs[0])

taps_hamming = bandpass_firwin(ntaps, 460, 480, fs=fs)
y = []
x =0
for i  in range (len(taps_hamming)):
    #x = float('{:.4f}'.format(taps_hamming[i]))
    x = taps_hamming[i]
    y.append(int(x*32768))
print (y)

plot_fr(y, 460,480,ntaps)




