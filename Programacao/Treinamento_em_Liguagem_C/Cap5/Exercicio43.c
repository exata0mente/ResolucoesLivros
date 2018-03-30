/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 5 - Funcoes

  Exercício 43: Juliana para gregoriana: Escreva uma funcao que converta uma data juliana em data gregoriana.
  A funcao devera encontrar o dia, mes e ano correspondente a data juliana que ela recebe como argumento e
  retornar um numero do tipo long no formato aaaammdd. O algoritmo e' o seguinte:

  B = DataJuliana + 68569
  N = (4 * B) / 146097
  B = B - ((146097 * N + 3) / 4)
  K = 4000 * (B + 1) / 1461001
  B = B - (1461 * K) / 4 + 31
  J = (80 * B) / 2447
  Dia = B - (2447 * J) / 80
  B = (J / 11)
  Mes = J + 2 - (12 * B)
  Ano = 100 * (N - 49) + K + B

  17/01/2016 - 2457405
  15/04/1825 - 2387732
  01/01/2001 - 2451911
  
  Resolução comentada em: https://www.youtube.com/watch?v=ga_eSwyJ_wc

*/

#include <stdio.h>

long juli_greg(int);

int main(){

    int data_juliana;
    long data_gregoriana;

    printf("Digite uma data Juliana: ");
    scanf("%d", &data_juliana);

    data_gregoriana = juli_greg(data_juliana);
    printf("\nA data Gregoriana correspondente e': %ld", data_gregoriana);

return 0;
}

long juli_greg(int juliana){

    int B, N, K, Dia, J, Mes, Ano, gregoriana;

    B = juliana + 68569;
    N = (4 * B) / 146097;
    B = B - ((146097 * N + 3) / 4);
    K = 4000 * (B + 1) / 1461001;
    B = B - (1461 * K) / 4 + 31;
    J = (80 * B) / 2447;
    Dia = B - (2447 * J) / 80;
    B = (J / 11);
    Mes = J + 2 - (12 * B);
    Ano = 100 * (N - 49) + K + B;

    gregoriana = Ano * 10000 + Mes * 100 + Dia;

return gregoriana;
}
