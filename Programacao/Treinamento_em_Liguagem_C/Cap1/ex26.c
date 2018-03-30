/*Treinamento em Linguagem C - Victorine Viviane Mizrahi
  Capítulo 1 - Conceitos Basicos
  Exercício 26: Escreva um programa que tenha a seguinte saida:

  Treinamento em Programacao.
  Linguagem C.

  a) com uma unica instrucao de impressao
  b) com tres instrucoes de impressao
  c) dentro de uma moldura


  */

#include<stdio.h>

int main(){

    printf("Treinamento em Programacao.\nLinguagem C");/*a)*/

    printf("\n\n"); /* Separar o a) do b) */

    printf("Treinamento em "); /*b)*/
    printf("Programacao.");
    printf("\nLinguagem C.");

    printf("\n\n"); /* Separar o b) do c) */

	printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\t\xBA Linguagem em Programacao \xBA");
	printf("\n\t\xBA Linguagem C              \xBA");
	printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");

return 0;
}
