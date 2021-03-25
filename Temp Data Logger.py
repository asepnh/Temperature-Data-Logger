#########################################################
#temp logger D Burrin                                   #
#19/6/16                                                #
#Uses file system in Mu                                 #
#Limitaion 32k file storage                             #
#Limition no append so run out of memory                #
#due to reading into a variable and this increasing     #
#in size o store append data and write back             #
#This example samples aprox 30sec at 0.5 sec per sample #
#########################################################
from microbit import *

#initialise base varialbles
logtime = running_time()
currtemp = temperature()
data2write=""

#sample rate in seconds
interval = 0.5
#set file name
filename = "datalogger.csv"

#functions
def readdata(filename):
    with open (filename,"r") as myfile:
        data = myfile.read()
        myfile.close()
    return(str(data))

def write2file(filename,data):
    with open (filename,'w') as myfile:
        data=str(data)
        myfile.write(data)
        myfile.close()

def get_time(logtime):
    logtime = (running_time() - logtime)//1000
    #logtime = round(logtime,2)
    return logtime

#main code
while True:
    #Start up message
    display.show("B")

    #exit main loop to enable download
    if button_a.is_pressed():
        display.show("X")
        sleep(100)
        display.clear()
        break

    #start logging
    if button_b.is_pressed():
        #logging data
        display.show("Y")

        #set header file for csv and write it
        data2write ="temp,time\r"
        write2file(filename,data2write)

        #set number od samples to be taken
        for x in range (60):

            data2write = readdata(filename)
            currtemp =  str(temperature())
            logtime = get_time(logtime)
            data2write = data2write + currtemp + "," + str(logtime) + "\r"
            write2file (filename,data2write)
            data2write = readdata(filename)
            #put interval in milliseconds
            sleep(interval*1000)

        #test output to rpl
        #print(data2write)

        #exit loggin loop
        if button_a.is_pressed():
            display.clear()
            break
