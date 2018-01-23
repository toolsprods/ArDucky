![License](https://img.shields.io/badge/license-MIT-green.svg?style=flat-square)

# ArDucky

Modification of the [malduino project of Seytonic](https://github.com/Seytonic/malduino) for simple connection on Arduino 32U4 boards.
Based on [malduino](https://github.com/Seytonic/malduino) and [LocaleKeyboard.js](https://github.com/Nurrl/LocaleKeyboard.js) repositories.

Features
========

- microSD to store [Ducky Script](https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript) code
- up to 8 DIP to choose between 256 different payloads
- button to launch the payload selected by the DIP
- led to indicate when the payload has finished executing
- you can choose easily between different keyboard layouts!

Connection
==========

![ArDucky](https://raw.githubusercontent.com/toolsprods/arducky/master/connection.png)
Made with [Fritzing](https://github.com/fritzing/fritzing-app).

If you have to connect it to a Leonardo connects the microSD module to the SPI pins that are in the ICSP connector on the board. The microSD module usually works at 3.3V.

Configuration
=============

Before uploading the code to the board you need to modify the `Configuration.h` file to configure and check some parameters such as the keyboard layout or the correct pins on all components.
You can review the `ConfigurationProMicro.h` file to see the connection to a SparkFun ProMicro board.

License
=======
This project is licensed under the MIT License - see the LICENSE file for details.
