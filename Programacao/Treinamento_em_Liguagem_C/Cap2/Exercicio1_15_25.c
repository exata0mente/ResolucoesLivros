//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 2 - Operadores
//Exercícios 1 a 15

1. Quais dos seguintes operadores sao aritmeticos?

    a) +;
    b) &&;
    c) %;
    d) <;
    e) <<;

    Resposta: Podemos considerar "operador aritmetico" aquele que opera dois numeros quaisquer e retorna outro numero qualquer. Por exemplo, 2 + 4 resulta em
    6. 10 % 5 resulta em 0. O mesmo nao podemos dizer sobre os outros operadores. 5 && 8 resulta em erro pois o operador logico && compara true com false e
    retorna true ou false. O mesmo para o operador relacional <. 5 < 4 resulta em false, 5 > 4 resulta em true. Portanto a resposta eh a) e c)

    No livro: Para responder esta pergunta, voce pode olhar a tabela na pagina 54 ("Operadores: Avaliacao Logica ou Numerica")

2. Uma expressao:

    a) geralmente avalia um valor numerico;  /* Correto*/
    b) sempre ocorre fora de qualquer funcao; /* Nao necessariamente*/
    c) deve ser parte de uma instrucao; /*Nao necessariamente*/
    d) indica o estado de emocao do programador; /*¬¬*/
    e) sempre mistura simbolos com numeros inteiros; /*Podemos usar numeros reais, por exemplo*/

    Obs.: x = 1 + 3, eh uma expressao. x += 4.5 e uma expressao. x = 2 < 3 (neste caso x recebera 1 para true ou 0 para false)

    No livro: Esta eh uma questao que podemos responder com o nosso conhecimento previo. Todos os topicos do capitulo demonstram expressoes.

3. Supondo que todas as variaveis sao do tipo int, encontre o valor de cada uma das expressoes a seguir:

    a) x = (2+1)*6; /*Primeiro o que esta entre parenteses (2+1), resulta em 3. Depois a multiplicacao 3*6. Logo, x = 18*/
    b) y = (5+1)/2*3;/*Primeiro o parenteses (5+1). Teremos entao divisao e multiplicacao que tem a mesma precedencia. Nos casos de mesma precedencia
    vamos da esquerda para direita. Sendo assim teremos 6/2, que resulta em 3 e depois 3*3 que resulta em 9. Logo y = 9*/
    c) i = j=(2+3)/4; /*O operador de atribuicao "=" tem a menor precedencia, portanto sera a ultima operacao a ser realizada. Resolvemos primeiramente
    os parentes (2+3) que resulta em 5. Depois 5/4 que retorna 1. Lembrando que o '/' retorna o valor inteiro da divisao. Logo, i = j = 1*/
    d) a = 3+2*(b=7/2); /*Primeiro os parenteses. 7/2 da 3. b = 3. teriamos entao 2+3*b, resolve primeiro a multiplicacao. 3*2 resulta em 6, 6+3 da 9
    Logo a = 9*/
    e) c = 5+10%4/2; /*O '%' e '/'* tem mesma precedencia. Neste caso comecaremos da esquerda para a direita, entao 10%4 resulta em 2 (resto da divisao
    de 10 por 4. Este resultado divide por 2. 2/2 resulta em 1. 1 + 5 eh 6. Logo c = 6 */

    No livro: Para resolver este problema a tabela de precedencia na pagina 53 ajuda na resolucao do exercicio.

4. Reescreva a seguinte instrucao usando operador de incremento.

    numero = numero + 1;

    Resposta: Esta e facil... numero++;

5. Como sera interpretada a expressao "x+++y"?

    a)x++   +   y
    b)x     +   ++y
    Escreva um pequeno programa e verifique a interpretacao dada em seu compilador.

    Resposta: Avaliando a primeira resposta verificamos que x tem atribuicao dele mais 1 e depois a soma de y. Acontece que em a = x++ + y, primeiro teriamos
    o x somando a y e depois o incremento a x. Exemplo. Sendo x = 3 e y = 8, teriamos a = 3 + 8, a = 11 e depois x = 4. Este incremento eh pos fixado.
    Em b teriamos a = x + ++y. Primeiramente y ja receberia um incremento e depois seria feito a soma de x com y. Exemplo, usando os mesmo valores em a:
    y = 8 + 1, y = 9 e depois a = 3 + 9, a = 12.
    Conforme a propria autora relata no livro, a forma de interpretacao dependera do compilador. No meu compilador (Code::Block) o resultado foi 11.

6. Quais sao os valores de cada variavel nas seguintes expressoes?

    int a = 1, b = 2, c = 3, d = 4;

    a) a += b + c; /*a = a + (b + c) ; a = 1 + (3 + 2);
    Portanto, a = 6, b = 2, c = 3*/
    b) b *= c = d + 2; /*b = b * (c = d + 2); b = 2 * (c = 4 + 2); b = 2 * 6; b = 12;
    Portanto b = 12, c = 6, d = 4*/
    c) d %= a + a + a; /* d = d % (a + a + a); d = 4 % (1 + 1 + 1); d = 4 % 3;
    Portanto a = 1 e d = 1*/
    d) d -= c -= b -= a /* d = d - (c = c - (b = b - a)); d = 4 - (c = 3 - (b = 2 - 1)); d = 4 - (c = 3 - 1); d = 4 - 2;
    Portanto a = 1, b = 1, c = 2 e d = 2*/;
    e) a += b += c += 7; /* a = a + (b = b + (c = c + 7)); a = 1 + (b = 2 + (c = 3 + 7)); a = 1 + (b = 2 + 10); a = 1 + 12, a = 13;
    Portanto a = 13, b = 12, c = 10;*/

7. Os operadores relacionais sao usados para:

    a) combinar valores; /*Nao*/
    b) comparar valores; /*Sim, x > y verifica/compara se x eh maior que y e responde se eh verdade ou nao.*/
    c) distinguir diferentes tipos de variaveis; /*Nao*/
    d) trocar variaveis por valores logicos; /*Nao*/

    No livro: Caso tenha duvida, a pagina 50 reforca esta questao.

8. Quais das seguintes expressoes sao corretas?

    a) a == 'A' /*Correto*/
    b) a > b /*Correto*/
    c) a =< b /*Incorreto*/
    d) a > = b /*Incorreto*/
    e) -a = b /*Correto*/
    f) -a = = b /*Incorreto*/
    g) -a == b /*Correto*/
    h) a =! b /*Incorreto*/
    i) -85.2 >= (x * 45.3 + 32.34) /*Correto*/
    j) a + b + c == -x * -y /*Correto*/
    k) 'a' + 'b' != 16 + 'w' /*Correto*/

    Resposta: a, b, e, g, i, j, & k estao corretos.

    Obs.: Talvez voce esteja com duvida de porque 'a' + 'b' pode estar correto. Neste caso, o compilador entende 'a' como 97 e 'b' como 98. O mesmo serve
    para o 'w' que eh 119. Estes sao seus valores em decimal, conforme tabela ASCII. Logo a expressao ficaria 97 + 98 != 16 + 119; 195 != 135; true.

    Na tabela ASCII, 'A' eh 65 em decimal. Usando a resposta a), atribuindo para a variavel o valor de 65 (a = 65), e depois comparando-a com 'A', qual
    seria a resposta? Tente :).

9. Qual e o valor das seguintes expressoes?

    a) 1 > 2 /*O resultado sera 0 que refere-se a 'false'*/
    b) !(1 > 2) /*O simbolo de negacao '!' traz o oposto de um resultado. Seria 1 de 'true'. Poderiamos ver tambem como 1 < 2, que seria true*/
    c) 3 == 2 /* O resultado sera 0 'false' pois nao eh verdade que 3 eh igual a 2.*/
    d) !(-5) /*O operador unario '!' pode operar apenas em operacoes relacionais. Neste caso a resposta seria 0 'false' pois implicitamente admite-se que
    (-5) eh uma verdade ou seja 'true' 1 */
    e) 'j' != 'j' /*O resultado sera 'false' 0. Temos dois elementos iguais e um operador relacional de diferença. Ou seja, "Eh verdade que 'j' eh diferente
    de 'j'?. Nao, ambos sao iguais*/
    f) 'j' != 'j'+ 2 /*Aqui poderia dizer tambem que 106 != 106 + 2. A resposta sera verdadeira (1) pois 106 eh diferente de 108. Igualmente poderia ser
    'j' != 'l'*/
    g) 'j' != 'j' == 'j' /* Temos operadores de mesma precedencia logo devemos partir da esquerda para a direita. Primeiramente
    seria 'j' != 'j'. A resposta eh false, ou seja 0. Depois teriamos 0 == 'j', que seria a mesma coisa que 0 == 106, que tambem eh false. A resposta seria
    0.*/

10. Qual o valor de k?

    int k, j = 3;
    k = j == 3.

    Resposta: O operador de atribuicao, '=' eh o de menor precedencia. Teriamos primeiramente j == 3. A variavel j ja foi inicializada com 3, entao teriamos
    3 == 3. Obviamente isto eh uma verdade, logo, 1. Portato, k = 1.

11. Qual o valor de y?

    float y;
    int x;
    x = 22345;
    y = (float)(x);
    printf("%f", y);

    Resposta: y recebe x convertido em float. Lembrando, float eh ponto flutuante, logo aceita numeros "quebrados" e int aceita apenas valores "exatos".
    Neste caso estamos convertendo um valor exato em um valor quebrado sem altera-lo (acrescentar ou subtrair). A resposta entao sera 22345.000000 (Os
    6 zeros fazem parte da impressao padrao do float).


12. Indique o valor de cada uma das seguintes expressoes (consulte a tabela de precedencia dos operadores).

    int i = 1, j = 2, k = 3, n = 2;
    float x = 3.3, y = 4.4;

    a) i < j + 3 /* Operadores artimeticos tem maior precedencia do que operadores relacionais, ou seja, primeiro resolveremos a soma e depois a comparacao.
    j + 3, 2 + 3 , 5; i < 5, 1 < 5 (verdade), entao, o valor final da expressao sera 1, que refere-se a 'true'.*/
    b) 2 * i - 7 <= j - 8 /*O operador de maior precedencia entre esses eh o de multiplicao, entao primeiramente resolve-se o 2 * i, que resulta em 4. A
    expressao resultante fica 4 - 7 <= j - 8. A subtracao tem maior precedencia, neste caso, comecaremos da esquerda para a direita, ficando: -3 <= j - 8,
    -3 <= 2 - 8, -3 <= -6, logo, esta expressao eh verdadeira, resultado final 1.*/
    c) -x + y >= 2.0 * y /* O operador de maior precedencia eh o menos unario: -3.3 + 4.4 >= 2.0 * 4.4. Resolvemos a multiplicacao primeiro:
    -3.3 + 4.4 >= 8.8, agora a soma: 1.1 >= 8.8 e por ultimo a comparacao: Nao eh verdade que 1.1 eh maior ou igual a 8.8, logo a resposta eh 'false' que
    resulta em 0.*/
    d) x == y /* 3.3 nao eh igual 4.4, logo a resposta eh 'false' que resulta em 0.*/
    e) x != y /* Exatamente o contrario da questao acima. 3.3 eh diferente de 4.4, portanto a resposta eh 'true' que resulta em 1*/
    f) i + j + k == -2 * -k /* Vamos la. Primeiro de tudo, o operador menos unario: 1 + 2 + 3 == -2 * -3. Agora a multiplicacao: 1 + 2 + 3 == 6. A soma:
    6 == 6, e por ultimo a comparacao. 6 eh igual a 6, logo, a resposta sera 'true' que resulta em 1.*/
    g) !(n-j) /*Sempre, o que olhamos primeiro eh o parenteses mais interno, como neste caso ha apenas um, o resolveremos primeiro. 2 - 2 resulta em 0. Lembre-se
    o 0 eh a saida de uma funcao logica para um valor 'false'. '!' inverte a resposta, entao o contrario de 'false' eh 'true', entao o contrato de 0 eh 1. Resposta:
    1*/
    h)!n-j /* Pegadinha!, o operado operador unario '!' tem maior precedencia sobre o operador de subtracao. Entao primeiro resolve-se o !n. Neste caso, n = 2 e,
    para qualquer valor diferente de 0, o perador relacionado entende o valor como 1 de 'true' e o contrario de 'true' eh 'false' que eh 0. Exemplo: Se n = 'j',
    !n seria 0. Se n = "arroz com feijao", !n seria null, que eh o "simbolo" para o valor 0 na tabela ASCII. Continuando: 0 - 2, resposta -2.*/
    i)!x * !x /*Teriamos o mesmo que acima 0 * 0 que eh 0*/
    j) i && j && k /*Temos operadores de mesma precedencia, comecamos da esquerda para a direita. 1 && 2. O que seria o mesmo que 1 && 1 e, de acordo com a tabela
    da pagina 52,  o operador && retorna valor 1 se os dois operandos forem 1, o que eh este caso, entao 1 && 2 resulta em 1. Continuando, teriamos 1 && 3 que eh
    a mesma coisa que o anterior, logo a resposta sera 1.*/
    k) i || j - 3 && 0 /*Operadores relacionais tem menor precedencia de que operadores aritmeticos, resolvemos primeiro a subtracao. j - 3 resulta em -1. O &&
    (E logico) tem maior precedencia do que o || (OU logico), entao -1 && 0 eh o mesmo que 1 && 0. A condicao para que o operador logico && resulte 1 'true' eh
    que os operandos sejam 1 'true', neste caso temos 1 'true' e 0 'false', logo, resulta em 0. Teremos agora i || 0, que eh, 1 || 0. A condicao para que o
    operador logico || resulte 1 'true' eh que ao menos um dos operandos sejam 1 'true' o que acontece neste caso, logo, o resultado final da expressao sera
    1.*/
    l) i < j && 2 >= k /* operador relacional tem maior precedencia de que operador logico. Resolvendo da esquerda para a direita: i < j, 1 < 2, eh verdade, logo,
    esta expressao resulta em 1. Vamos para a outra expressao: 2 >= k, 2 >= 3, nao eh verdade, entao, 0. Por fim, 1 && 0 e vimos que isso resulta em 0.*/
    m) i < j || 2 >= k /* Igual a opçao l). No final iremos ter 1 || 0 e ja vimos que esta expressao resulta em 1.*/
    n) i == 2 || j == 4 ||  k == 5 /* Primeiro os relacionais, da esquerda para a direita: i == 2, 1 == 2, nao eh verdade, entao 0. j == 4, 2 == 4, tambem nao eh
    verdade, resulta em 0. k == 5, 3 == 5, 0. Teremos 0 || 0 || 0. Da esquerda para a direita. 0 || 0 resulta em 0 e 0 || 0 resulta tambem em 0.; Resposta final
    0.*/
    o) i = 2 || j == 4 ||  k == 5 /* Olha a pegadinha! veja que i recebe algum valor. Atribuicao eh a menor precedencia de todas. Poderiamos interpretar esta
    expressao assim i = (2 || j == 4 ||  k == 5). Seguindo os mesmos passos acima teriamos i = (2 || 0 || 0), da esquerda para a direita, 2 || 0 eh o mesmo
    que 1 || 0 que eh 1. 1 || 0 tambem eh 1. Portanto i = 1.*/
    p) x <= 5.0 && x != 1.0 || i > j /*Reforcando. Operador relacional tem maior precedencia do que operador logico. Atencao. <= tem maio precedencia do que
    !=. Da esquerda para direita: x <= 5.0, 3.3 <= 5.0, verdade, 1. i > j, 1 > 2, nao, 0. Resultante: 1 && x != 1.0 || 0. Agora, x != 1.0, 3.3 != 1.0, sim,
    sao diferentes, 1. Resultante: 1 && 1 || 0. || tem maior precedencia que &&. 1 || 0 resulta em 1. 1 && 1 resulta em 1. Resultado final: 1.*/

13. Escreva expressoes equivalentes sem usar o operador de negacao (!)

    a) !(i == j) /* (i != j)*/
    b) !(i + 1 < j - 2) /* (i + 1 > j - 2)*/
    c) !(i < j && n < m) /* (i > j || n > m)*/
    d) !(i < 1 || j < 2 && n < 3) /* (i > 1 && j > 2 || n > 3)*/

    Dica: O operador '!' eh um operador unario logico, ou seja, opera apenas em expressoes logicas. Eu nao consigo "inverter" a expressao 1 * 3 + 1 porque esta
    expressao eh aritimetica e nao retorna um resultado logico 'true' ou 'false'. Agora 1 * 3 > 1 posso "inverter" pois retonar verdadeiro ou falso, ficando
    1 * 3 < 1. Nisto que voce deve se basear para resolver este exercicio. Faça o teste colocando valores para as variaveis.

14. Qual o valor das seguintes expressoes?

    int a = 1, b = 2, c = 3;

    ++a/a&&!b&&c||b||-a+4*c>!!b;

    /*Que bagunca!!!. Vamos organizar esta expressao usando parenteses de acordo com a tabela de precedencia.*/

    ++a / a && !b && c || b || -a + 4 * c > !!b;    /*Primeiro o incremento, atencao! Eh um incremento pre-fixado, ou seja, o a recebe 1 antes de qlqr instrucao*/
    (a + 1) / a && !b && c || b || -a + 4 * c > !!b /*Vamos substituir os valores das variaveis*/
    (1 + 1) / 1 && !2 && 3 || 2 || -1 + 4 * 3 > !!2 /*Agora, '!' e '-'*/
    2 / 1 && 1 && 0 && 3 || 2 || -1 + 4 * 3 > 1     /*Note que a negacao de um numero qualquer eh 0 e a negacao de 0 eh 1, agora os operadores aritimeticos*/
    2 && 1 && 0 && 3 || 2 || -1 + 12 > 1            /*O os operadores aritmeticos de menor precedencia*/
    2 && 1 && 0 && 3 || 2 || 11 > 1                 /*Dos operadores que temos na expressao, os relacionais sao de maior precedencia*/
    2 && 1 && 0 && 3 || 2 || 1                      /* 11 eh maior que 1, ok?. O operador && tem maior precedencia que o ||*/
    1 && 0 && 3 || 2 || 1                           /* Lembrando: Um caractere qualquer que nao seja o NULL eh considerado 1 em uma avaliacao logica*/
    0 && 3 || 2 || 1
    0 || 2 || 1
    1 || 1
    1                                               /* Esta expressao toda ira virar 1.*/

15. A expressao seguinte eh obscura. Coloque parenteses para torna-la clara:

    a = x < y ? x < z ? x : z : y < z ? y : z;
    a = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);

    Obs.: Este eh um exercicio um pouco mais complicado. O operador ternario tem como sintaxe exp1 ? exp2 : exp3, ou seja, todo operador ternario tem que ter
    obrigatoriamente duas saidas. O codigo diz mais ou menos o seguinte:
    Se x < y eh true (1) faca:
        Se x < z eh true (1) faca:
            x;
        Senao:
            z;
    Senao:
        Se y < z eh true(1) faca:
            y;
        Senao:
            z;

25. A funcao scanf() retorna o numero de leituras feitas com sucesso. Considereo seguinte programa:

	#include<stdio.h>
	#include<stdlib.h>

	int main()
	{
		int i, j, k;
		printf("%d\n", scanf("%d %d %d", &i, &j, &k));
		return 0;
	}

