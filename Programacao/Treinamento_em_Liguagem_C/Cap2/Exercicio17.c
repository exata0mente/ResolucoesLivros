/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercício 17: Desenvolva um programa que solicite ao usuario o ano e imprima "Ano Bissexto"  ou "Ano Nao-Bissexto"
  conforme o valor da expressao do exercicio 16. Utilize o operador condicional (ternario)

  Resolucao comentada: https://youtu.be/89EN5Gh30CI
*/

#include<stdio.h>

int main(){

    int ano;

    /*Entrada dos dados*/
    printf("Digite um ano para dizermos se eh bissexto: ");
    scanf("%d", &ano);

    /*Saida de dados*/
    printf("\n%s", (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) ? "Ano Bissexto" : "Ano Nao-Bissexto");

    /* Operador condicional ternario -> exp1 ? exp2 : exp3 */

    return 0;
}
