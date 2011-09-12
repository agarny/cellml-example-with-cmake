@ECHO OFF

TITLE Running CellML...

IF NOT EXIST build\CellML.exe GOTO Information

build\CellML

GOTO End

:Information

ECHO CellML must first be built before being run.
ECHO.

:End
