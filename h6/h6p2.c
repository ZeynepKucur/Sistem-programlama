#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 10;
    int *p = (int *)malloc(sizeof(int) * n);
    printf("Dizinin ilk adresi: %d\n", p);
    for (int i = 0; i < n; i++)
    {
        *(p + i) = i + 1;
    }
    printf("%d\n", p[4]);
    printf("\n");
    int *q = (int *)realloc(NULL, sizeof(int) * n * 2);
    /*When realloc is called with a NULL pointer, it behaves like malloc and tries to allocate a new memory block of the specified size.
    If successful, it returns a pointer to the newly allocated memory block; otherwise, it returns a NULL pointer.
*/
    printf("%d\n", p[4]);
    return 0;
}