/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercício 16: Escreva uma expressao logica que resulte 1 se o ano for bissexto e 0 se nao for.
  Um ano eh bissexto se for divisivel por 4, mas nao por 100. Um ano tambem eh bissexto se for dividido
  por 400

  Resolucao comentada em https://www.youtube.com/watch?v=kUkp33aWO6s */

#include<stdio.h>

int main(){

    int ano;

    /*Entrada dos dados*/

    printf("Digite o ano para saber se eh bissexto: ");
    scanf("%d", &ano);

    /*Saida dos dados*/

    printf("\n%d", (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0));


return 0;
}
