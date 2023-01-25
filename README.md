
# NEO-D9S L-Band receiver example

https://learn.sparkfun.com/tutorials/gnss-correction-data-receiver-neo-d9s-hookup-guide

This example shows how to display the NEO-D9S's received signal imbalance and magnitude, plus a summary of any received PMP data.
Feel like supporting open source hardware?
Buy a board from SparkFun!
ZED-F9P RTK2: https://www.sparkfun.com/products/16481
NEO-D9S Correction Data Receiver: https://www.sparkfun.com/products/19390
Hardware Connections:
Use a Qwiic cable to connect the NEO-D9S L-Band corection data receiver to your board
If you don't have a platform with a Qwiic connection use the SparkFun Qwiic Breadboard Jumper (https://www.sparkfun.com/products/14425)
Open the serial monitor at 115200 baud to see the output

## Instructions

1. Install the [PlatformIO extension](https://docs.platformio.org/en/latest/integration/ide/vscode.html) for VSCode if you haven't already.
1. Download and unzip this repo, or clone it:

    ```shell
    git clone https://github.com/semuconsulting/esp32-d9s-monitor.git
    ```

1. Connect your ESP32 device to the NEO-D9S via I2C ports (SDA/SCL).
1. Connect your ESP32 device to your workstation via its USB port.
1. Open the project folder in VSCode.
1. Open the PlatformIO Project Tasks tab and select 'Upload and Monitor'. The code should automatically build and upload (on some ESP32 devices you may have to press the RESET button momentarily first).
1. For further details and troubleshooting, refer to the Sparkfun tutorial at the link above.

## License

Author: SparkFun Electronics / Paul Clark, adapted for VSCode/PlatformIO by semuadmin
  
Date: March 7th, 2022

License: MIT. See license file for more information but you can basically do whatever you want with this code.