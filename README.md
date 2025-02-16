# BadUSB Project with Lily Go ATMEGA32U4

## Description
This project presents an implementation of a BadUSB using the Lily Go ATMEGA32U4 Development Board. BadUSB is a powerful device for cybersecurity simulations and penetration testing.

## Compatibility
- Fully compatible with ABNT and ABNT2 keyboards.
- Utilizes Base64 encoding to ensure broad applicability across different keyboard layouts.

## Getting Started with BadUSB Project

### Prerequisites
Before you begin, ensure that you have the following installed:
- [Arduino IDE](https://www.arduino.cc/en/software): Required for uploading the `.ino` file to the ATMEGA32U4 board.
- Windows PowerShell: To execute the conversion scripts.

### Installation and Execution

1. **Script Preparation:**  
   Write the entire content of your commands in the `script.ps1` file.

2. **Conversion to Base64:**  
   Use the `convert.ps1` script to convert the content of `script.ps1` into Base64.

3. **Insertion into Arduino:**  
   Copy the generated Base64 text and paste it into the `.ino` file at the appropriate line:
   ```bash
   Command("powershell -EncodedCommand [your_base64_here]");
