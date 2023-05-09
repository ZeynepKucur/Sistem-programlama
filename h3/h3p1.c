#include <stdio.h>
int main()
{
    int i, j;
    i = 10;
    j = 20;
    int *ptr;
    ptr = &i;
    printf("i degeri: %d\n", i);
    printf("i adresi: %d\n", &i);
    printf("j adresi: %d\n", &j);
    printf("i adresi: %d\n", ptr);
    ptr++;
    printf("Sonraki adres: %d\n", ptr);
    printf("pointer ile degere ulasma: %d\n", *ptr); // dereferencing
    return 0;
}
