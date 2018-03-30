/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 5 - Funcoes

  Exercício 41: Gregoriana para juliana: dados dia, mes e ano de uma data gregoriana, escreva uma funcao que
  converta essa data para a data juliana correspondente. Utilize a seguinte formula:


   Data Juliana =  (1461 * (ano + 4800 + (mes - 14) / 12)) / 4 +
    (367 * (mes - 2 - 12 * ((mes - 14) / 12))) / 12 -
    (3 * ((ano + 4900 + (mes - 14) / 12) / 100)) / 4 +
    dia - 32075
    
    Resolução comentada em: https://www.youtube.com/watch?v=gFtNVvqZMSM
*/

#include <stdio.h>

int greg_juli(int, int, int);

int main(){

    int dia, mes, ano;
    int data_juliana;

    printf("Digite o dia correspondente no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    data_juliana = greg_juli(dia, mes, ano);

    printf("\nA data Juliana correspondente e': %d", data_juliana);

return 0;
}

int greg_juli(int dia_temp, int mes_temp, int ano_temp){

    int juliana;

    juliana = (1461 * (ano_temp + 4800 + (mes_temp - 14) / 12)) / 4;
    juliana += (367 * (mes_temp - 2 - 12 * ((mes_temp - 14) / 12))) / 12;
    juliana -= (3 * ((ano_temp + 4900 + (mes_temp - 14) / 12) / 100)) / 4;
    juliana += dia_temp - 32075;

return juliana;
}
