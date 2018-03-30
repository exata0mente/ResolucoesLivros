/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 34 - Escreva a funçao de prototipo:

  void strinv(char[])

  que inverta os caracteres de uma string. Por exemplo: se a string for "ABCDEF", deve ser convertida para
  "FEDCBA"

  Reposta comentada em video: **
  Mais exercícios em: http://exata0mente.blogspot.com/
  Contate-me: exata0mente@gmail.com


*/
#include <stdio.h>
#define T 80

void strinv(char[]); /*Protótipo da função do enunciado*/
void le_string(char[]); /*Prototipo da função que irá ler a string*/
void mostra_string(char[]); /*Protótipo da função que irá mostrar a string*/

int main(){

	char string_original[T];

	le_string(string_original);
	strinv(string_original);
	mostra_string(string_original);

return 0;
}

void le_string(char string_temp[]){

	printf("Digite a string a ser invertida: ");
	scanf("%79s", string_temp);
}

void strinv(char string_temp[]){

	/*Aqui irei tambem usar uma string auxiliar para a inversao dos caracteres*/
	int i, j;
	char string_auxiliar[T];


	/*Um simples preenchimento de vetor*/
	for(i = 0; string_temp[i] != '\0'; i++)
		string_auxiliar[i] = string_temp[i];
	/*Quando o for encontrar o caractere '\0' da string principal ele irá interromper o laço. Isto significa que o índice j ficará igual
	  ao índice onde o '\0' está. Como vamos passar o último elemento de string_auxiliar para o primeiro elemento de string_temp, se não
	  fizermos nada, o primeiro caractere que será atribuído será o '\0', o que fará a string_principal, em qualquer leitura, ser interrompida já no
	  começo (para carater didatico, faça o teste). Para resolver este problema, precisaremos "voltar uma casa"*/
	i--;

	/*Veja que não inicializei o i para que possamos começar no final da string_auxiliar, antes do '\0'..*/
	for(j = 0; string_temp[j] != '\0'; j++, i--)
		string_temp[j] = string_auxiliar[i];

}

void mostra_string(char string_temp[]){

	printf("String invertida: ");
	puts(string_temp);

}
