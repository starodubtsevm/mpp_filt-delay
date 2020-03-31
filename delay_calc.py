import numpy as np
from const import*

def delay (freqs,tmax):

    x = np.linspace(0, tmax, 400) 
    Dmax = 0
    Tmax = 0

    for i in range (len(x)):

        diff =  np.cos(2 * np.pi * (freqs-df) * x[i]) - np.cos(2 * np.pi *(freqs+df)* x[i])
        if abs(diff) > Dmax:
            Dmax = diff
            Tmax = x[i]
            Tmax = float('{:.4f}'.format(Tmax))
            n = int(Tmax/(1/fs))
    return (Tmax, n)

