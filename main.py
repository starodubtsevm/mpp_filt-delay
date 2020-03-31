import numpy as np
from calc import*
from plot import*
from print_to_file import*
from const import*
from delay_calc import*

#-входные данные для расчетов----------------------------------------------

freqs = 475, 525, 575, 625, 675, 725, 775,825, 875, 925 # частоты фильтра
band = 22 # полоса пропускания фильтра
lpf_cut = 15 # частота среза фнч после детектора
tmax = 50e-3 # ограничение (сек) для расчета задержки ЧМ детектора
ntaps = 1024
#--------------------------------------------------------------------------

for i in range (len(freqs)):

    taps = bandpass_input_fir(ntaps, freqs[i]-band/2, freqs[i]+band/2, fs=fs)
    y = []
    x =0
    for j  in range (len(taps)):
        #x = float('{:.4f}'.format(taps[i])) # коэффициенты с плавающей запятой
        x = int((taps[j] * 32768)) # коэффициенты целочисленные
        y.append(x)
    delay_ms, delay_tick = delay(freqs[i], tmax) # расчет задержки ЧМ детектора
    prn_to_file(y,freqs[i], len(taps), delay_ms,delay_tick) # формирование *.h файлов
    plot_fr(y, freqs[i], band, ntaps) # формирование графиков АЧХ


