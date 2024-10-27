@echo off
echo Installation de Kirébos Networks en cours...

:: Vérifier et installer Qt et OpenSSL
REM Placeholder pour Qt et OpenSSL installations

:: Copier les fichiers vers le dossier d'installation
xcopy /E /I . "C:\Program Files\Kirebos_Networks"

:: Créer un raccourci sur le bureau
set SHORTCUT="%userprofile%\Desktop\Kirebos_Networks.lnk"
set TARGET="C:\Program Files\Kirebos_Networks\run_kirebos.bat"

powershell "$s=(New-Object -COM WScript.Shell).CreateShortcut(%SHORTCUT%);$s.TargetPath=%TARGET%;$s.Save()"

echo Installation terminée. L'icône est disponible sur le bureau.
pause
