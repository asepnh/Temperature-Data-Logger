# Temperature-Data-Logger

Trying to develop a device that allows temperature data logging as simple as available.
Resource available will be a laptop that can standby to record data.
Other option will be to upload data to cloud.

Hardware alternatives:
- Microbit
- ESP32


Using Makecode Microbit is found to have a limitation of 20s. Another means to circumvent this is to sleep the microbit in between data recording.

Microbit references:

- https://makecode.microbit.org/reference/serial/write-value

- https://microbit.org/projects/make-it-code-it/makecode-wireless-data-logger/  
  Doesn't save to data capture folder. Limited to 20 sec. 
- https://microbit.org/projects/make-it-code-it/python-wireless-data-logger/  
  No limit to the recording time, file is stored as csv in laptop, can use a remote microbit. But no indication on the timing. 
  4 temp sensor can go to microbit with a breakout board which will then sends signal to 1 microbit connected to a laptop.
  
- https://osoyoo.com/2018/09/18/micro-bit-lesson-using-the-dht11-sensor/  


  
- https://microbit.org/get-started/user-guide/python/
- https://microbit-micropython.readthedocs.io/en/latest/index.html

- https://microbit.org/projects/make-it-code-it/indoor-outdoor-thermometer/?editor=python
- https://microbit.org/projects/make-it-code-it/pir-movement-alarm/?editor=python
- https://microbit-micropython.readthedocs.io/en/v1.0.1/tutorials/storage.html#
- https://github.com/simonmonk/prog_mb
- https://github.com/simonmonk/mbms
- https://github.com/MartinCoderDojo/logging-microbit-data
- https://docs.python.org/3.9/tutorial/index.html
- http://www.microbitsandbobs.co.uk/downloads/templogger.py
  
- https://docs.microsoft.com/en-us/microsoft-365/education/data-streamer/using-microbit-and-makecode  
  This step requires the laptop to be installed with Office 365 desktop version, not all have this license

- https://www.littlebird.com.au/a/how-to/80/measure-temperature-and-humidity-with-micro-bit

ESP8266 References:
- https://my.cytron.io/p-esp01-humidity-and-temperature-module
- https://www.youtube.com/watch?v=poHZTsKvZzM
- https://mjrobot.org/monitoring-multiple-sensors/
- https://www.instructables.com/IoT-Made-Simple-Monitoring-Temperature-Anywhere/
- https://www.instructables.com/IoT-Made-Simple-Monitoring-Multiple-Sensors/
- http://help.blynk.cc/en/articles/512056-how-to-display-any-sensor-data-in-blynk-app





ESP32 Reference:
- https://randomnerdtutorials.com/getting-started-with-esp32/
- https://github.com/mathworks/thingspeak-arduino
- https://iotdesignpro.com/projects/how-to-send-data-to-thingspeak-cloud-using-esp32 -> But the code fails

ESP32 with DHT11:
https://www.nadieleczone.com/tutorial-arduino/iot-esp32-thingspeak-menghantar-data-suhu-dan-kelembapan-ke-server/

ESP8266 General
- https://my.cytron.io/p-nodemcu-lua-v3-esp8266-wifi-with-ch340c

ESP8266 with DS18B20
- https://github.com/terahurts/ESP8266-DS18B20-Thingspeak/blob/master/ESP8266-DS18B20-Thingspeak.ino

ESP8266 with DHT11
- https://roboindia.com/tutorials/nodemcu-dht11-thingspeak-data-upload/
- https://www.electronicshub.org/dht11-humidity-sensor-with-esp8266/

- https://www.hackster.io/akarsh98/esp8266-with-thingspeak-and-dht11-tutorial-web-server-a40add
- https://github.com/akarsh98/ESP8266-Thingspeak-Write-And-Read/blob/master/DHT11%20writing%20to%20thingspeak.ino

The last 2 above is what I settled with. Reason being is that it is the simplest, allows upload to web server thereby eliminating the need for standby laptop and are the cheapest options.


mBlock/ Halocode References:
- https://www.mblock.cc/doc/en/use-extensions/google-sheets.html

Useful Info:
Using microfs to transfer file - this is too much hassle, easier is using Mu python editor.
  Steps to install microfs for data transfer from Microbit (but this step is not required as we can use the Mu python editor file transfer system)
  - Install python in windows (pip will automatically be installed) https://www.python.org/downloads/
  - Install microfs
    - Get the pip installation folder by opening windows command prompt and typing "py -m pip --version"
    - Go to the pip script installation path and type "pip install microfs"

Difference between Python and MicroPython
https://docs.micropython.org/en/latest/genrst/index.html
