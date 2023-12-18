$content = Get-Content 'C:\Users\NO\Desktop\script.ps1' -Raw
Write-Host "Script:"
Write-Host $content
$encoded = [Convert]::ToBase64String([Text.Encoding]::Unicode.GetBytes($content))
Write-Host "Base64:"
Write-Host $encoded
