# Brisbane-Humidistat
An ESP32-WROOM V1 based e-ink/e-paper humidistat & thermometer.

## Components Required
* Arduino Compatible Microcontroller, in this case ESP32-WROOM-V1 (based on the ESP32-D0WDQ MCU) with CP2102 USB controller (this is the better one) - Closest PlatformIO match is a DOIT DEVIT V1
* 2.9 inch Epaper Module 296x128 - WeAct Studio 2.9 Inch Black/White Epaper Module. Note this uses 3.3V
* BME280 Humidity/Temperature/Pressure Sensor - I am using the 3.3V variant. This is the better of the sensors according to an article I cannot find anymore. 

The ESP32's GPIO pins are only 3.3v tolerant. Make sure to use 3.3v components for this reason.
