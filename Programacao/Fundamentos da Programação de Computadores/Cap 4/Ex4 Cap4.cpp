#include <stdio.h>

int main(){
	
	int num1, num2, num3;
	
	printf("escreva os 3 numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2 && num1 > num3) printf("o maior e %d", num1);
	else if (num2 > num3) printf("o maior e %d", num2);
	else printf("o maior e %d", num3);

	return 0;
}
