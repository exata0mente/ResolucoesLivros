/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 33 - Escreva a funçao de prototipo:

  void strnset(char[], char, int)

  que inicialize a string com n vezes o caractere ch.

  Reposta comentada em video: **
  Mais exercícios em: http://exata0mente.blogspot.com/
  Contate-me: exata0mente@gmail.com


*/
#include <stdio.h>
#define T 80

void strnset(char[], char, int); /*Prototipo da funcao que ira fazer a inscercao do char n vezes*/
void le_string(char[]); /*Prototipo da funcao que ira fazer a leitura da string*/
char le_caractere(void); /*Prototipo da funcao que ira fazer a leitura do caractere para a variavel char ch*/
int le_inteiro(void); /*Prototipo da funcao que ira fazer a leitura do inteiro para a variavel int n*/
void mostra_novo_string(char[]); /*Prototipo da funcao que ira apenas mostrar o resultado da nova string*/

int main(){

    char str1[T], ch1;
    int n;

    le_string(str1); /*Seguindo a ordem do enunciado, primeiro ler string...*/
    ch1 = le_caractere(); /*... depois ler o caractere que ira inicializar na string...*/
    n = le_inteiro(); /*... e por ultimo ler o inteiro que sera a quantidade de vezes que ch ira aparecer.*/

    strnset(str1, ch1, n); /*Aqui a magia ira acontecer*/
    puts(str1);

return 0;
}

void le_string(char str1_temp[]){

    printf("Digite a string: ");
    scanf("%79s", str1_temp);

}

char le_caractere(void){

    char ch_temp;

    printf("Digite o char que ira inicializar a string: ");
    scanf("%*c%c", &ch_temp);

return ch_temp;
}

int le_inteiro(void){

    int n_temp;

    printf("Digite quantas vezes o char devera ser repetido: ");
    scanf("%d", &n_temp);

return n_temp;
}

void strnset(char str1_temp[], char ch_temp, int n_temp){

    /*Para esta funcao irei utilizar uma string auxiliar para que a passagem seja feita uniformente
      ha possibilidade de fazer a insercao do caractere sem utilizar uma string auxiliar mas isso tornaria
      o entendimento mais complicado */

    int i, j;
    char str_aux[T];

    /*Aqui preencho a string auxiliar com o caractere ch (enviado como paramentro). Note que preencho uma quantidade
      n (enviada como parametro) vezes.*/
    for(i = 0; i < n_temp; i++)
        str_aux[i] = ch_temp;

    /*Um detalhe importante acontece no laço abaixo. Veja que uso para a string auxiliar o indice 'i' e para a string principal (enviada
      por parametro) com o indice 'j'. Note tambem que inicio a no laço APENAS o indice 'j'. Com isso eu possibilito que a string auxiliar
      inicie apos o ultimo caractere preenchido! Nao entendeu? Comente na pagina do exercicio ou mande-me um e-mail*/
    for(j = 0; str_aux[i] != '\0'; i++, j++)
        str_aux[i] = str1_temp[j];

    /*Agora transfiro a string auxiliar, que esta preenchida conforme o enunciado, para a string principal.*/
    for(i = 0; i < T; i++)
        str1_temp[i] = str_aux[i];

}

void mostra_novo_string(char str1_temp[]){

    printf("Nova string: ");
    puts(str1_temp);
}

























