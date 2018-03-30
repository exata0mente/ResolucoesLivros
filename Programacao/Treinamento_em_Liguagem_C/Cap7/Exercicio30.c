/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 30 - Escreva a funçao de prototipo:

  void strlwr(char[]);

  que converta uma string em letras minuscula.

  Reposta comentada em: https://youtu.be/REBdLOsFG3A
  Mais exercícios em: http://exata0mente.blogspot.com/


*/

#include <stdio.h>
#define T 80

void strlwr(char[]);
void le_string(char[]);

int main(){

    char palavra[T];
    printf("*** Programa anti CAPSLOCK ***");
    le_string(palavra);
    strlwr(palavra);
    puts(palavra);

return 0;
}

void le_string(char le_palavra[]){

    printf("\nDigite uma palavra: ");
    scanf("%s", le_palavra);

}

void strlwr(char conv_palavra[]){

    int i;
    for(i = 0; i < T; i++){
        if(conv_palavra[i] == '\0')
            break;
        conv_palavra[i] = conv_palavra[i] >= 'A' && conv_palavra[i] <= 'Z' ? conv_palavra[i] + 32 : conv_palavra[i];
    }

}













