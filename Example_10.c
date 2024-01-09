#include <stdio.h>
#include<stdlib.h>

int faktoryel(int x){
    int carpim=1 ;

    for(int i=1;i<=x;i++){
        carpim = carpim*i;
    }
    return carpim;
}

int main(){

    int x;

    printf("bir sayi değeri giriniz:");
    scanf("%d",&x);

    int faktoryel_sonuc = faktoryel(x);
    printf("girilen sayinin faktöryeli = %d",faktoryel_sonuc);
}
