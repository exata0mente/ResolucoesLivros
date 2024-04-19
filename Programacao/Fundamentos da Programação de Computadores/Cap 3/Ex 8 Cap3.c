/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.*/

#include <stdio.h>

int main()
{
	
	float dep, taxa, rend, total;
	
	printf("Digite o deposito e taxa:");
	scanf("%f %f", &dep, &taxa);
	rend = dep * (taxa/100);
	total = dep + rend;
	
	printf("%.2f %.2f", rend, total);
	return 0;
}
