/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 5 - Funcoes

  Exercício 40: Escreva uma funcao que receba o ano como argumento e retorne 1 se for um
  ano bissexto e 0 se nao for. Um ano e' bissexto se for divisivel por 4, mas nao por 100.
  Um ano tambem e' bissexto se for divisivel por 400.
  
  Resolução comentada em: https://www.youtube.com/watch?v=V8jurFYZIh0

*/

#include <stdio.h>

unsigned int e_bissexto(int);

int main(){

    int ano;

    printf("Digite um ano no formato aaaa: ");
    scanf("%4d", &ano);
    printf("%d%s", ano, e_bissexto(ano) ? " e' bissexto" : " nao e' bissexto");

return 0;
}


unsigned int e_bissexto(int ano_teste){

    return ((ano_teste % 4 == 0 && ano_teste % 100 != 0) || (ano_teste % 400 == 0));
}
