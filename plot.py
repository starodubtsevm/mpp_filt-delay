import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import freqz
from const import*

def plot_fr(y,lowcut,highcut,ntaps):
    # Plot the frequency responses of the filters.
    plt.figure(1, figsize=(12, 9))
    plt.clf()

    # First plot the desired ideal response as a green(ish) rectangle.
    rect = plt.Rectangle((lowcut, 0), highcut - lowcut, -90,
        facecolor="#60ff60", alpha=0.2)
    plt.gca().add_patch(rect)

    # Plot the frequency response of each filter.
    w, h = freqz(y, 1, worN=10000)
    plt.plot((fs * 0.5 / np.pi) * w, 20 * np.log10(abs(h)), label="Hamming window")

    plt.xlim(lowcut - 100, highcut + 100)
    plt.ylim(-90, 5)
    plt.grid(True)
    plt.legend()
    plt.xlabel('Frequency (Hz)')
    plt.ylabel('Gain')
    plt.title('Frequency response of FIR filter, %d taps, fs = %d kHz' % (ntaps, fs))

    plt.show()
