#include <stdio.h>

int main(){
	
	float n1, n2, mediap;
	
	printf("escreva o numero 1: ");
	scanf("%f", &n1);
	
	printf("escreva o numero 2: ");
	scanf("%f", &n2);
	
	mediap = (n1*2) + (n2*3);
		
	printf("media ponderada: %.1f", mediap/5);
	
	return 0;
}
