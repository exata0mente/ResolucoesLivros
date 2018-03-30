/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercicio 20. Dois amigos jogam na loteria toda semana. Escreva um programa que solicite a quantia com que cada um
  participou e o valor do premio a ser rateado em partes diretamente proporcionais as quantias de cada um deles. O programa
  deve imprimir quanto cada um dos amigos recebera caso sejam ganhadores.

  Resolucao comentada em https://youtu.be/dL0sQtP2reQ

*/

/*
    prop_p1 = quant_p1 / (quant_p1 + quant_p2);
    prop_p2 = quant_p2 / (quant_p1 + quant_p2);
*/

#include<stdio.h>

int main(){

    float quant_p1, quant_p2, valor_premio, prop_p1, prop_p2;

    /*Entrada de dados*/
    printf("Digite a quantia do apostador 1: ");
    scanf("%f", &quant_p1);
    printf("Digite a quantia do apostador 2: ");
    scanf("%f", &quant_p2);
    printf("Digite o valor do premio: ");
    scanf("%f", &valor_premio);

    /*Processamento dos dados*/
    prop_p1 = quant_p1 / (quant_p1 + quant_p2);
    prop_p2 = quant_p2 / (quant_p1 + quant_p2);

    /*Saida dos dados*/
    printf("\nO apostador 1 ganhou: %.2f\nO apostador 2 ganhou: %.2f", valor_premio * prop_p1, valor_premio * prop_p2);


return 0;
}
