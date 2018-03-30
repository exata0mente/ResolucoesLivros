//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 5 - Funções
//Exercícios 1 a 36
//Acesse nossa página de resolução dos exercícios: https://www.youtube.com/channel/UCfm5J7qGMBgupvKddelZSSA

1. Quais das seguintes razões são válidas para escrever funções:

	a) funções usam menos memória do que se repitirmos o mesmo código várias vezes. /*Não necessariamente, dependendo das chamadas, pode usar mais memória*/
	b) rodar mais rápido. /*Não necessariamente também*/
	c) dar um nome a um bloco de código. /*Sim! A funções damos um nome para identificá-la, isto acaba tornando melhor a legibilidade quando há funções*/
	d) funções fornecem um meio de encapsular alguma computação numa caixa preta, que pode ser usada sem preocupação quanto a seus detalhes interno. /*Sim!
	A autora, inclusive, dá o exemplo do printf(). Não sabemos o que faz, e a princípio nem precisamos.*/
	e) dividir uma tarefa em pequenas unidades. /*Sim! Talvez uma das melhores funcionalidades de funções. Dividir e conquistar*/
	f) funções mantém variáveis protegidas das outras partes do programa. /*Sim, apesar de podermos declarar a variável com mesmo nome em outras funções,
	cada uma terá preservada o seu endereço na memória.*/
	g) ajudar a organizar o programa. /*Sim, serve como um organizador também*/
	h) reduzir o tamanho do programa. /*Também! Mesmo exemplo do printf().*/
	i) para que outros programadores possam usá-las. /*Também, programadores podem alterar funções específicas ao invés de analisar todo o código*/

2. Verdadeiro ou Falso: Uma função pode ser útil mesmo se você não enviar nada a ela e ela não lhe retornar nenhuma informação.

	Resposta: Verdadeiro! É o caso das funções do tipo void. Não há retorno de informações mas são úteis. Como por exemplo para printf(). Veja abaixo:

	#include <stdio.h>

	void impressao();

	int main(){

	    int i;

	    for(i = 1; i < 100; i++)
		if(i % 9 == 0)
		    impressao(i);

	return 0;
	}

	void impressao(int num){
	    printf("%d e divisivel por 9\n", num);
	}

	Ao invés de colocar o printf dentro do for, criei uma função para isso. Uma função void que não retorna nenhum valor.

3. Quais das seguintes instruções constituem uma chamada à função sorte?

	a) sorte = 5; /*Aqui trata-se de uma atribuição de valor a uma variável*/
	b) int sorte(){return rand()} /*Temos aqui a função "já chamada", não a estamos chamando*/
	c) x = sorte() /*Agora sim. Apesar de estar atribuindo a uma variável, a função sorte é chamada e o seu return é associado à variável x*/
	d) int y = sorte() % 10; /*É correto, a mesma situação da c)*/
	

4. Qual a diferença entre definir e declarar uma função?

	Resposta: A declaração de uma função (protótipo da função) define o tipo do return da função e de seus argumentos e é declarada antes da chamada da função
	porém podemos definir a função antes de sua chamada, o que não necessitaria da declaração da função. A grande diferença é que podemos declarar uma função
	dentro de outra mas não podemos definir uma função dentro de outra função (pg 123).

	Definir função: Descrição do que a função fará sendo, o tipo da função, a declaração dos argumentos e o bloco de instruções.
		tipo identificado(tipo_parâmetro); /*Protótipo de função*/
	Declarar função: Protótipo de uma função. Estabelece o tipo da função e o argumento que ela recebe.
		tipo identificado(tipo parâmetro){ /*Definição de função*/
			instrução 1;
			instrução 2;
			...
		return valor;
		}

	

5. O que são parâmetros de uma função?

	a) a parametrização das variáveis recebidas;
	b) as variáveis da função que recebem os valores da função que chama;
	c) os valores retornados da função;
	d) as variáveis visíveis somente pelas funções que chama;

	Resposta: b) Na página 115 a autora confirma. 

6. O protótipo de uma função:

	a) pode ser escrito em qualquer lugar do programa; /*Não, deve ser escrito antes de sua chamada e definição*/
	b) deve preceder a definição da função e toda chamada a ela; /*Em partes, não significa que toda vez que a função for chamada será necessário o protótipo.
	Este deve ser feito apenas uma vez e não várias*/
	c) pode ser suprimido se a função for definida antes de ser chamada; /*Sim, caso a definição da função seja antes de sua chamada, o protótipo pode ser 
	omitido*/
	d) é uma instrução que pertence ao corpo da função; /*Não necessariamente. Apesar do protótipo poder ser declarado dentro de uma função ele pode ser, e comumente
	é, declarado antes da função principal*/

	No livro: Página 112.

7. O tipo de uma função:

	a) é definido pelos argumentos que ela recebe;
	b) é definido pelo valor retornado pelo comando return;
	c) é sempre void;
	d) pode ser qualquer um, exceto void; 

	Resposta: b) é definido pelo valor retornado pelo comando return.

	No livro: Página 113.

8. O comando return:

	a) é de uso obrigatório em todas as funções;
	b) termina a execução da função;
	c) retorna para o início da função;
	d) pode retornar um único valor a função que chama;

	Resposta: Termina a execução da função. Veja o exemplo:

	#include <stdio.h>

	/*Prototipo das funcoes*/
	int e_par(int);
	void respo(int);

	/*Funcao principal main()*/
	int main(){

	    int num = 15, cond;

	    cond = e_par(num); /*Envia a funcao e_par() a variavel num e resultado devolvido pela e_par() eh atribuido na variavel cond*/
	    respo(cond); /*O resultado que a variavel cond recebeu da funcao e_par() agora sera enviado para a funcao respo()*/

	return 0;
	}

	/*Definicao da funcao e_par()*/
	int e_par(int test){ /*Recebe a variavel da funcao main() e associa, ja declarando, na variavel test*/

	    if(test % 2 == 0) /*Teste se o numer eh par*/
		return 1; /*Retorna 1 se for*/
	    else
		return 0; /*Retorna 0 se nao for*/

	    return 3; /*Apenas para carater didatico. Podemos ter quantos returns quisermos porem ao encontrar o primeiro a funcao acaba*/
	}

	/*Definicao da funcao respo()*/
	void respo(int sit){ /*Recebe a variavel da funcao main() e associa, ja declarando, na variavel sit*/

	    printf("%s\n", sit == 1 ? "E par" : "E impar"); /*Imprime a situacao do numero, se e par ou nao*/
	/*Veja que nao ha return, pois a funcao e void e o tipo da funcao eh definido pelo valor que o return devolve. Como nao havera return, a
	funcao eh void*/
	}


9. Verdadeiro ou Falso: Você pode retornar quantos valores desejar de uma função ao programa chamador usando return.

	Resposta: Falso! Como já abordado, o return pode passar apenas um valor.

10. Argumentos de funções podem ser:

	a) constantes;
	b) variáveis;
	c) chamadas a funções;
	d) expressões;
	e) protótipos de funções;

	Resposta: Não confunda argumento com parâmetro. Veja:


	int teste (int a) /*O int a é um parâmetro*/
	...
	a = teste(b) /*b sera o argumento*/

	Ou seja, o que é enviado de uma função, neste caso a main(); para a função teste() é o argumento. Com o código abaixo, é possível verificar que...

	#include <stdio.h>
	#include <stdlib.h>

	float constante(float); /*Vai receber uma constante como parametro*/
	void variavel(float, int, int); /*Vai receber uma variavel como parametro*/
	void funcao(char); /*Vai receber uma chamada de funcao como parametro*/
	void expressao(int); /*Vai receber uma expressao como parametro*/
	void prototipo(int);

	int main(){

	    int a = 3, b = 7, var;

	    constante(3.1415); /*Chamada a funcao enviando o argumento constante*/

	    var = constante(3.1415) * a * a * b;

	    variavel(var, a, b); /*Chamada a funcao enviando o argumento variavel*/

	    funcao(getchar()); /*Chamada a funcao enviando o uma chamada de funcao como parametro*/

	    expressao(a * b - a / b); /*Chamada a funcao enviando o argumento expressao*/

	    prototipo(int soma_simples(void)); /*Chamada a funcao enviando o argumento prototipo*/


	return 0;
	}

	float constante(float pi){

	return pi;
	}

	void variavel(float volume, int altura, int raio){
	    printf("Um cilindro de altura %.2d e raio %.2d tem volume de %.2f\n", altura, raio, volume);

	}
	void funcao(char qualquer){
	    printf("Proximo na tabela ASCII: %c\n", qualquer + 1);
	}

	void expressao(int result){
	    printf("A expressao passada resulta em: %d\n", result);
	}

	void prototipo(int soma){
	    printf("A soma eh %d\n", soma);
	}

	int soma_simples(void){

	return (1+1);
	}

	... Apenas a d) está incorreta.

11. Quando argumentos são passados para uma função:

	a) a função cria novas variáveis para recebê-lo; /*Correto, este é o que chamamos de passagem de argumentos por valor*/
	b) a função acessa as mesmas variáveis da função que chama; /*Negativo, o que é passado pelo argumento ao parâmetro da função é apenas o valor da variável. */
	c) a função pode alterar as variáveis da função que chama; /*Negativo. Apesar do return conseguir alterar o valor de uma variável, se enviarmos em um argumento
	de uma chamada de função 2 variáveis, conseguiriamos com o return alterar apenas 1 variável*/
	d) a função não pode alterar as variáveis da função que chama; /*Correto, a função trabalhará apenas com os valores que foram passados e não com as variáveis*/


	Resposta: Destas afirmações, apenas a a) e a d) estão correta, vide exemplo:

	...
	x = soma(a, b);
	....

	int soma(int x, int y){
	....
	return (x + y);
	}

	Enviamos à função soma as variáveis a e b como argumento. A função soma cria em seu parâmetro as variáveis x (que receberá o valor de a) e y (que receberá o valor de b)
	e, independente do que for feito dentro da função, as variáveis a e b não serão alteradas.
	
	
12. Uma função que não recebe argumentos é do tipo:

	a) int;
	b) void;
	c) float;	
	d) Não é possível identificar o tipo da função somente com essa informação.

	Resposta: A resposta d) é de fato a correta. Funções podem ser chamadas sem receber argumentos. Veja um exemplo:


	/*Programa que conta quantas vezes digitou uma vogal*/

	#include <stdio.h>

	int resp(void); /*Prototipo da funçao*/

	int main(){

	    char letra;
	    int cont;

	    cont = 0;
	    do{ /*O programa sera encerrado quando X for digitado*/
		letra = getchar();
		if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') /*Condicao*/
		    cont += resp(); /*Funcao sendo chamada, nenhum argumento esta sendo enviado*/
	    }while(letra != 'X');

	    printf("\nUma vogal foi digitada %d vezes", cont);

	return 0;
	}

	int resp(){ /*Nenhum argumento recebido e...*/

	    printf("Voce digitou uma vogal!!\n");

	return 1; /*... mesmo assim a funçao pode retornar um valor*/
	}

13. Uma função que não retorna nenhum valor é do tipo:

	a) int;
	b) void;
	c) float;	
	d) Não é possível identificar o tipo da função somente com essa informação.

	Resposta: O mais desatento pode dizer que a resposta d) é a correta. O tipo de uma função está diretamente ligado ao tipo do valor que a função retornará
	(respondemos isso no exercício 7), com isso, é correto dizer que uma função do tipo void não retornará nenhum valor.

	No livro: Página 116 mostra um exemplo.

14. A função a seguir é correta?

	float celsius(float fahr);
	{
		float c;
		c = (fahr - 32.0) * 5.0 / 9.0;
		return c;
	}

	Resposta: Não! Tudo parece ok, exceto por um ';' após o parâmetro da função. De resto, a função está correta.

15. Verdadeiro ou Falso: Funções podem ser definidas dentro de outras funções, conforme as necessidades do programa.

	Resposta: Falso. Em C, é proibido, inclusive, quando você cria uma função dentro da outra o compilador reporta "warning: ISO C forbids nested functions" que
	é o mesmo que "ISO C proíbe funções aninhadas".

	No livro: Página 122.

16. Verdadeiro ou Falso: As variáveis habitualmente usadas em funções C são acessíveis a todas as outras funções.

	Verdadeiro! Vide página 134.

	Obs.: uma variável definida dentro de uma função não é acessível em outras funções ("http://www.inf.pucrs.br/~pinho/LaproI/Funcoes/AulaDeFuncoes.htm#FuncProc") exceto
	se uma variável for do classe extern.
	
17. Quais das seguintes razões são válidas para o uso de argumentos em funções:
	
	a) indicar à função onde localizar ela mesma na memória; 
	b) transmitir informações à função para que ela possa operá-las; 
	c) retornar informações provenientes da função ao programa que chama;
	d) especificar o tipo da função;

	Resposta: b) Quando passamos valores por argumentos estamos dando dados para que determinada
	função faça operações e retorne o que for necessário.

18. Este programa é correto? Por quê?

	#include <stdio.h>

	void main(){
	    float x, y;
	    scanf("%f %f", &x, &y);
	}

	float mul(a, b)
	float a, b;
	{
	return (a*b)
	}


	Resposta: Definitivamente não.
		1. Por padrão a função main() deve ser int e retornar algum valor (no caso 0).
		2. Não dá para definir se a linha float mul(a, b) seria o protótipo da função. Caso seja, o parâmetro da função é preenchido com o tipo dos dados que
		serão passados por valor.
		3. A definição da função também está incorreta. O nome da função (identificador) está omitido e os parâmetros da função devem estar entre parêntes
		 e ter o seu tipo específicado. Há também um ; incorreto.
		4. Não há chamada à esta função. Não que isso seja um erro.

	O programa corrigido ficaria assim:

	#include <stdio.h>

	float mul(int, int);

	int main(){

	    float x, y, multip;

	    scanf("%f %f", &x, &y);

	    multip = mul(x, y);

	return 0;
	}


	float mul(a, b){

	    return (a * b);
	}

19. Uma função recursiva:

	a) é definida dentro de outra função;
	b) contém grandes recursos;
	c) contém uma chamada a ela mesma;
	d) solicita recursos de outros programas;

	Resposta: c) contém uma chamada a ela mesma;

20. As funções recursivas:

	a) poupam memória;
	b) poupam tempo de execução;
	c) aumentam a legibilidade do programa;
	d) usam mais memória;

	Resposta: Devido a necessidade de criar variáveis locais para cada função e não a "destruir" (devido à recursividade), o programa utiliza bem mais memória.

21. As classe de armazenamento de uma variável determina:

	a) tamanho, endereço e classificação;
	b) tempo de vida, visibilidade e inicialização;
	c) valor armazenado, nível de declaração e forma de armazenamento;
	d) valores default, palavras-chaves e automatização;

	Resposta: b)

22. As variáveis das classes ___________ e __________ são criadas em tempo de compilação.

	Resposta: extern e static.

23. As variáveis de classes ____________ e __________ são criadas em tempo de execução.

	Resposta: auto e register.

24. A palavra-chave extern:

	a) solicita que a variável seja criada em tempo de execução;
	b) cria variáveis externas;
	c) informa ao compilador que a variável foi criada em outra fonte;
	d) determina que a variável em questão manterá o valor zero;


	Resposta: Apesar de óbvio a resposta correta é a c) pois a questão é sobre a palavra-chave e não sobre o tipo extern. O uso da palavra-chave extern ocorrerá
	quando você estiver acessando uma variável de outra fonte.

25. Verdadeiro ou Falso: 
	
	a) variáveis externas são visíveis até mesmo a códigos de outros arquivos; /*Verdadeiro*/
	b) variáveis estáticas externas são visíveis até mesmo a códigos de outros arquivos; /*Falso*/
	c) variáveis externas ou estáticas podem ser declaradas em qualquer local do programa; /*Verdadeiro*/
	d) variáveis estáticas podem ser alteradas por qualquer função. /*Falso*/
	
26. As variáveis das classes static e extern são inicializadas com o valor _______, por falta de inicialização;

	Resposta: Zero;

27. As variáveis das classes auto e register são inicializadas com o valor _______, por falta de inicialização;

	Resposta: Lixo;

28. Quais das seguintes instruções são incorretas:

	a) auto int x = rand(); /*Correto*/
	b) static int x = rand(); /*Incorreto*/
	c) extern int x = rand(); /*Incorreto*/
	d) register int x = rand(); /*Correto*/

29. A principal tarefa do pré-processador é:

	a) auxiliar no desenvolvimento do programa-fonte;
	b) aumentar a velocidade de execução;
	c) converter programas para outra linguagem;
	d) processar o programa em diversas máquinas;

	Resposta: a) 

30. Explique as semelhanças e diferenças entre o uso da diretiva #define e do qualificador const para definir constantes.

	Resposta: Podemos dizer que a semelhança é a possibilidade de definir um valor único e inalterado na execução do programa. A diferença é que o qualificador 
	const reserva um espaço na memória para receber o valor definido e possui um tipo de dado. Já a diretiva define apenas troca o identificador pelo seu texto. 
	Não há na diretiva uma definição de tipo. Isto pode ser vantajoso mas também pode não ser.

31. O que é macro?

	a) Uma diretiva #define que admite argumentos;
	b) Uma diretiva #define que substitui o uso de qualquer função;
	c) Uma diretiva #define que a escrita de funções;
	d) Uma diretiva #define que qe retorna um valor.

	Resposta: a)

32. A macro a seguir é correta?

	#define TROCA(a, b){int t; t = a; b = t;}

	Resposta: Não! A parte de pré-processamento faz, a grosso modo, uma sub

33. Escreva uma macro que tenha o valor 1 se o seu argumento for um numero ímpar, e o valor 0 se for par.

	#include <stdio.h>
	#define E_PAR(x) ((x) % 2 == 0 ? 0 : 1)

	int main(){

	    int num;

	    scanf("%d", &num);
	    printf("%d", E_PAR(num));

	return 0;
	}

34. Escreva uma macro que encontre o maior entre seus tres numeros.

35. Escreva uma macro que tenha valor 1 se o seu argumento for um caractere entre 0 e 9, o valor 0 se nao for .

36. Escreva uma macro que converta um dígito ASCII entre 0 e 9 a um valor numérico entre 0 e 9.

37. O código abaixo é correto para calcular o custo de um pacote postal? Tal custo é igual a uma taxa fixa de vezes a soma da altura, largura e comprimento do pacote:

	#define SOMA3(alt, larg, comp) alt + larg + comp
	...
	custo = taxa * SOMA3(a, 1, c);
