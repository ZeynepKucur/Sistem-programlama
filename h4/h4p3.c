#include<stdio.h>
int main(){
    int *p;
    int i = 15;
    p = &i;
    *p = 7;
    printf("%d\n",i); //7
    int **q;
    q = &p;//7?
    printf("i'nin adresi:%d\n",&i);
    printf("%d\n",*q); //i'nin adresi
    printf("%d\n",*(*q)); // p'nin adres ettiği hücredeki bilgi
    return 0;
}