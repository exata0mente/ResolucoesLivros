/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 4 - Comandos de decisao

  Exercício 19. Escreva um programa que solicite ao usuario tres numeros inteiros a, b e c, em que a seja maior do que 1. Seu programa deve somar
  todos os inteiros entre b e c que sejam divisiveis por a;
*/


#include<stdio.h>

int main(){

    int a, b, c, maior, menor, i, divs;

    /*Entrada dos dados*/
    do{ /*Condicao para a ser maior do que 1*/
        printf("Digite o valor de a que seja maior do que 1: ");
        scanf("%d", &a);
    }
    while(a < 1);

    printf("Digite o valor de b e c respectivamente: ");
    scanf("%d%d", &b, &c);


    /*Processamento dos dados*/
    if(b > c){/*Comparacao do maior b ou c*/
        maior = b;
        menor = c;
    }
    else{
        maior = c;
        menor = b;
    }

    divs = 0;

    for(i = menor + 1; i < maior; i++)/*Verificar o divisivel entre b e c*/
        if(i % a == 0)
            divs += i;

    /*Saida dos dados*/
    printf("A soma eh: %d", divs);


return 0;
}
