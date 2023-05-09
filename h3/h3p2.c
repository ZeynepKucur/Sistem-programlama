#include <stdio.h>
int main()
{
    int dizi[3] = {10, 20, 30};
    int *ptr;
    ptr = dizi;
    printf("%d\n", dizi);
    printf("%d\n", &dizi[0]);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}