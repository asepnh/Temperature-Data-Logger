# Temperature-Data-Logger

Trying to develop a device that allows temperature data logging as simple as available.
Resource available will be a laptop that can standby to record data.
Other option will be to upload data to cloud.

Hardware alternatives:
- Microbit
- ESP32


Using Makecode Microbit is found to have a limitation of 20s. Another means to circumvent this is to sleep the microbit in between data recording.

Microbit references:
- https://makecode.microbit.org/courses/ucp-science/data-collection  
  This is only limited to 20 seconds
- https://microbit.org/projects/make-it-code-it/python-wireless-data-logger/  
  No limit to the recording time, file is stored as csv in laptop, can use a remote microbit. But no indication on the timing. 
  4 temp sensor can go to microbit with a breakout board which will then sends signal to 1 microbit connected to a laptop.
- https://microbit.org/projects/make-it-code-it/indoor-outdoor-thermometer/?editor=python
- https://microbit.org/projects/make-it-code-it/pir-movement-alarm/?editor=python
- https://microbit-micropython.readthedocs.io/en/v1.0.1/tutorials/storage.html#
  
- https://github.com/simonmonk/mbms
- https://github.com/MartinCoderDojo/logging-microbit-data
- https://docs.python.org/3.9/tutorial/index.html
- http://www.microbitsandbobs.co.uk/downloads/templogger.py
  
- https://docs.microsoft.com/en-us/microsoft-365/education/data-streamer/using-microbit-and-makecode  
  This step requires the laptop to be installed with Office 365 desktop version, not all have this license

ESP32 References:
- https://my.cytron.io/p-esp01-humidity-and-temperature-module
- https://www.youtube.com/watch?v=poHZTsKvZzM


Useful Info:
Using microfs to transfer file - this is too much hassle, easier is using Mu python editor.
  Steps to install microfs for data transfer from Microbit (but this step is not required as we can use the Mu python editor file transfer system)
  - Install python in windows (pip will automatically be installed) https://www.python.org/downloads/
  - Install microfs
    - Get the pip installation folder by opening windows command prompt and typing "py -m pip --version"
    - Go to the pip script installation path and type "pip install microfs"

