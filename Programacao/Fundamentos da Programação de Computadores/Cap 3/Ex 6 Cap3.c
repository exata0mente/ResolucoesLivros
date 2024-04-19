/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam-
bém sobre o salário base.*/

#include <stdio.h>

int main()
{
	float salario, alteracao;
	
	scanf("%f", &salario);
	alteracao = salario/100;
	salario = salario + (alteracao * 5);
	salario = salario - (alteracao * 7);
	
	printf("R$ %.2f", salario);
	return 0;
}
