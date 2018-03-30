/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 5 - Funçoes

  Exercício 38: Um numero primo eh qualquer inteiro positivo divisivel apenas por si proprio e por 1. Escreva uma funcao que
  receba um inteiro positivo e, se este numero for primo, retorne 1, caso contrario, 0.

  Resolução comentada em: https://www.youtube.com/watch?v=tjsegCBwds0
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int e_primo(int);

int main(){

    int num;

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    while(num <= 0);

    printf("%d%s", num, e_primo(num) ? " e' primo" : " nao e' primo");

return 0;
}

int e_primo(int num_teste){

    register int i, cont_div;

    cont_div = num_teste == 1 ? 1 : 2;

    for(i = 2; i <= num_teste / 2; i++){
        if(num_teste % i == 0){
            cont_div++;
            break;
        }
    }

return (cont_div == 2 ? TRUE : FALSE);
}
