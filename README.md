# BadUSB Project with Lily Go ATMEGA32U4

## Description
This project presents an implementation of a BadUSB using the Lily Go ATMEGA32U4 Development Board. BadUSB is a powerful device for cybersecurity simulations and penetration testing.

## Illustrative Image
<p align="center">
  <img src="https://img001.prntscr.com/file/img001/ZDAF_LFGRjG25jtQYZmXNg.png" width="300">
</p>

## Compatibility
The script has been developed to be fully compatible with ABNT and ABNT2 keyboards, using Base64 encoding. This ensures broad applicability across different keyboard layouts.

## Usage
1. **Script Preparation:** Write the entire content of the script in the `script.ps1` file.
2. **Conversion to Base64:** Use the `convert.ps1` script to convert the content of `script.ps1` into Base64.
3. **Insertion into Arduino:** Copy the generated Base64 text and paste it into the `.ino` file of the Arduino at the line corresponding to the command:
    ```arduino
    Command("powershell -EncodedCommand [your_base64_here]");
    ```

## Important Note
It's important to have the Arduino IDE installed to be able to upload the content of the `.ino` file into the ATMEGA32U4. For downloading and installing the Arduino IDE, please visit [Arduino Software (IDE)](https://www.arduino.cc/en/software).

