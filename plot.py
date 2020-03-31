import os
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages as pdf
from scipy.signal import freqz
from const import*

def plot_fr(y,freqs,band,ntaps):

    lowcut  = freqs - band/2
    highcut = freqs + band/2

    fig = plt.figure(1, figsize=(12, 9))
    plt.clf()

    # First plot the desired ideal response as a green(ish) rectangle.
    rect = plt.Rectangle((lowcut, 0), highcut - lowcut, -90,
        facecolor="#60ff60", alpha=0.2)
    plt.gca().add_patch(rect)

    # Plot the frequency response
    w, h = freqz(y, 1, worN=10000)
    plt.plot((fs * 0.5 / np.pi) * w, 20 * np.log10(abs(h))-90, label="Hamming window")

    plt.xlim(lowcut - 100, highcut + 100)
    plt.ylim(-90, 5)
    plt.grid(True)
    plt.legend()
    plt.xlabel('Frequency (Hz)')
    plt.ylabel('Gain')
    plt.title('АЧХ входного FIR фильтра, %d - %d  Гц %d taps, fs = %d kHz' % (lowcut, highcut, ntaps, fs))

    file_name = str("FIR_" + str(lowcut)+ "-" + str(highcut)+".png")

    plt.savefig('./Graphics/'+ file_name)
    plt.clf()

