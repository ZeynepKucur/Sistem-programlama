#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("calloc ile ayrılan bellekteki değer: %d\n", ptr[i]);
    }

    // free(ptr);
    return 0;
}
