#include<stdio.h>
#include<stdlib.h>

int bolme(int a, int b, int *kalan){
    int bolum = a/b;
    *kalan = a%b;
    return bolum;
}

int main(){
    int a = 13, b = 4;
    int kalan;
    int bolum = bolme(a,b,&kalan);
    printf("Bolum: %d Kalan: %d\n",bolum,kalan);
    return 0;
}