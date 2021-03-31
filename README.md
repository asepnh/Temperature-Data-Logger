# Temperature-Data-Logger

Device that allows temperature data logging using ESP32/ ESP8266, DHT11 and upload it to Thingspeak.

Main reference ESP32:
- https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/
- https://github.com/mathworks/thingspeak-arduino/blob/master/examples/ESP32/WriteMultipleFields/WriteMultipleFields.ino
- https://www.nadieleczone.com/tutorial-arduino/iot-esp32-thingspeak-menghantar-data-suhu-dan-kelembapan-ke-server/

Reference ESP 8266:
- https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/ -> Make sure you put in the correct pin number! Potential shortcircuit! Label and GPIO will be different. 

Project history below:

Trying to develop a device that allows temperature data logging as simple as possible.
Resource available will be a laptop that can standby to record data.
Other option will be to upload data to cloud.

Hardware alternatives:
- Microbit
  Using Makecode Microbit is found to have a limitation of 20s. Another means to circumvent this is to sleep the microbit in between data recording.
- ESP32
