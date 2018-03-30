/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 29 - Escreva a funçao de prototipo:

  void strup(char[]);

  que converta uma string em letras maiusculas.

  Reposta comentada em: https://youtu.be/RCil5rNj9zc
  Mais exercícios em: http://exata0mente.blogspot.com/


*/

#include <stdio.h>
#define T 80

void strup(char[]);
void le_string(char[]);

int main(){

    char palavra[T];
    printf("*** Programa CAPSLOCK ***");
    le_string(palavra);
    strup(palavra);
    puts(palavra);

return 0;
}

void le_string(char le_palavra[]){

    printf("\nDigite uma palavra: ");
    scanf("%s", le_palavra);

}

void strup(char conv_palavra[]){

    int i;
    for(i = 0; i < T; i++, cont++){
        if(conv_palavra[i] == '\0')
            break;
        conv_palavra[i] = conv_palavra[i] >= 'a' && conv_palavra[i] <= 'z' ? conv_palavra[i] - 32 : conv_palavra[i];
    }

}













