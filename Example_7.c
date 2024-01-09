#include<stdio.h>

int main(){
	int i=1;
	
	while(i<=100){
		if(i%2==0){
			printf("çift %d",i);
		}
		else{
			printf("tek %d", i);
		}
		i++;
	}
	return 0;
}
