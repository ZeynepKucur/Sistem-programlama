//Dinamik bellek yönetimi (Dynamic Memory Allocation)
//malloc
//calloc
//realloc
//free
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(sizeof(int)); //heap
    //Yukarıdaki kod, int veri türünden alan ayırır ve ptr adlı işaretçiye atanır.
    *ptr=100;
    printf("ptr gösterdiği adres: %d\n ",ptr);
    printf("ptr değer: %d\n",*ptr);
    free(ptr); //free yaptıktan sonra aynı adresi yeni malloc için kullanıyor.
    ptr = (int *)malloc(sizeof(int));
    *ptr = 200;
    printf("ptr gösterdiği adres: %d\n ",ptr);
    printf("ptr değer: %d\n",*ptr);
    return 0;
}