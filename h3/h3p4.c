#include <stdio.h>
#include <stdlib.h>

void arttir(int *a){
    *a = *a + 1;
    printf("*a=%d\n", *a);
}

int main(){
    int a = 10;
    arttir(&a);
    printf("a: %d\n",a);
    return 0;
}