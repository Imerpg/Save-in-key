:: Instalateur de fichier
:: Code :
@echo off
title pc-cle
mode con cols=80 lines=16
cls
:: Chercher le nom d'emplacement (Où est la clé ou le disque)
set emplacement=""

:: Copie le fichier final
xcopy "" "%dirf%" /e /i

pause > nul