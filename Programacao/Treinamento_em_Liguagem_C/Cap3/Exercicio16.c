/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 3 - Laços

  Exercício 16: Escreva um programa que utilize um laço while para ler caracteres digitado no teclado enquanto o usuario nao pressionar a tecla ESC
  de codigo 27. Os caracteres lidos nao devem ser ecoados no video. Se o caractere lido for uma letra minuscula, o programa a imprimira em maiusculo;
  se for qualquer outro caractere, ele mesmo sera impresso. Utilize o operador ternario.

*/


#include <stdio.h>
#include <conio.h>

int main(){

    char ch = 1;

    while(ch != 27){

        ch = getch();
        printf("A letra correspondente eh: %c", ch >= 'a' && ch <= 'z' ? ch - 32 : ch);
    }

return 0;
}
