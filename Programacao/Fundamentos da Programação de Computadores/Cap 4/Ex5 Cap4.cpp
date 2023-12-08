#include <stdio.h>

int main(){
	
	float num1, num2;
	int p;
	
	printf("escreva os 2 numeros: ");
	scanf("%f %f", &num1, &num2);
	
	printf("1 | Media\n2 | Diferenca do maior pelo menor\n3 | Produto\n4 | Divisao do primeiro pelo segundo\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &p);
	
	switch (p){
		
		case 1:
			printf("a media e: %.1f", (num1 + num2) / 2);
		break;
		
		case 2:
			if(num1 > num2) printf("%.1f", num1 - num2);
			else printf("%.1f", num2 - num1);
		break;
		
		case 3:
			printf("%.1f", num1*num2);
		break;
		
		case 4:
			if(num2 != 0) printf("%.1f", num1 / num2);
			else printf("erro");
		break;
		
		default:
			printf("erro");
		break;
	}
	
	return 0;
}
