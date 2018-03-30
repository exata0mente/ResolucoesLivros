/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 32 - Escreva a funçao de prototipo:

  int stricmp(char[], char[])

  que compare duas cadeias de caracteres independentemente de letras maiusculas ou minusculas e retorne
  a diferença ASCII dos primeiros caracteres diferentes, ou zero se as cadeias forem iguais

  Reposta comentada em: https://youtu.be/RL2iskXoDt4
  Mais exercícios em: http://exata0mente.blogspot.com/


*/

#include <stdio.h>
#define T 80

int stricmp(char[], char[]);
void le_string(char[]);
void strlwr(char[]);
void informa_dif(int);


int main(){

    char str1[T], str2[T];
    int dif_ASCII;

    le_string(str1);
    le_string(str2);
    strlwr(str1);
    strlwr(str2);
    dif_ASCII = stricmp(str1, str2);
    informa_dif(dif_ASCII);

return 0;
}

void le_string(char str_temp[]){

    printf("Digite a string: ");
    scanf("%s", str_temp);

}

void strlwr(char conv_palavra[]){

    int i;
    for(i = 0; i < T; i++){
        if(conv_palavra[i] == '\0')
            break;
        conv_palavra[i] = conv_palavra[i] >= 'A' && conv_palavra[i] <= 'Z' ? conv_palavra[i] + 32 : conv_palavra[i];
    }

}


int stricmp(char str1_comp[], char str2_comp[]){

    int i, dif_temp;

    dif_temp = 0;

    for(i = 0; i < T; i++){
        if(str1_comp[i] != str2_comp[i])
            dif_temp += str1_comp[i] - str2_comp[i];
        else if(str1_comp[i] == '\0' || str2_comp[i] == '\0')
            break;
    }

return dif_temp;
}

void informa_dif(int dif_mostra){

    if(dif_mostra)
        printf("As strings nao sao iguais!!");
    else
        printf("As strings sao iguais!!");

}






