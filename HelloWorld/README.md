# @ Hello World with TFT Touch Display

## # About Hardware

1. Arduino Uno.

2. Arduino TFT Shield 3.5 Inch ILI9486.

[Buy it at Hshop](https://hshop.vn/products/man-hinh-cam-ung-arduino-tft-shield-3-5-inch-ili9486)

## # About Software

1. Download & install 4 libraries to follow complete tutorial.

[Download 3 libraries](./Touch_Screen_Libraries.rar)

[Download MCUFRIEND_kbv library](./MCUFRIEND_kbv.zip)

+ Extract all this file.

+ Copy 3 folders, and paste to arduino libraries folder.

    + For windows: 

    ```
    Users/YourUserName/Documents/Arduino/Libraries
    ```

    + For Ubuntu

    ```
    Arduino/Libraries
    ```

    2. Copy & paste [this source](./HelloWorld.ino). Then, upload & enjoy.

## # Explaination

1. Libraries

[MCUFRIEND_kbv library](https://www.arduinolibraries.info/libraries/mcufriend_kbv): 
TFT Library for 2.4, 2.8, 3.5, 3.6, 3.95 inch mcufriend UNO Shields. Must have /RD pin to be readable.

2. Some functions

[tft.setRotation(number)](https://learn.adafruit.com/adafruit-gfx-graphics-library/rotating-the-display): We can only rotate 0, 90, 180 or 270 degrees - anything else is not possible in hardware and is too taxing for an Arduino to calculate in software.

The rotation parameter can be 0, 1, 2 or 3.



