#include <stdio.h>

int main(){
	
	float preco, npreco;
	
	printf("escreva o preco do produto: ");
	scanf("%f", &preco);
	
	npreco = preco*0.9;
		
	printf("novo preco com 10%% de desconto e: R$%.2f", npreco);
	
	return 0;
}
