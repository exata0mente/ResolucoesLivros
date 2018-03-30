/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 4 - Comandos de decisao

  Exercício 18: Escreva um programa que encontre o menor inteiro positivo n que satisfaca as seguintes condicoes:

  n / 3 = x inteiros e resto 2
  n / 5 = y inteiros e resto 3
  n / 7 = z inteiros e resto 4

  Resolução comentada em: https://youtu.be/_ap5JajQlhs
*/


#include<stdio.h>

int main(){

    int i;

    for(i = 0; ; i++)
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 4)
            break;

    printf("%d %% 3 = %d, %d %% 5 = %d, %d %% 7 = %d", i, i % 3, i, i % 5, i, i % 7);


return 0;
}
