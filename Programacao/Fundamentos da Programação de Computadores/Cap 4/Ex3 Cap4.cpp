#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("escreva os 2 numeros: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 < num2) printf("o menor e %d", num1);
	else printf("o menor e %d", num2);

	return 0;
}
