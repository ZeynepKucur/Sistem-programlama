#include <stdio.h>

int main(){
    int i= 1025;
    int *p1;
    char *p2;
    p1 = &i;
    p2 = (char*) p1;
    //p++
    printf("%d\n",*p2);
    printf("%d\n",p2);
    printf("%d\n",p1);
    return 0;
}