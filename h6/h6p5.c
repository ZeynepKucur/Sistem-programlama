#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    char c;
    int i;
    int *p;

    printf("Address of char: %d\n", &c);
    printf("Address of int: %d\n", &i);
    printf("Address of pointer: %d\n", &p);

    printf("Address of char: %p\n", (void *)&c);
    printf("Address of int: %p\n", (void *)&i);
    printf("Address of pointer: %p\n", (void *)&p);

   printf("Address of char: 0x%016" PRIxPTR "\n", (uintptr_t)&c);
    printf("Address of int: 0x%016" PRIxPTR "\n", (uintptr_t)&i);
    printf("Address of pointer: 0x%016" PRIxPTR "\n", (uintptr_t)&p);

    return 0;
}