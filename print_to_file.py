import os
from const import*

def prn_to_file(y, freqs, len_tabs, delay_ms, delay_tick):

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
    str11 = "static fract16 delay"+ str(freqs)+ " ="
    str12 = str(delay_ms)+","
    str13 = str(delay_tick)

    head = (str1, str2, str3, str4, str5, str6, str7)

    directory_path = "./Headers"
    file_path = os.path.join(directory_path, "FIR_" + str(freqs)+ "_" + str(fs) + ".h")

    out_file = open(file_path,"wt")
    for i in range (len(head)):
        out_file.write(head[i] +'\n')

    string = ""

    for i in range (0,len_tabs,8):
        if (len_tabs - i) > 8:
            string = "{:7d},{:7d},{:7d},{:7d},{:7d},{:7d},{:7d},{:7d},".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5],y[i+6],y[i+7])
        elif (len_tabs - i) == 8:
            string = "{:7d},{:7d},{:7d},{:7d},{:7d},{:7d},{:7d},{:7d}".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5],y[i+6],y[i+7])
        elif (len_tabs - i) == 7:
            string = "{:7d},{:7d},{:7d},{:7d},{:7d},{:7d},{:7d}".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5],y[i+6])
        elif (len_tabs - i) == 6:
            string = "{:7d},{:7d},{:7d},{:7d},{:7d},{:7d}".format(y[i],\
            y[i+1],y[i+2],y[i+3],y[i+4],y[i+5])
        elif (len_tabs - i) == 5:
            string = "{:7d},{:7d},{:7d},{:7d},{:7d}".format(y[i],y[i+1],y[i+2],\
            y[i+3],y[i+4])
        elif (len_tabs - i) == 4:
            string = "{:7d},{:7d},{:7d},{:7d}".format(y[i],y[i+1],y[i+2],y[i+3])
        elif (len_tabs - i) == 3:
            string = "{:7d},{:7d},{:7d}".format(y[i],y[i+1],y[i+2])
        elif (len_tabs - i) == 2:
            string = "{:7d},{:7d}".format(y[i],y[i+1])
        elif (len_tabs - i) == 1:
            string = "{:7d} ".format(y[i])

        out_file.write(string + '\n')
        string = ""

    finish = (str8, str9)
    for i in range (len(finish)):
        out_file.write(finish[i] +'\n')

    delay = (str11,str7,str12,str13,str8)
    for i in range (len(delay)):
        out_file.write(delay[i] +'\n')

    out_file.write(str10 +'\n')
    out_file.close

