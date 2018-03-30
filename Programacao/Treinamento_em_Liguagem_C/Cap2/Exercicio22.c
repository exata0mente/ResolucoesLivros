/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercicio 22. Sabendo que o latao e obtido fundindo-se sete partes de cobre com tres partes de zinco, faca um programa que
  solicite quantos quilos de latao se quer produzir e imprima quantos quilos de cobre e zinco sao necessarios.

  Resolucao comentada em https://youtu.be/ozl6vQ9NYqg
*/

#include <stdio.h>

int main(){

    float quilos_latao;

    printf("\nInforme quantos quilos de latao deseja: ");
    scanf("%f", &quilos_latao);

    printf("\nPara %.3f latao, sera necessario:\n%.3f quilos de cobre.\n%.3f quilos de zinco.", quilos_latao, quilos_latao * 0.70, quilos_latao * 0.30);

return 0;
}
