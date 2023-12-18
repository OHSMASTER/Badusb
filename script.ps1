Start-Process "notepad.exe"
Start-Sleep -Milliseconds 500
Add-Type -AssemblyName System.Windows.Forms
[System.Windows.Forms.SendKeys]::SendWait("Hello World{ENTER}")

