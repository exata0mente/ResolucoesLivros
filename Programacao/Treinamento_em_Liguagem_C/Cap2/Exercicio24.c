/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercicio 24. (Dificil) Faca um programa que solicite um caractere do teclado por meio da funcao getch(). Se for uma letra minuscula, imprima-a em
  maisculo, caso contrario, imprima o proprio caractere. Use uma expressao condicional.

  Resolucao comentada em https://youtu.be/RDLFenjjwtg

*/

#include<stdio.h>

int main(){

    char letra;

    /*Entrada dos dados*/
    letra = getchar();

    /*Processamento dos dados*/
    letra = letra >= 'a' && letra <= 'z' ? letra - 32 : letra;

    /*Saida dos dados*/
    putchar(letra);

return 0;
}
