# Arduino Core for Maxim's MAX326xx series based Boards

[Arduino](https://www.arduino.cc/) support package to program [Maxim](https://www.maximintegrated.com/) boards.

See the [wiki page](wiki) for additional details about the specific boards and
some minor differences in the [implementation of the Arduino APIs](wiki/API).

### Supported Boards
- [MAX32620FTHR](https://www.maximintegrated.com/en/products/microcontrollers/MAX32620FTHR.html)
	- To program using USB bootloader use:  [MAX32620FTHR(Native USB port)](wiki/MAX32620FTHR#native-usb-bootloader)
	- To program using MAXDAP adapter use:  [MAX32620FTHR(Programming port)](wiki/MAX32620FTHR#maxdap-programming-adapter)
- [MAX32625MBED](https://www.maximintegrated.com/en/products/microcontrollers/MAX32625MBED.html)
- [MAX32630FTHR](https://www.maximintegrated.com/en/products/microcontrollers/MAX32630FTHR.html)

### Setup Maxim board support in the Arduino Environment
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
3. Prepare board for programming:
  - using MAXDAP adapter:  Connect MAXDAP adapter to target with ribbon cable and connect USB cables to both boards.
	- using native USB bootloader:  Connect to target with USB cable then press and hold the boot button, press and release the reset button, then release the boot button.  
4. Click the **_Upload_** button or go to **_Sketch->Upload_**.(Requires USB Write access; Details [here](README.md#maxdap).)
5. If you are using the native USB bootloader, the target will reset itself and start running the application code.  If you are using a MAXDAP adapter, you need to press the Reset button to run.

### MAXDAP
* MAXDAP is backward compatible, customized extension of the [DAPLink open-source project](https://github.com/mbedmicro/DAPLink/blob/master/README.md#daplink) created by ARM.  It provides the standard CMSIS-DAP debugging interface along with a USB CDC UART and USB MSC drag-n-drop programming.  
* The drag-n-drop programming interface looks like a USB drive so that no drivers or software are required.  You need to have permission to write to a USB storage device in order to use the drag-n-drop programming function.

___
For additional information, please check the [wiki](wiki) page.
