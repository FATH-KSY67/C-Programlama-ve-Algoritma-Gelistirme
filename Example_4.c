#include <stdio.h>
#include <stdlib.h>

/* türkçe matematik ve fen bilimleri derslerinin not ortalamalarını hesaplayıp, 
genel not ortalamsını veren programın kodunu yazınız */

int main(int argc, char *argv[]) {
	
	int note1, note2, note3, note4, note5, note6, ort1, ort2, ort3, gort;

// matematik dersinin  sınav notalrını gir
	
	printf("Matematik 1. sınav notu :\n");
	scanf("%d",&note1);
	
	printf("Matematik 2. sınav notu :\n");
	scanf("%d",&note2);

// mateamtik dersinin not ortralmasının hesaplanması
	
	ort1 = (note1+note2)/2;

// türkçe dersinin sınav notlarını gir
	printf("Türkçe 1. sınav notu :\n");
	scanf("%d",&note3);
	
	printf("Türkçe 2. sınav notu :\n");
	scanf("%d",&note4);
	
// türkçe sınav notlarının ortalamsının hesaplanması 
	
	ort2= (note3+note4)/2;
	
// fen bilimleri sınav notlarını  gir

	printf("Fen bilimleri 1. sınav notu :\n");
	scanf("%d",&note5);
	
	printf("Fen bilimleri 2. sınav notu :\n");
	scanf("%d",&note6);

//	fen bilimleri dersinin sınav ortalamsının hesapla
	ort3= (note5+note6)/2;
	
// genel ortalamanın hesaplanması

	gort= (ort1+ort2+ort3)/3;
	
//derslerin ve genel ortalamanın ekrana yazdırılması

	printf("Matematik dersi not ortalaması: %d\n",ort1);
	
	printf("Türkçe dersi not ortalaması: %d\n", ort2);
	
	printf("Fen bilimleri not ortalamsı : %d\n",ort3);
	
	printf("genel not ortalaması : %d\n", gort);
	
	return 0;
}

											//*Mehmet Fatih AKSOY*
											
