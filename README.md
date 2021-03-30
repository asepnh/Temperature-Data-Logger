# Temperature-Data-Logger

Device that allows temperature data logging using ESP32, DHT11 and upload it to Thingspeak.

Main reference:
- https://randomnerdtutorials.com/getting-started-with-esp32/
- https://github.com/mathworks/thingspeak-arduino/blob/master/examples/ESP32/WriteMultipleFields/WriteMultipleFields.ino
- https://www.nadieleczone.com/tutorial-arduino/iot-esp32-thingspeak-menghantar-data-suhu-dan-kelembapan-ke-server/


Project history below:

Trying to develop a device that allows temperature data logging as simple as available.
Resource available will be a laptop that can standby to record data.
Other option will be to upload data to cloud.

Hardware alternatives:
- Microbit
- ESP32


Using Makecode Microbit is found to have a limitation of 20s. Another means to circumvent this is to sleep the microbit in between data recording.

