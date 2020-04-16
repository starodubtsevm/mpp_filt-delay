from scipy.signal import firwin


    #Расчет коэффициентов FIR abkmnhf
def bandpass_input_fir(ntaps, lowcut, highcut, fs, window='hamming'):
    nyq = 0.5 * fs

    taps = firwin(ntaps, [lowcut, highcut], nyq=nyq, pass_zero=False,
        window=window, scale=False)
    return taps

def lpf_calc(ntaps, lowcut, highcut,fs, window = 'hamming'):
    nyq = 0.5 * fs

    taps = firwin(ntaps, [lowcut, highcut], nyq=nyq, pass_zero=False,
        window=window, scale=False)
    return taps
