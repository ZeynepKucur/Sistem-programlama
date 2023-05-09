#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Dizi boyutu: ");
    scanf("%d", &n);
    int *p = (int *)malloc(sizeof(int) * n);
    printf("Dizinin ilk adresi: %d\n", p);

    for (int i = 0; i < n; i++)
    {
        // p[i] = i + 1;
        // printf("%d\t", p[i]);
        *(p + i) = i + 1;
        printf("%d\t",*(p+i));
    }
    printf("\n");
    int *q = (int *)realloc(p,sizeof(int)*n*2); //Bellek boyutunun değiştirilmesi.
    printf("Dizinin ikinci adresi: %d\n",q);
    return 0;
}