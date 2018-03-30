/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 3 - Laços

  Exercício 20: A sequencia de numeros de Fibonacci eh a seguinte: os dois primeiros termos tem o valor 1 e cada termo seguinte eh igual a soma dos dois
  anteriores.

  1, 1, 2, 3, 5, 8, 13, 21, ...

  Escreva um programa que solicite ao usuario o numero do termo da sequencia de Fibonacci e calcule o valor desse termo. Por exemplo, se o numero fornecido
  pelo usuario for 7, o programa devera encontrar e imprimir o valor 13

  Resolução comentada em: https://youtu.be/a_RIsWmaLRo

  a b   fib
  0 1   1
  1 1   2
  1 2   3
  2 3   5
*/


#include<stdio.h>

int main(){

    int termo, i, a, b, fibonacci;

    printf("Digite o termo que deseja da sequencia de Fibonacci: ");
    scanf("%d", &termo);

    printf("1");
    a = 0;
    b = 1;

    for(i = 1; i < termo; i++){
        fibonacci = a + b;
        a = b;
        b = fibonacci;
        printf(", %d", fibonacci);
    }


return 0;
}
