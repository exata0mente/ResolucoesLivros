/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 4 - Comandos de decisao

  Exercício 20. Escreva um programa que crie um numero aleatorio x por meio da funcao rand(). O programa deve solicitar um numero n ao usuario
  e compara-lo com x. Se n for menor do que x, o programa devera imprimir "Muito Pequeno" e solicitar novamente um numero para o usuario; se n for
  maior do que x, o programa devera imprimir "Muito Grande" e solicitar numero para o usuario. O programa terminara quando o usuario adivinhar o
  numero x, tomado aleatoriamente, e devera imprimir "Correto" e o numero de tentativas ate o acerto.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, n, cont;

    x = rand();
    printf("%d\n", x);

    printf("Programa de adivinhacao\n\n");

    cont = 1;
    do{
        printf("Digite um numero entre 0 e 100: ");
        scanf("%d", &n);

        if(n == x)
            printf("Correto! O numero aleatorio eh %d\nVoce acertou em %d tentativas", x, cont);
        else if(n > x)
            printf("Muito Grande\n");
        else
            printf("Muito Pequeno\n");

        cont++;

    }
    while(n != x);


return 0;
}
