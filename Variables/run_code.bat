@echo off

REM Create `O` folder
mkdir O

REM Create `EXE` folder
mkdir EXE

REM Compile my CPP file
g++ -c "External Variables in CPP/external_variables_in_c_plus_plus.cpp" -o O/class.o

REM Compile the wrapper
g++ -c Wrapper/c_to_cpp.cpp -o O/wrapper.o

REM Compile main file
gcc -c variables.c -o O/main.o

REM Compile main
g++ O/main.o O/class.o O/wrapper.o -o EXE/main.exe

REM Run the main
.\EXE\main.exe
