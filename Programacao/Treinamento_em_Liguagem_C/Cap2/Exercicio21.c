/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 2 - Operadores

  Exercicio 21. A importancia de R$ 780.000,00 sera dividia entre os tres primeiros colocados de um concurso,
  em partes diretamente proporcionais aos pontos conseguidos por eles. Construa um programa que solicite os pontos
  dos tres primeiros colocados e imprima a importancia que cabera a cada um.

  Resolucao comentada em: https://youtu.be/hwPg10qQ-XY
*/

#include<stdio.h>

int main(){

    int ponto_p1, ponto_p2, ponto_p3, total_pontos;
    float prop_p1, prop_p2, prop_p3;
    const float premio = 780000.00;

    /*Entrada de dados*/
    printf("Digite a pontuacao do primeiro colocado: ");
    scanf("%d", &ponto_p1);
    printf("Digite a pontuacao do segundo colocado: ");
    scanf("%d", &ponto_p2);
    printf("Digite a pontuacao do terceiro colocado: ");
    scanf("%d", &ponto_p3);

    /*Processamento dos dados*/
    total_pontos = ponto_p1 + ponto_p2 + ponto_p3;

    prop_p1 = (float)ponto_p1 / total_pontos;
    prop_p2 = (float)ponto_p2 / total_pontos;
    prop_p3 = (float)ponto_p3 / total_pontos;

    /*Saida dos dados*/

    printf("Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f\n", prop_p1 * premio, prop_p2 * premio, prop_p3 * premio);

return 0;
}
