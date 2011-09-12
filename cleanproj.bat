@ECHO OFF

TITLE Cleaning the CellML environment...

FOR /D %%I IN (build\*.*) DO RMDIR /S /Q "%%I"
FOR    %%I IN (build\*.*) DO DEL /Q "%%I"
