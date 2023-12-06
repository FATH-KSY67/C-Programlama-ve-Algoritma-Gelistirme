#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int kenar,h;
	
	printf("Üçgenin kenar uzunluğu ve yüksekliğini giriniz:");
	scanf("%d %d",&kenar,&h);
	
	double alan= (kenar*h)/2.0;
	printf("Üçgenin Alanı : %.2lf",alan);
	return 0;
}