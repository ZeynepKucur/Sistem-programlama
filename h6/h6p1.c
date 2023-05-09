#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *p = (int *)malloc(sizeof(int) * n);
    printf("Dizinin ilk adresi: %d\n", p);
    for (int i = 0; i < n; i++)
    {
        *(p + i) = i + 1;
        printf("p[%d]=%d,i=%d, *(p+%d) = %d\n",i,p[i],i,i,*(p+i));
    }
    printf("%d\n", p[4]);
    printf("\n");
    int *q = (int *)realloc(p, sizeof(int) * n * 2);
    printf("Dizinin ikinci adresi: %d\n", q);
    printf("%d\n", p[4]);
    printf("%d\n", q[4]);
    return 0;
}