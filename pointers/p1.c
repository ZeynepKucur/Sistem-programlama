#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 42;
    int *p;
    p = &num;

    printf("The memory address of num is: %p\n", &num);
    printf("The memory address of p is: %p\n", p);
    printf("The value of num is: %d\n", *p);
    printf("The value of num is: %d\n", num);
}
