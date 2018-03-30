/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 30 - Escreva a funçao de prototipo:

  int strchar(char[], char)

  que procure a primeira ocorrencia do caractere ch em str. A funçao retorna um numero inteiro
  indicando o indice do caractere, se for encontrado, ou -1, em caso contrario.

  Reposta comentada em: https://youtu.be/k0Ovkr2CyEQ
  Mais exercícios em: http://exata0mente.blogspot.com/


*/

#include <stdio.h>
#define T 80

int strchar(char[], char);
char le_caractere(void);
void le_string(char[]);
void informa_indice(int);

int main(){

    char ch, str[T];
    int indice;

    ch = le_caractere();
    le_string(str);
    indice = strchar(str, ch);
    informa_indice(indice);

return 0;
}

char le_caractere(void){

    char ch_temp;

    printf("Digite o caractere que deseja validar na string: ");
    scanf("%c", &ch_temp);

return ch_temp;
}

void le_string(char str_temp[]){

    printf("Digite a string a ser validada: ");
    scanf("%s", str_temp);

}

int strchar(char str_temp[], char ch_temp){

    int i;

    for(i = 0; i < T; i++){
        if(str_temp[i] == ch_temp)
            return i;
        else if(str_temp[i] == '\0')
            break;
    }

return -1;
}

void informa_indice(int i_temp){

    if(i_temp == -1)
        printf("A string nao possui o char informado!");
    else
        printf("A string possui o char informado na posicao %d", i_temp);

}



