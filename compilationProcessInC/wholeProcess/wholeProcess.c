/*
The compilation process starts with pre-processing. .c to .i
The pre-processor takes the source code and expands it as per the pre-processor directives.
(-Comments removal,
-Macros (macros are some constant values or expression defined using the #define directives) expansion,
-File inclusion (using #include directive),
-Conditional compilation (using #ifdef, #ifndef, #if, #else, #elif, #endif directives)

After the pre-processing phase, the modified source code, which includes the expanded macros and included header files, 
is passed on to the compiler for further compilation into assembly code, .i to .s
then the assembly code is passed on to the assembler for further compilation into object code, .s to .o,
then object code is passed on to the linker for further compilation into executable code, .o to .exe,
then with loader executable code is loaded in CPU and executed by loader program.
Loader is responsible for loading the executable file into memory.
It allocates memory for the program, resolves references to shared libraries, and prepares the program for execution.
Execution: Once the program is loaded into memory, the CPU executes the machine code instructions one by one.
*/

/*Files of the compilation process steps can be seen via the following command:
 gcc -Wall -save-temps wholeProcess.c -o wholeProcess
this command generates all the files of the compilation process steps. (.i, .s, .o, .exe)
*/
#include <stdio.h>
int main() {
    printf("The compilation process starts with pre-processing. .c to .i\n"
           "then compiler compiles intermediate source code to assembly source code, .i to .s\n"
           "then the assembly code is passed on to the assembler for further compilation into object code, .s to .o,\n"
           "then object code is passed on to the linker for further compilation into executable code, .o to .exe,\n"
           "then with loader executable code is loaded in CPU and executed by loader program.\n");

    return 0;
}
