#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*Kullanýcýdan alýnan n sayýsýna kadar olan asal sayilari bulan program*/
	int num,i,indicator,num2;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		indicator=1;
		num2=2;
		while((num2<i)&& indicator==1){
			if((i%num2)==0){
				indicator=0;
			}
			num2++;
		}
		if(indicator==1){
			printf("%d\n",i);
		}
	}
	
	return 0;
}