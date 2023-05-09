#include <stdio.h>

typedef unsigned long UL;

int main(){
    int i =10;
    int *p;
    p= &i;
    printf("%lx\n",(UL)p); /*The "%lx" format specifier is used to format the value as a hexadecimal long integer (unsigned long).
    The (UL)p expression is used to explicitly cast the pointer p to the type UL (unsigned long) before printing.*/
    return 0;
}