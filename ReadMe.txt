This is a very simple CellML program using CMake to build on Windows x86, Linux x86, Linux x64 and Mac OS X x64. On Linux, for example, all you need to do is as follows (it's the same on Mac OS X and similar on Windows):

user@machine:~/CellML$ ./makeproj
Making CellML...
-- The C compiler identification is GNU
-- The CXX compiler identification is GNU
-- Check for working C compiler: /usr/bin/gcc
-- Check for working C compiler: /usr/bin/gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/agarny/CellML/build
Scanning dependencies of target CellML
[100%] Building CXX object CMakeFiles/CellML.dir/src/main.cpp.o
Linking CXX executable CellML
[100%] Built target CellML
All done!
user@machine:~/CellML$ ./runproj
Running CellML...
Model's cmeta:id is beeler_reuter_1977_version04
All done!
user@machine:~/CellML$ ./cleanproj
Cleaning the CellML environment...
All done!
user@machine:~/CellML$ 