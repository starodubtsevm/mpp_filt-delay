import os
from const import*

def prn_to_file(y, freqs, len_tabs):

    str1 = "#ifndef __FIR_"+ str(freqs)+"_H__"
    str2 = "#define __FIR_"+ str(freqs)+"_H__"
    str3 = ""
    str4 = "#define LENGTH_FIR_"+str(freqs)+"    "+str(len_tabs)
    str5 = ""
    str6 = "static fract16 fir"+ str(freqs)+"coeff[LENGTH_FIR_"+str(freqs)+"] ="
    str7 = "{"
    str8 = "};"
    str9 = ""
    str10 = "#endif"

    head = (str1, str2, str3, str4, str5, str6, str7)
    directory_path = "./Headers"

    file_path = os.path.join(directory_path, "FIR_" + str(freqs)+ "_" + str(fs) + ".h")

    out_file = open(file_path,"wt")
    for i in range (len(head)):
        out_file.write(head[i] +'\n')

    string = ""

    for i in range (0,len_tabs,8):
        if (len_tabs - i) >= 8:
            string = "{:8d} {:8d} {:8d} {:8d} {:8d} {:8d} {:8d} {:8d}".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5],y[i+6],y[i+7])
        elif (len_tabs - i) == 7:
            string = "{:8d} {:8d} {:8d} {:8d} {:8d} {:8d} {:8d}".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5],y[i+6])
        elif (len_tabs - i) == 6:
            string = "{:8d} {:8d} {:8d} {:8d} {:8d} {:8d}".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5])
        elif (len_tabs - i) == 5:
            string = "{:8d} {:8d} {:8d} {:8d} {:8d}".format(y[i],y[i+1],y[i+2],\
            y[i+3],y[i+4])
        elif (len_tabs - i) == 4:
            string = "{:8d} {:8d} {:8d} {:8d}".format(y[i],y[i+1],y[i+2],y[i+3])
        elif (len_tabs - i) == 3:
            string = "{:8d} {:8d} {:8d}".format(y[i],y[i+1],y[i+2])
        elif (len_tabs - i) == 2:
            string = "{:8d} {:8d}".format(y[i])
        elif (len_tabs - i) == 1:
            string = "{:8d} ".format(y[i])

        out_file.write(string + '\n')
        string = ""

    finish = (str8, str9, str10)
    for i in range (len(finish)):
        out_file.write(finish[i] +'\n')

    out_file.close

