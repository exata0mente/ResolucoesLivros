#include <stdio.h>

int main(){
	
	float n1, n2;
	
	printf("escreva o numero 1: ");
	scanf("%f", &n1);
	
	printf("escreva o numero 2: ");
	scanf("%f", &n2);
		
	printf("o resultado da divisao do numero 1 pelo numero 2 e: %.1f", n1/n2);
	
	return 0;
}
