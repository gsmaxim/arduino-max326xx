# Arduino Core for Maxim's MAX326xx series based Boards

[Arduino](https://www.arduino.cc/) support package to program [Maxim](https://www.maximintegrated.com/) boards.

### Supported Boards
- [MAX32620FTHR](https://www.maximintegrated.com/en/products/microcontrollers/MAX32620FTHR.html)
- [MAX32625MBED](https://www.maximintegrated.com/en/products/microcontrollers/MAX32625MBED.html)
- [MAX32630FTHR](https://www.maximintegrated.com/en/products/microcontrollers/MAX32630FTHR.html)

### Setup the Arduino Environment
###### NOTE: If you already have latest version of Arduino installed on your computer, skip step 1 and 2.
1. [Download](https://www.arduino.cc/en/Main/Software) latest version and install the Arduino IDE for [Windows](https://www.arduino.cc/en/Guide/Windows), [Linux](https://www.arduino.cc/en/Guide/Linux) or [Mac OS](https://www.arduino.cc/en/Guide/MacOSX). 
2. Open the Arduino IDE.
3. For Windows, and Linux, go to **_File->Preferences_**. For Mac OS, go to **_Arduino->Preferences_**.
4. In the Dialog box, locate **_Additional Boards Manager URLs_** field, paste the following URL and click **_OK_**.<br/>`https://raw.githubusercontent.com/maximintegratedmicros/arduino-collateral/master/package_maxim_index.json`
5. Go to **_Tools->Board->Boards Manager..._**
6. In the search field, type "maxim".
7. Select **_Maxim's 32-bit Microcontroller_** and click **_Install_**.
8. Once the installation is completed, close the **_Boards Manager_**.
9. Go to **_Tools->Board_**. In the section **_Maxim ARM (32-bit) Boards_**, select your board from list of [Supported Boards](README.md#supported-boards).
10. Plug in your board and under **_Tools->Port_** select the appropriate serial port for your board.
11. Go to **_Tools->Programmer_** and select **DAPLink**.

### Verify the setup
1. In the Arduino IDE, go to **_File->Examples->01.Basics->Blink_**.
2. Click the **_Verify_** button or go to **_Sketch->Verify/Compile_**.
3. Click the **_Upload_** button or go to **_Sketch->Upload_**.(Requires USB Write access; Details [here](README.md#daplink-programmer).)
4. If you are using a board with Bootloader, it will reset itself and start running the application code. For non-Bootloader version, you need to press the Reset button to run.

### DAPLink
* What is [DAPLink](https://github.com/mbedmicro/DAPLink/blob/master/README.md#daplink)?
* The Maxim board connects to computer as a USB storage drive and uses DAPLink MSC to upload the sketch.
___
For additional information, please check the [wiki](https://github.com/maximintegratedmicros/arduino-max326xx/wiki) page.
