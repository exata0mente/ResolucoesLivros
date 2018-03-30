/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 3 - Laços

  Exercício 15: Escreva um programa que imprima os caracteres da tabela ASCII de codigos 32 a 255. O programa deve imprimir cada caractere, seu codigo
  decimal e seu codigo hexadecimal.

  Resolucao comentada em https://youtu.be/JBQOSudKSA0
*/


#include<stdio.h>

int main(){

    int i;


    printf("Char\tDec\tHex\n");

    /*Usando laço for*/
    for(i = 32; i <= 255; i++)
        printf("%c\t%d\t%x\n", i, i, i);

    /*Usando laco while*/
    i = 32;
    while(i <= 255){
        printf("%c\t%d\t%x\n", i, i, i);
        i++;
    }

    /*Usando laço do-while*/
    i = 32
    do{
        printf("%c\t%d\t%x\n", i, i, i);
        i++;
    }
    while(i <= 255);

return 0;
}
