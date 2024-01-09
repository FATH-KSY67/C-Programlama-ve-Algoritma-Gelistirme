#include<stdio.h>
#include<stdlib.h>

// kullanıcıdan 5 sayı değeri alır ve bu değerleri dziye kaydederek bu dizinin değerelerinin ortalamasını hesapla
// see Dr.DarkLord

int main(){
    int arr[5],i;
    double sum =0;
    for(i=0;i<5;i++){
        printf("%d. sayiyi giriniz: \n");
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("girilen tam sayilarin ortalamasi: %2lf",sum/5);
    return 0;
}
