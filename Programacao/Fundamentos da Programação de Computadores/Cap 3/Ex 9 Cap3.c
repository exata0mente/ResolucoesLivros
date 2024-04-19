/*Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.*/
#include <stdio.h>

int main()
{
	
	float base, altura, area;
	
	printf("Digite a base e altura:");
	scanf("%f %f", &base, &altura);
	area = (base * altura)/2;
	
	printf("%.2f", area);
	return 0;
}

