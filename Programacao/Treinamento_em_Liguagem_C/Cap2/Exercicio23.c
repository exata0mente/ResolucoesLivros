/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercicio 23. Uma empresa contrata um encador a R$ 20.00 por dia. Crie um programa que solicite o numero de dias trabalhados pelo
  encanador e imprima o valor liquido a ser pago sabendo que sao descontados 8% do imposto de renda.

  Resolucao comentada em https://youtu.be/HFckTyzC6n8

*/

#include <stdio.h>

int main(){

    const float valor_dia = 20.00, imp_renda = 0.08;
    int dia_trab;
    float valor_liq;

    /*Entrada dos dados*/
    printf("Informe a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d", &dia_trab);

    /*Processamento dos dados*/
    valor_liq = dia_trab * valor_dia;
    valor_liq -= valor_liq * imp_renda;

    /*Saida dos dados*/
    printf("\nO valor a ser pago ao encanador eh de: R$ %.2f", valor_liq);

return 0;
}
