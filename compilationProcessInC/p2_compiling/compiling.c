/* 
The compilation stage in C uses an inbuilt compiler software to conver the intermediate .i file into an Assembly .s file.
*/
#include <stdio.h>
int main() {
    printf("Compiler compiles expanded (intermediate .i) source code to assembly source code.\n");
    printf("with this command .s file can be seen: gcc -S compilin.c -o compilin.s\n");
    return 0;
}