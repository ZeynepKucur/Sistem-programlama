#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 42;
    int *p;
    int **q;

    p = &x;
    q = &p;


    printf("The value of x is: %d\n", x);
    printf("The value of *p is: %d\n", *p);
    printf("The value of **q is: %d\n", **q);
    printf("The value of &x is: %d\n", &x);
    printf("The value of p is:%d\n", p);
    printf("The value of *q is:%d\n", *q);
}
