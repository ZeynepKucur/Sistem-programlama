#include<stdio.h>

int main()
{
    int var = 10;
    int *pointer;
    pointer = &var;
    printf("%d\n",&var);
    printf("%x\n",&var);
    printf("%x\n",pointer);
    printf("%d\n",&pointer);
    printf("%x\n",&pointer);


    int num;
    printf("Address of num (hexadecimal) is %p\n", (void *)&num);

int x=sizeof(var);
    printf("%d",x);
    return 0;
}