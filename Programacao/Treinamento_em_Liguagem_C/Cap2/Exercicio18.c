/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercício 18: Escreva um programa que solicite ao usuario a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
  de um cilindro circular eh calculado por meio da seguinte formula:

  Vol = 3.141592 * raio * raio * altura

  Resolucao comentada - https://youtu.be/CNUTfYDVFeI

*/

#include<stdio.h>

int main(){

    float vol, raio, altura;
    const float pi = 3.141592;

    /*Entrada de dados*/
    printf("Digite o valor de raio e altura: ");
    scanf("%f%f", &raio, &altura);

    /*Processamento dos dados*/
    vol = pi * raio * raio * altura;

    /*Saida dos dados*/
    printf("Um cilindro de raio = %.2f e altura = %.2f tem o volume de %.4f u.v", raio, altura, vol);

return 0;
}
