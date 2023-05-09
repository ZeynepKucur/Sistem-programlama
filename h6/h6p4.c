#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    int number = 42;
    int *pointer = &number; // number değişkeninin adresini 'pointer' adlı işaretçiye atar.

    uintptr_t pointer_value_as_uintptr = (uintptr_t)pointer; // pointer'i uintptr_t türüne dönüştürür.

    printf("Pointer adresi: 0x%016" PRIxPTR "\n", pointer_value_as_uintptr);

    int numberr = 42;
    
    uintptr_t address_of_numberr = (uintptr_t)&numberr; // number değişkeninin adresini uintptr_t türüne dönüştürür.

    printf("Integer değişkenin adresi: 0x%016" PRIxPTR "\n", address_of_numberr);

    return 0;
}
