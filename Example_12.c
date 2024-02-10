#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,g,k;
    int sayi[10]={12,213,334,425,563,67,87,839,11,10};

    for(g=1;g<10;g++){
        for(i=0;i<10 - 1;i++){
            if(sayi[i]>sayi[i+1])
            {
                k= sayi[i];
                sayi[i]=sayi[i+1];
                sayi[i+1]=k;
            }
        }
    }

    printf("\n\nKüçükten Büyüğe sıralamsı: ");
    for(i=0;i<10;i++){
        printf("\n%d\t",sayi[i]);
         }
}
