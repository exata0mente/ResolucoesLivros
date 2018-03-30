/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 3 - Laços

  Exercício 19: O numero de combinacoes de n objetos diferentes, em que r objetos sao escolhidos de cada vez, eh dado pela seguinte formula:

  nCr = fatorial de n / (fatorial de r * fatorial de (n-r)) ==> nCr = n! / (r! * (n-r)!).

  Escreva um programa que calcule o numero de combinacoes de n objetos tomados r de cada vez. Os valores n e r devem ser solicitados ao usuario.

  Resolução comentada em: https://youtu.be/sK4VQ5V9-tM

*/


#include<stdio.h>

int main(){

    int n, r, i;
    unsigned int fatn, fatr, fatn_r, nCr;

    printf("Digite a quantidade de objetos: ");
    scanf("%d", &n);

    printf("Digite em quantos estes devem ser agrupados: ");
    scanf("%d", &r);

    /*6! = 6*5*4*3*2*1 */

    i = n;
    fatn = 1;

    /*Fatorial de n*/
    while(i > 1){
        fatn *= i;
        i--;
    }

    /*Fatorial de r*/
    i = r;
    fatr = 1;

    while(i > 1){
        fatr *= i;
        i--;
    }

    /*Fatorial de n-r*/
    i = n - r;
    fatn_r = 1;

    while(i > 1){
        fatn_r *= i;
        i--;
    }

    /*Calculo da combinaçao simples*/
    nCr = fatn / (fatr * fatn_r);

    printf("\nO numero de combinacoes possiveis eh: %u", nCr);

return 0;
}
