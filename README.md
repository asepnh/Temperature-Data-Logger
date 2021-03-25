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
- https://microbit.org/projects/make-it-code-it/python-wireless-data-logger/
- https://microbit.org/projects/make-it-code-it/indoor-outdoor-thermometer/?editor=python
- https://microbit-micropython.readthedocs.io/en/v1.0.1/tutorials/storage.html#
- https://github.com/simonmonk/mbms
- https://github.com/MartinCoderDojo/logging-microbit-data
- https://docs.python.org/3.9/tutorial/index.html
- http://www.microbitsandbobs.co.uk/downloads/templogger.py



ESP32 References:
- https://my.cytron.io/p-esp01-humidity-and-temperature-module
- https://www.youtube.com/watch?v=poHZTsKvZzM




Steps to install microfs for data transfer from Microbit (but this step is not required as we can use the Mu python editor file transfer system)
- Install python in windows (pip will automatically be installed) https://www.python.org/downloads/
- Install microfs
  - Get the pip installation folder by opening windows command prompt and typing "py -m pip --version"
  - Go to the pip script installation path and type "pip install microfs"
