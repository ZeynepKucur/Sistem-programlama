#include<stdio.h>

int toplam(int dizi[]){
    int top = 0;
    int boyut = sizeof(dizi)/sizeof(int);
    printf("size of dizi:%d\n",sizeof(dizi)); //printing the size of the pointer dizi, not the size of the array 
    printf("Boyut: %d\n",boyut);
    for (int i=0;i<boyut;i++){
  printf("%d\n", dizi[i]);
        top+=dizi[i]; // top = top + dizi[i];
    }
    
    return top;
}

int main(){
    int dizi[] = {1,2,3,4,5};
    printf("Toplam: %d\n",toplam(dizi));
    return 0;
}