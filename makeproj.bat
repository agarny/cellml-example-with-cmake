@ECHO OFF

TITLE Making CellML...

ECHO.
ECHO -------------
ECHO Making CellML
ECHO -------------
ECHO.

CD build

cmake -G "MinGW Makefiles" ..
mingw32-make

CD ..
