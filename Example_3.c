#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a, b,c;
	
	printf("Küpün bir kenar uzunluğunu giriniz:");
	scanf("%d",&a);
	
	b= a*a*a;
	
	printf("küpün alanı : %d",b);
	
	c= (a*a)*6;
	
	printf("küpün yüzey alanı: %d",c);
	
	
	return 0;
}
