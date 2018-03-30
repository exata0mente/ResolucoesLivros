//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 7 - Matrizes
//Exercícios 1 a 28
//Acesse nossa página de resolução dos exercícios: http://exata0mente.blogspot.com/

Exercício 1. Uma matriz é uma coleção de variáveis de:

	a) diferentes tipos de dados distribuídos pela memória;
	b) tipos de dados similares distribuídos pela memória;
	c) tipos de dados similiares em sequência na memória;
	d) diferentes tipos de dados em sequência na memória;

	Resposta: matriz pode ser definida como uma coleção de variáveis do mesmo tipo, que estão distribuidas em sequência pela memória e compartilham o mesmo nome. Ou seja, 		resposta c)

Exercício 2. Em uma declaração de matriz, devem ser especificados t___, o n___ e o t______ da matriz.

	Resposta: tipo, nome e tamanho da matriz. Um exemplo é
		float notas[10]

	Esta matriz é do tipo float, leva o nome de notas e possui 10 posições na memória.

Exercício 3. A declaração da matriz seguinte é correta?

	int mat(25);

	Resposta: Não! Conforme o exercício 2 o tamanho da matriz deve estar entre colchetes. Caso esta declaração seja colocada no código, o compilador pode entender que é um 	protótipo de função.

Exercício 4. Qual é o elemento da matriz referenciado por esta expressão?

	mat[4]

	Resposta: A dúvida mais comum quando se trabalha com matriz é a do índice. O elemento referenciado é o quarto elemento.

Exercício 5. Qual é a diferença entre os números "3" destas duas instruções?

	int mat[3];
	mat[3] = 5;

	a) o primeiro especifíca um elemento particular e o segundo, um tipo;
	b) o primeiro especifíca um tamanho e o o segundo, um elemento particular;
	c) o primeiro especifíca um elemento particular e o segundo, o tamanho da matriz;
	d) os dois especificam elementos da matriz;

	Resposta: Na declaração de uma matriz, o número entre colchetes serve para indicar o tamanho da matriz, ou seja, quantos elementos aquela matriz possui. Em C, a 		contagem dos elementos começa em 0. Ou seja, para uma matriz de tamanho 5 existirá a de posição 0, 1, 2, 3 e 4.

	A resposta correta é a b)

Exercício 6. O que faz a combinação das instruções seguintes?

	#define LIM 50
	char coleta[LIM]

	a) torna LIM um índice;
	b) torna LIM uma variável;
	c) torna coleta[] uma matriz do tipo LIM;
	d) torna coleta[] uma matriz de tamanho LIM;

	Resposta: a)

	É muito comum este uso para definição do tamanho da matriz.

Exercício 7. Se uma matriz é declarada como:

	float preco[MAX]

a instrução abaixo é correta para acessar todos os elementos da matriz?

	for(int j = 0; j <= MAX; j++)
	scanf("%f", preco[j]);

	Resposta: Não! o primeiro motivo é que o operador de endereço de memória '&' não está precedendo a variável preco[j], desta forma a matriz não poderia ser preenchida. 		Outro ponto mais crucial é que, imagine que MAX valha 3, significa então que a matriz preco possui 3 elementos, sendo ele o 0, 1 e 2. Veja a ação do for:

	j = 0; j <= MAX ? Sim **** Acessa preco[0]
	j = 1; j <= MAX ? Sim **** Acessa preco[1]
	j = 2; j <= MAX ? Sim **** Acessa preco[2] /*Aqui a matriz termina pois só tem 3 elementos*/
	j = 3; j <= MAX ? Sim **** Acessa preco[3]; ERRO!!! /*Este endereço de memória não está separado, o programa será encerrado!!*/
	j = 4; j <= MAX ? Não **** Fim do for

	A melhor forma seria: for(j = 0; j < MAX; j++)

	j = 0; j < MAX ? Sim **** Acessa preco[0]
	j = 1; j < MAX ? Sim **** Acessa preco[1]
	j = 2; j < MAX ? Sim **** Acessa preco[2] /*Aqui a matriz termina pois só tem 3 elementos*/
	j = 3; j < MAX ? Não **** Fim do for


Exercício 8. A instrução seguinte é correta para inicializar uma matriz de uma dimensão?

	int matriz = {1, 2, 3, 4};

	Resposta: Não! desta forma matriz é uma única variável e só poderá assumir um valor. 

Exercício 9. O que acontecerá se você colocar tantos valores em uma matriz, na sua inicialização, a ponto de seu tamanho ser ultrapassado?

	a) nada;
	b) possível mau funcionamento do sistema;
	c) uma mensagem de erro do compilador;
	d) outros dados podem ser sobrepostos;

	Resposta: Na inicialiazação, ou seja, int matriz[2] = {1, 2, 3, 4, 5, 6}, o compilador apresentará um warning (mensagem de alerta) mas o programa rodará normalmente. 		Acontece que uma matriz é criada em tempo de compilação. Antes do programa ser executado, o compilador solicita ao sistema operacional um espaço na memória para atender 		o tamanho da matriz, com isso, o compilador irá ignorar os valores que excederem o tamanho da matriz. opção c)
	
Exercício 10. O que acontecerá se você colocar em uma matriz tão poucos valores na sua inicialização que o seu tamanho não seja atingido?

	a) nada;
	b) possível mau funcionamento do sistema;
	c) uma mensagem de erro do compilador;
	d) os elementos não atingidos serão preenchidos com zeros.

	Resposta: a) nada. "É melhor faltar do que sobrar". 

Exercício 11. O que acontecerá se você atribuiur um valor a um elemento cujo o índice ultrapasse o tamanho da matriz?

	a) o elemento conterá o valor zero;
	b) nada;
	c) outros dados serão sobrepostos;
	d) mau funcionamento do sistema.

	Resposta: Acredito que o resultado poderá variar entre compiladores mas não deva fugir muito da resposta d). É imprevisível o que pode acontecer.

Exercício 12. A inicialização abaixo é correta?

	int matriz[3][3] = { {1, 2, 3},
			     {4, 5, 6},
			     {7, 8, 9}
  			   };

	Resposta: Está correta. A matriz ficaria assim:

	matriz[0][0] = 1; matriz[0][1] = 2; matriz[0][2] = 3;
	matriz[1][0] = 4; matriz[1][1] = 5; matriz[1][2] = 6;
	matriz[2][0] = 7; matriz[2][1] = 8; matriz[2][2] = 9;

	É como se cada matriz tivesse uma matriz interna.

Exercício 13. Na matriz da questão 12, como poderíamos referenciar o elemento do valor 4?

	Resposta: Não, apesar de parecer grande a matriz tem 3 elementos para cada linha/coluna.

	Imagine a matriz como uma tabela. linha 0, coluna 0; linha 1 , coluna 0; linha 2, coluna 0; linha 0, coluna 1 ...

Exercício 14. Se uma matriz foi declarada como:

	int matriz[12];

	o que representa a palavra matriz?

	O nome da coleção de variáveis que será criada pelo compilador.

Exercício 15. Se você não inicializar uma matriz, o que seus elementos conterão?

	a) zeros;
	b) valores indeterminados;
	c) números em ponto flutuante;
	d) caracteres '\0'.

	Resposta: a) zeros;

Exercício 16. Quando uma matriz é passada para uma função como argumento, o que realmenteo é passado?

	a) o endereço da matriz;
	b) os valores dos elementos da matriz;
	c) o endereço do primeiro elemento da matriz;
	d) o número de elementos da matriz.

	Resposta: a) o endereço da matriz;

Exercício 17. Verdadeiro ou Falso: Quando uma função recebe uma matriz do tipo int passada como argumento, coloca os valores da matriz em uma posição separada de memória, conhecida somente por essa função.

	Resposta: Falso. A matriz é passada por referência, ou seja, seu endereço original na memória. Qualquer modificação realizada nesta função afeterá diretamente na matriz.

Exercício 18. Em que uma string é semelhante a uma matriz?

	a) ambas são matrizes de caracteres;
	b) a matriz é um tipo de string;
	c) acessam funções do mesmo modo;
	d) a string é um tipo de matriz.

	Resposta: a string é um tipo de matriz!

Exercício 19. Quais das seguintes afirmações são corretas?

	a) scanf() encerra a leitura de uma string quando encontra um espaço em branco;
	b) scanf() lê um número fixo de caracteres de uma string;
	c) scanf() termina a leitura de uma string somente quando é pressionado a tecla [ENTER]
	d) scanf() não lê strings.

	Resposta: a) e c) são corretas! É possível usar caracteres de formatação no scanf() para limitar o tamanho da leitura de uma string também mas não a característica 		principal do scanf(). Podemos dizer então que a) e c) são corretas;

Exercício 20. Uma string é:

	a) uma lista de caracteres;
	b) uma coleção de caracteres;
	c) uma matriz de caracteres;
	d) um conjunto de caracteres;

	Resposta: b) coleção de caracteres

Exercício 21. "A" é um __________ enquanto 'A' é um _____________.

	Resposta: string, caractere;

Exercício 22. O que é a expressão seguinte?

	"Mesopotamia\n"

	a) uma variável string;
	b) uma string matriz;
	c) uma string constante;
	d) uma string de caracteres.

	Resposta: c) uma string constante

Exercício 23. Uma string é terminada pelo caractere ____, que é chamado de _____.

	Resposta: '\0', NULL;

Exercício 24. A função _______ é projetada especificamente para ler uma string do teclado.

	Resposta: gets().

Exercício 25. Se você tem delcarado uma string como:

	char nome[10];

e em seu programa você solicita que o usuário forneça o seu nome, o máximo de caracteres que ele deverá digitar é ____;

	Resposta: 9, pois deverá haver um espaço para o '\0'

Exercício 26. Qual é a função mais apropriada para ler a string str do teclado?

	a) scanf();
	b) gets();
	c) printf();
	d) puts();

	Nota: A partir da revisão de 2011 (C11) a função gets() começou a ser tratada como "perigosa" pelos compiladores. É possível que você tente-a usar e o programa não 		compile. Na época do livro, a melhor resposta seria b) gets(), porém, dada as opções, a forma mais segura é a a) scanf().

	Referência: http://www.cplusplus.com/reference/cstdio/gets/
		    http://www.inf.pucrs.br/~pinho/LaproI/Fflush/CorrigeScanfGets.html

Exercício 27. Assuma a seguinte inicialização:

	char str[] = "Brasileira";

	como você se refere à string "leira"?

	Resposta: str + 5

Exercício 28. Que expressão você usaria para encontrar um comprimento da string str?
	
	Resposta: strlen() que está localizada na biblioteca string.h



