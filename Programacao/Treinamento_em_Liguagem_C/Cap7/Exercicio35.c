/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 35 - Escreva uma função de protótipo:

  int replace(char[], char, char);

  que substitua todo caractere recebido no segundo argumento (atual) de str pelos caracteres
  recebidos no terceiro argumento (novo). A função retorna o número de substituições.

  Reposta comentada em video: **
  Mais exercícios em: http://exata0mente.blogspot.com/
  Contate-me: exata0mente@gmail.com


*/

#include <stdio.h>
#define T 80
#define ATUAL 1
#define NOVO 0

/*Protótipos*/
int replace(char[], char, char); /*Protótipo da função do enunciado*/
void le_string(char[]); /*Protótipo da função de leitura de string*/
char le_char(int); /*Protótipo da função de leitura de char*/
void informa_trocas(int, char[]);

int main(){

	char str[T];
	char ch_atual, ch_novo;
	int subs_realizadas;

	le_string(str); /*Chama a função le_string, enviando a como parâmetro a REFERENCIA da string*/
	ch_atual = le_char(ATUAL); /*Chama a função que lê o char e envia o argumento especificando se é para o atual ou para o novo*/
	ch_novo = le_char(NOVO); /*Chama a função que lê o char e envia o argumento especificando se é para o atual ou para o novo*/

	subs_realizadas = replace(str, ch_atual, ch_novo); /*Chama a função que faz as subs*/

	informa_trocas(subs_realizadas, str); /*Mostra quantas trocas foram realizadas :)*/


return 0;

}

void le_string(char str_temp[]){

	printf("Digite a string a ser manuseada: ");
	scanf("%79s", str_temp);

}

char le_char(int verificador){
	char caractere_temp;

	/*Aqui faço uma pequena manipulação no printf. Se a função receber o argumento ATUAL (1 que é == True), o operador condicional irá "enviar" ao printf uma
	  determinada string. Caso seja NOVO (0 que é == False) será enviado ao printf outra string. Esta é uma utilização interessante para o operador condicional
	*/
	printf("Digite o caractere a ser %s", verificador ? "substiudo: " : "inserido: ");
	scanf("%*c%c", &caractere_temp); /*É importante lembrar que o ENTER que damos no scanf() fica armazenado em um buffer e sempre que outro scanf() é chamado
					   ele primeiro verifica o buffer. Para evitarmos que este ENTER vá para nosso char, podemos fazer o uso desse '%*' na formatação
					   do scanf(). O '*' informa a função scanf() que aquele tipo (no nosso caso um char qualquer) deve ser descartado. Faça o teste
					   sem esta formatação :)
					*/

return caractere_temp;
}

int replace(char str_temp[], char atual_temp, char novo_temp){

	/*Como será necessário analisar cada elemento de uma string o mais indicado para este exercício é o uso de um laço*/
	int i, cont_subs; /*i será o índice do laço e o cont_subs irá contar as substituições realizadas*/

	cont_subs = 0;

	for(i = 0; str_temp[i] != '\0'; i++) /*Percorre a string até encontrar o elemento que tenha o '\0'*/
		if(str_temp[i] == atual_temp){ /*Se o elemento da posição i for igual ao atual, ou seja, igual ao que se quer trocar*/
			str_temp[i] = novo_temp; /*Substitui pelo novo caractere*/
			cont_subs++;	/*Incrementa 1 na contagem*/
		}

return cont_subs;
}

void informa_trocas(int cont, char str_temp[]){

	printf("\n\nPara esta string foram realizadas %d trocas!!\nNova string: %s", cont, str_temp);

}
