//Exercícios 1 a 23 (Conceituais)

//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercício 1: Um dos alunos preparou o seguinte programa e apresentou-o para ser avaliado. Ajude-o.

#include<stdio.h>
#include<stdlib.h>; //Como o pré-processamento não é lido pelo compilador e sim pelo programa, não há necessidade deste ';'
int Main{}                                // a função é main e não Main. Além disso está invertido o "{}" com o "()"
(
	printf( Existem %d semanas no ano.,52); //Falta a aspas duplas para definir o que é o texto!
	cout << end1;                           //Estas variáveis não foram declaradas e o comando << não existe em C
	system("PAUSE");            
	return 0;
)

//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercício 2: O programa a seguir é correto?

                            // Não houve bibliotecas incluídas.

main()                      // Toda função precisa ter seu tipo declarado, float, int, void, etc.
{
	printf("Linguagem C");    //O printf faz parte do stdio.h, logo o compilador não reconhece esta função
	system("pause");          //O mesmo serve para o system(), faz parte da biblioteca stdlib.h
}

//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercício 3: Quais os erros do programa a seguir?

main()
{
	int a = 1; b = 2; c = 3;
	printf("Os números são: %d%d%d\n, a, b, c, d); //Exercicio identico ao anterior, aqui, esqueceu-se de fechar a aspas do texto
	system("pause");
}
"

//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercício 4: Qual será a impressão obtida por cada uma das seguintes instruções?

#include<stdio.h>

int main(){

	printf("\na)\n\tBom dia! Shirley.");
	printf("\nb)Voce ja tomou cafe hoje? \n"); 
	printf("\nc)\n\nA solucao nao existe!\nNao insista!");
	printf("\nd)Duas\tlinhas\tde\tsaida\nou\tuma?");
	printf("\ne)%s \n%s \n%s \n", "um", "dois", "três");

return 0;
}

//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercício 5: Qual é a saída do seguinte programa?

#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("\n\t\"Primeiro Programa\"");
	system("PAUSE");

return 0;
}


//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercício 6: Qual é a saída do seguinte programa?

#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("%c%c%cPrimeiro Programa", '\n', '\t', '\"')
	printf("%c", '/"');
//	system("PAUSE");

return 0;
}


//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 1 - Conceitos Básicos
//Exercícios 7 a 23

7. Letras maiúsculsa e minúsculas em C são diferentes?
	a)Depende da implementação do compilador
	b)Verdadeiro
	c)Falso

	Resposta: b) Verdadeiro
		A linguagem C é "case-sensitive", isto significa que printf("") e PRINTF("") são totalmente diferentes. O mesmo serve se você declarar a variável
		teste_var = 10; e der printf("%d", Teste_var). O compilador irá informar que a variável Teste_var não está declarada.

8. Identifique o tipo das seguintes constates:

a) '\r' //Caractere Simples
b) 2130	//Int
c) -123	//Int
d) 33.28//Float
e) 0xFA	//Hexadecimal
f) 0101 //Octal
g) 2.0e30//Float
h) '\xDC'//Caractere Simples
i) '\"'	//Caractere Simples
j) '\\'	//Caractere Simples
k) 'F'	//Caractere Simples
l) 0	//Int
m) '\0'	//Caractere Simples
n) "F"	//String
o) -4567.89//Float

	Observação: Atenção aos conceitos: Com aspas simples é caractere simples, aspas duplas cadeia de caracteres (string), apenas números, sem ponto, é inteiro (int),
	apenas números e com ponto, é ponto flutuante (float), precedido de 0 é octal, precedido de 0x é hexadecimal.

8. O que é uma variável?

	Resposta: Variável é uma parte da memória do computador que ficará reservada para receber valores conforme o algoritmo. Por ser variável ela pode receber vários valores
	e por isso é parte essencial da programação.

9. Um tipo de variável em C define:
	
	a) uma variável armazenada em hexadecimal. //FALSO
	b) o tamanho de memória em bytes que a variável ocupará. //VERDADEIRO
	c) uma variável em binário. //FALSO
	d) a base a ser usada no armazenamento da variável.//FALSO
	e) a forma de armazenamento e de recuperação de um valor. //VERDADEIRO

	Resposta: b) e e)

10. Em que partes de um programa em C é possível declarar variáveis?

	Uma variável pode ser declarada em qualquer parte dentro de um bloco, desde que seja declarada antes de uma instrução. Ex.:

		#include<stdio.h>

		int main(){
	
			int teste1 = 25;

			printf("5 * 5 = %d\n", teste1);

			int teste2 = 36;

			printf("6 * 6 = %d\n", teste2);

		return 0;
		}

	Uma variável nunca será declarada como argumento de uma função (dentro do parenteses do printf, por exemplo).


11. Quais dos seguintes nomes são válidos para variáveis em C?

	a) 3ab 		//Inválido! Começa com número
	b) _sim		//Válido! Começa com sublinhado
	c) n_a_o	//Válido! Começa com letra e tem caractere válido no nome
	d) 98Fim	//Inválido! Começa com número
	e) int		//Inválido! Esta é uma palavra reservada para o sistema
	f) A123		//Válido! Começa com letra e tem caractere válido no nome
	g) x**x		//Inválido! Apesar de começar com letra tem caractere inválido no nome
	h) __A		//Válido! Começa com sublinhado, então pode.
	i) - -A		//Inválido! Começa com caractere não aceito
	j) y-2		//Inválido! Apesar de começar com letra tem caractere inválido no nome
	k) YYFim	//Válido! Começa com letra e tem caractere válido no nome
	l) \meu		//Inválido! Começa com caractere não aceito
	m) *y2		//Inválido! Começa com caractere não aceito


[SERÁ REVISADO]12. Quais das seguintes instruções são corretas?

	a) int a;		//Correto!
	b) float b;		//Correto!
	c) double float c;	//Incorreto! Double e float são tipos de variáveis
	d) unsigned char d;	//Correto!
	e) unsigned e;		//Incorreto! Unsigned é um modificador de tipo e não um tipo propriamente dito. 
	f) long float f;	//Correto!
	g) long g;		//Incorreto! Unsigned é um modificador de tipo e não um tipo propriamente dito.
	h) long double h;	//Correto!.
	
13. O tipo float ocupa o mesmo espaço que 4 variáveis do tipo char

14. Em qual tipo de dado podemos armazenar um número real?

	a) unsigned int
	b) char
	c) float
	d) long

	Resposta: Apenas float destas opções é específico para o armazenamento de números reais.

15. Verdadeiro ou Falso: Tipos de variáveis long int podem conceber números não maiores que o dobro do maior valor de uma variável do tipo short int.

	Resposta: Falso! long int pode conceber números na escala de 4 milhões. short int traz na escala de 65 mil. Ou seja, o dobro de short int (aprox 140 mil) não chega
	nem perto de um long int.

16. Qual o trecho do programa que inicializa a variável x?

	a) int x; x = 5;
	b) int x = 5;
	c) int x, y = 5;
	d) x = y

	Resposta: A opção que inicializa apenas a variável x é a b)

17. Arquivos de inclusão são:

	a) bibliotecas
	b) compiladores
	c) arquivos ASCII
	d) linkeditores

	Resposta: O stdio.h, por exemplo, é um arquivo de inclusão, ou seja, uma biblioteca que contém definições e declarações essenciais para o uso do printf().

18. Arquivos de inclusão servem para:

	a) auxiliar o compilador a compilar
	b) auxiliar o programador na escrita do programa fonte
	c) executar instruções
	d) incluir programas

	Resposta: b), um arquivo de inclusão poupa o programador de criar códigos imensos para determinada função que já existe. Por exemplo, printf() é uma função que só existe
	porque alguém escreveu palavra por palavra como o computador recebe uma informação e a imprime na tela. Este código está inserido na biblioteca stdio.h, então, quando 
	você digita stdio.h você está "chamando" aquele monte de código. 

19. A diretiva #include é:
	
	a) uma instrução C
	b) uma instrução de linguagem orientada a objetos
	c) uma instrução de pré-processador
	d) um objeto

	Respostea: c) uma instrução de pré-processador

20. Diretivas do pré-processador são executadas pelo:

	a) compilador
	b) microprocessador
	c) linkeditor
	d) programa

	Resposta: d) programa

21. Códigos especiais servem para:

	a) codificar senha
	b) nomear arquivos escondidos
	c) substituir caracteres que não podem ser digitados no teclado
	d) desenvolver programas codificados

	Resposta: Esta é fácil. Se quisermos inserir a letra grega alpha em um printf qualquer (concluindo que não tenha um teclado grego), precisaremos incluir um "comando"
	para que o compilador imprima esta letra, neste caso usariamos, em decimal, %c .... '224'.

22. Qual a diferença no uso de aspas simples e aspas duplas em C?

	Resposta: Basicamente, a aspas simples serve para representar um único caractere, já a aspas duplas serve para representar uma cadeia de caracteres. Usamos aspas simples
	para usarmos um caractere da tabela ASCII. Aspas duplas usamos para trazer um texto que obviamente não estará na tabela ASCII.
	Exemplo: printf("%c\n", '130'); //traz a letra é com seu código decimal da tabela ASCII
		 printf("%s\n", "Bom dia") // traz um texto qualquer.

23. Quais instruções são corretas:

	a) printf
	   (	"Primeiro programa" );
	b) printf(
		"Primeiro programa"
	   );
	c) printf("Primeiro
	   programa");

	d)printf
	  (
	  "Primeiro programa"
	  )
	  ;

	Resposta: Apenas a c está INCORRETA, as restantes estão corretas. Em C o compilador ignora os espaços em branco mas há exceções e entre elas está a quebra de linha 
	dentro de uma expressão em aspas duplas. O nosso editor de texto acabou "entregando" a resposta. Ao compilarmos o printf da opção c, o compilador irá nos dizer que
	"Falta fechar a aspa após 'Primeiro' e após ');'".


