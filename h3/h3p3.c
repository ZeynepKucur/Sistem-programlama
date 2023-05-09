#include<stdio.h>
int main(){
    char j[5] = {'A','B','C'};
    char *ptr;
    ptr = &j;
    char **ptr2;
    ptr2 = &ptr;
    //printf("%c\n",j[0]);
    //printf("%d\n",ptr);
    //ptr++;
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",ptr2);
    return 0;
}