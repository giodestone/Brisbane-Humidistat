# Brisbane-Humidistat
An ESP32-WROOM V1 based e-ink/e-paper humidistat & thermometer.

## Components Required
* Arduino Compatible Microcontroller, in this case 30 pin ESP32-WROOM-V1 (based on the ESP32-D0WDQ MCU) with CP2102 USB controller (this is the better one) - Closest PlatformIO match is a DOIT DEVIT V1
* 2.9 inch Epaper Module 296x128 - WeAct Studio 2.9 Inch Black/White Epaper Module. Note this uses 3.3V
* BME280 Humidity/Temperature/Pressure Sensor - I am using the 3.3V variant. This is the better of the sensors according to an article I cannot find anymore. 
* Buttons of your choice.

The ESP32's GPIO pins are only 3.3v tolerant. Make sure to use 3.3v components for this reason.

## Development
You will need the driver to program the micro controller. Windows may install them automatically - if it hasn't the device will have a yellow warning symbol next to in in Device Manager. I don't know about other platforms. This project uses an CP2102 controller - which should be downloaded from: https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads

Afterwards, read the text file with "Release_Notes" in the unzipped file for the install instructions. In my case the installation for Universial Windows Drivers can be installed through the Device Manager > Expand Ports (sometimes under Other Devices) > Right Click > Update Drivers > Browse My Computer For Files > select the extrated folder that was extracted. The official files are digitally signed so there should be no problems/need to reconfigure Windows to accept unsigned drivers.

## Reference
* ESP32 Devkit V1 Pinout: https://lastminuteengineers.com/esp32-pinout-reference/

