/*Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.*/

#include <stdio.h>

int main()
{
	
	float salario, alteracao;
	
	scanf("%f", &salario);
	alteracao = salario/100;
	salario = salario - (alteracao * 10);
	salario = salario + 50;
	
	printf("R$ %.2f", salario);
	return 0;
}
