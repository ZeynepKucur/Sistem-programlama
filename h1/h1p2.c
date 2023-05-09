#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("char bellek: %lu\n", sizeof(char));//char 1 byte
    printf("short bellek: %lu\n", sizeof(short));//short 2 byte
    printf("int belllek: %lu\n", sizeof(int));//int 4 byte
    printf("float belllek: %lu\n", sizeof(float));//int 4 byte
    printf("long bellek: %lu\n", sizeof(long));//double 8 byte
    printf("double bellek: %lu\n", sizeof(double));//double 8 byte
    printf("pointer bellek: %lu\n",sizeof(int *));//pointer 8byte
    return EXIT_SUCCESS; //belongs to stdlib.h header file
}