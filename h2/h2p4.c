#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rakam;
    char name[1];
} Dizi;

int main() {
    Dizi eleman[10];

    for (int i = 0; i < 10; i++) {
        eleman[i].rakam = i;
        strcpy(eleman[i].name, "x");
    }

    for (int i = 0; i < 10; i++) {
        printf("eleman[%d].rakam = %d, eleman[%d].name = %s\n", i, eleman[i].rakam, i, eleman[i].name);
    }

    return 0;
}
