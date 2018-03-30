/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 3 - Laços

  Exercício 17: Elabore um programa que solicite um numero inteiro ao usuario e crie um novo numero inteiro com os digitos
  em ordem inversa. Por exemplo, uma execucao do programa eh:

  Digite um numero inteiro:     5382
  Seu numero invertido eh:      2835

  5382 = 5000 + 300 + 80 + 2
  5000 = 5 * 1000 == 1000 = 10^3
   300 = 3 * 100  ==  100 = 10^2
    80 = 8 * 10   ==   10 = 10^1
     2 = 2 * 1    ==    1 = 10^0

    5000 / 10^3 = * 10^0 ==    5
     300 / 10^2 = * 10^1 ==   30
      80 / 10^1 = * 10^2 ==  800
       2 / 10^0 = * 10^3 == 2000
*/


#include<stdio.h>

int main(){

    int num, i, j, cont_algarismos, pot1, pot2;

    printf("Digite um numero inteiro:\t");
    scanf("%d", &num);

    i = 1;
    cont_algarismos = 0;

    /*Contar algarismos*/
    while(num > i){
        cont_algarismos++;
        i *= 10;
    }

    /*Primeira potencia*/
    for(i = 0, pot1 = 1; i < cont_algarismos; i++){
        for(j = cont_algarismos - i, pot2 = 1; j > 1)
        pot1 *= 10;
    }
    /*Teste de Mesa:
    i = 0; pot1 = 1
    i < cont_algarismos ? Sim; pot1 =    10; i = 1
    i < cont_algarismos ? Sim; pot1 =   100; i = 2;
    i < cont_algarismos ? Sim; pot1 =  1000; i = 3;
    i < cont_algarismos ? Sim; pot1 = 10000; i = 4;
    i < cont_algarismos ? Nao; */

return 0;
}
