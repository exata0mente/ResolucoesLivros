/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 7 - Matrizes

  Exercicio 36 - Escreva uma função de protótipo:

  void strins(char[], char, int);

  que insira o caractere ch na posicao pos da string str.

  Reposta comentada em video: **
  Mais exercícios em: http://exata0mente.blogspot.com/
  Contate-me: exata0mente@gmail.com


*/

#include <stdio.h>
#define T 80
#define VERDADEIRO 1
#define FALSO 0

#define VALIDA_POS(x, lim)	(x >= lim || x < 0) ? (VERDADEIRO) : (FALSO) /*Definição de uma MACRO*/

/*Protótipos*/
void strins(char[], char, int); /*Protótipo da função do enunciado*/
void le_string(char[]); /*Protótipo da função que fará a leitura da string*/
int conta_caractere_string(char[]); /*Protótipo da função que contará quantos caracteres preenchidos tem na string. Alternativamente, pode ser usado a função strlen()*/
char le_caractere(void); /*Protótipo da função que fará a leitura do char a ser inserido*/
int le_inteiro(int); /*Protótipo da função que fará a leitura da posição que o novo char (ch) deverá ser inserido*/
void mostra_nova_str(char[]); /*Protótipo da função que mostrará a nova string*/

int main(){

	char str[T];
	char ch;
	int pos, qnt_ch_str;

	/*
		A variável qnt_ch_str foi criada para receber quantos caracteres o usuário preencheu na string. Veja que de início definimos a string de tamanho
		T, ou seja, 80. Se eu escrever "Oi" e pedir para inserir um caractere na posição 65 será uma interação válida (não acusará erro mas a função não
		retornará o que deve ser de fato retornado). Para isso devemos contar quantos caracteres tem antes do '\0', veremos mais a frente com calma.
	*/

	le_string(str); /*Chama a função que fará a leitura da string*/
	qnt_ch_str = conta_caractere_string(str); /*Chama e recebe o valor retornado da função que conta caractere*/
	ch = le_caractere(); /*Chama a função que fará a leitura do char a ser inserido*/

	do{ /*Aqui faremos a leitura de um inteiro ...*/
		pos = le_inteiro(qnt_ch_str);
	}while(VALIDA_POS(pos, qnt_ch_str)); /*... enquanto a posição for válida (para fins didáticos usamos uma MACRO para fazer esta validação)*/

	strins(str, ch, pos); /*Função do enunciado*/

	mostra_nova_str(str); /*Mostra o resultado*/

return 0;
}

void le_string(char str_temp[]){

	printf("Digite uma string: ");
	scanf("%79s", str_temp);

}

int conta_caractere_string(char str_temp[]){

	/*
		Nota: Esta função poderia ser facilmente substituida pela função strlen() da biblioteca string.h mas como a intenção da autora,
		nos exercícios deste capítulo, é provavelmente criar funções que já existem nessa biblioteca faremos a nossa própia strlen().
	*/

	int i;

	for(i = 0; str_temp[i] != '\0'; i++){ /*Um laço simples que conta quantos elementos há até chegar no '\0'*/
	}

return i;
}

char le_caractere(void){

	char ch_temp;

	printf("Digite um caractere: ");
	scanf("%*c%c", &ch_temp);

return ch_temp;
}

int le_inteiro(int max_ch){

	int pos_temp;

	printf("Digite uma posição do caractere a ser substituido 0 < x < %d  : ", max_ch);
	scanf("%d", &pos_temp);

return pos_temp;
}

void strins(char str_temp[], char ch_temp, int pos_temp){
	/*
		Esta função está muito simples pois o trabalho maior dela já foi realizado pela função conta_caractere_string().
	*/

	str_temp[pos_temp] = ch_temp;

}


void mostra_nova_str(char str_temp[]){

	printf("Nova string: ");
	puts(str_temp);

}
