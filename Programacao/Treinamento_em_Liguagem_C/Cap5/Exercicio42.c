/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 5 - Funcoes

  Exercício 42: Dia da Semana: Escreva uma funcao que recebe dia, mes e ano e calcule o dia da semana
  em que caiu essa data. Para isso, basta transformar a data gregoriana em juliana (utilize a funcao
  escrita no exercicio anterior) e calcular o resto da divisao da data juliana por 7. A funcao devera
  retornar um numero entre 0 e 6. Indicando os seguintes, resultados:

    0 - Segunda-Feira
    1 - Terça-Feira
    2 - Quarta-Feira
    3 - Quinta-Feira
    4 - Sexta-Feira
    5 - Sabado
    6 - Domingo
    
    Resolução comentada em: https://www.youtube.com/watch?v=3dBLZXWzNU8
*/

#include <stdio.h>

int greg_juli(int, int, int);
void mostra_dia_semana(int);

int main(){

    int dia, mes, ano;
    int data_juliana;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    data_juliana = greg_juli(dia, mes, ano);
    mostra_dia_semana(data_juliana);

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

void mostra_dia_semana(int juliana){

    int aux;

    aux = juliana % 7;

    switch (aux){
        case 0:
            printf("\nO dia correspondente caira em uma Segunda-Feira.\n");
            break;
        case 1:
            printf("\nO dia correspondente caira em uma Terça-Feira.\n");
            break;
        case 2:
            printf("\nO dia correspondente caira em uma Quarta-Feira.\n");
            break;
        case 3:
            printf("\nO dia correspondente caira em uma Quinta-Feira.\n");
            break;
        case 4:
            printf("\nO dia correspondente caira em uma Sexta-Feira.\n");
            break;
        case 5:
            printf("\nO dia correspondente caira em um Sabado.\n");
            break;
        case 6:
            printf("\nO dia correspondente caira em um Domingo.\n");
            break;
    }

}
