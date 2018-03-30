/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercício 19: Em um cercado, ha varios patos e coelhos. Escreva um programa que solicite ao usuario o total de cabecas e o total de pes,
  e determine quantos patos e quantos coelhos se encontram nesse cercado.

  Resolucao comentada em https://youtu.be/jFjKc-MRZLY

*/

/*  pato = -(pes - cabecas * 4) / 2;

    coelho = cabecas - pato; */

#include<stdio.h>

int main(){

    int cabecas, pes, pato, coelho;

    /*Entrada de dados*/
    printf("Digite a quantidade total de cabecas: ");
    scanf("%d", &cabecas);
    printf("\nDigite a quantidade total de pes: ");
    scanf("%d", &pes);

    /*Processamento de dados*/
    pato = -(pes - cabecas * 4)/2;
    coelho = cabecas - pato;

    /*Saida de dados*/
    printf("\nTotal de Coelhos: %d\tTotal de Patos: %d", coelho, pato);

return 0;
}

