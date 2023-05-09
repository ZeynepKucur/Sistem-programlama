#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int ogrNo;
    double not;
}ogrenci;

int main(){
    ogrenci ogr1,ogr2;
    ogr1.ogrNo = 10;
    ogr1.not = 10.25;
    ogr2.ogrNo = 20;
    ogr2.not = 20.25;
    printf("No:%d \nNot:%0.2lf\n", ogr1.ogrNo, ogr1.not);
    printf("No:%d \nNot:%0.2lf\n", ogr2.ogrNo, ogr2.not);

    return EXIT_SUCCESS;
}