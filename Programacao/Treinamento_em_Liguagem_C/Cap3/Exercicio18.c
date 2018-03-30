/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 3 - Laços

  Exercício 18: Escreva um programa que solicite um numero entre 3 e 18 e calcule a propabilidade que esse numero tem de sair ao se jogar tres dados
  ao mesmo tempo. A probabilidade e calculada por meio da seguinte formula:

  P = (n1 / n2) * 100.0

  em que n1 eh o numero no qual a soma dos dados eh igual ao numero de dado pelo usuario, e n2 eh o numero total de casos possiveis. Por exemplo, se o
  numero inserido for 6, o programa imprimira:

  "A probabilidade de sair 6 e de 4.63%"

  Resolução comentada em: https://youtu.be/LBFIyIGP-1c

*/


#include<stdio.h>

int main(){

    const int n2 = 216;
    int soma_num, i, j, k, n1;
    float prob;

    /*Entrada dos dados*/
    do{
        printf("Digite a soma dos dados: ");
        scanf("%d", &soma_num);
    }
    while(soma_num < 3 || soma_num > 18);

    /*Processamento dos dados*/

    n1 = 0;
    for(i = 1; i <= 6; i++){
        for(j = 1; j <= 6; j++){
            for(k = 1; k <= 6; k++){
                n1 = i + j + k == soma_num ? n1 + 1 : n1;
            }
        }
    }

    prob = ((float)n1 / n2) * 100.0;

    /*Saida dos dados*/

    printf("\nA probabilidade de sair %d e de %.2f%%", soma_num, prob);

return 0;
}
