/*Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2*/
#include <stdio.h>

int main()
{
	
	float area, raio;
	
	printf("Digite o raio:");
	scanf("%f", &raio);
	area = 3.1415 * (raio*raio);
	
	printf("%.2f", area);
	return 0;
}

