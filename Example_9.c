#include <stdio.h>
#include<stdlib.h>

int seriToplama(int x){
    int sum=0 ;

    for(int i=0;i<x;i++){
        sum = sum +i;
    }
    return sum;
}

int main(){

    int x;

    printf("bir sayı değeri giriniz:");
    scanf("%d",&x);

    int seriToplam = seriToplama(x);
    printf("girilen sayıya kadarki tam sayıların toplamı = %d",seriToplam);
}
