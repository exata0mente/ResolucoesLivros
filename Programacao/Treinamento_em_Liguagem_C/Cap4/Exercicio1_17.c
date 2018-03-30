//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 4 - Comandos de decisao
//Exercícios 1 a 17

1. Numa construcao if sem else, o que acontece se a condicao de teste for falsa?

    a) o controle procura pelo ultimo else do programa;
    b) nada;
    c) o controle passa para a instrucao seguinte ao if;
    d) o corpo do comando if eh executado

    Resposta: b) O if nao precisa ser obrigatoriamente acompanhado pelo else. Vamos a um exemplo:

    i = 0;
    if(i =! 0) printf("Diferente");
    printf("Igual");

    Veja neste caso, o i nao atende a condicao de teste, logo pulara direto para o printf("Igual"). Mas se o i atende-se a condicao?

    i = 1;
    if(i =! 0) printf("Diferente");
    printf("Igual");

    Faca voce mesmo este teste. O i atendendo a condicao, entraria no if e executaria a instrucao printf("Diferente"). Apos isso, encerraria o if e iria
    para a proxima instrucao, que eh printf("Igual"). Ou seja, imprimiria 'DiferenteIgual'.

    No livro: Pagina 84 descreve a sintaxe do if simples.

2. A principal diferenca entre o modo de operacao do comando if e de um laco while eh:

    a) A expressao de teste eh avaliada diferentemente;
    b) O corpo de um laco while eh executado sempre, e o do comando if apenas se a condicao de teste for verdadeira;
    c) O corpo de um laco while pode ser executado diversas vezes, enquanto o corpo de um if eh executado uma unica vez;
    d) a expressao de teste eh avaliada antes da execucao do corpo de um while e depois da execucao do corpo de um if;

    Resposta: O proprio enunciado auxilia na resposta. Laco da-se a entender como algo que repete, comando da-se a entender que eh uma unica instrucao.
    A resposta eh a c). O while faz a instrucao quantas vezes forem necessarias ate a condicao de teste ser atendida. Ja o if faz a instrucao apenas uma vez,
    atendendo o if se a instrucao for verdadeira.

    No livro: A pagina 85 exemplifica esta diferenca.

3. O else de um comando if-else eh executado quando:
    a) a expressao de teste do if for falsa;
    b) a expressao de teste do if for verdadeira;
    c) a expressao de teste do else for falsa;
    d) a expressao de teste do else for verdadeira;

    Resposta: Pegando o gancho da resposta da 1 e da 2 podemos facilmente dizer que o else eh executado quando o if tiver seu teste de condicao como falso.

    No livro: Pagina 88 descreve a sintaxe do if-else.


4. Num programa, o comando else fara par com qual if?

    a) o ultimo if com mesmos requisitos do else;
    b) o ultimo if sem else;
    c) o ultimo if de corpo nao envolto por chaves;
    d) o ultimo if de corpo nao envolto por chaves e sem else;

    Resposta: Tranquilamente podemos dizer que a resposta eh a b).

    No livro: A autora da um bom exemplo na pagina 93.


5. A vantagem de uma construcao switch sobre um if-else eh:

    a) a condicao default pode ser utilizada no switch;
    b) switch fornece clareza e facilidade de leitura;
    c) os casos de um switch sao avaliados de forma a permitir diversas escolhas;
    d) Varias instrucoes podem ser executadas em cada caso de um switch;

    Resposta: Segundo a autora, pagina 100, o comando switch "tem um formato limpo e claro". Com base nisso podemos dizer que a b) eh a resposta correta.

6. Verdadeiro ou falso: Toda construcao switch pode ser transformada em ninhos de if-else.

    Resposta: Verdadeiro.

7. Verdadeiro ou falso: Todo ninho de if-else pode ser transformado numa construcao switch.

    Resposta: Esta reciproca eh verdadeira. A pagina 102 traz o exemplo de um algoritmo de calculador usado com if-else sendo usado com switch.
    A legibilidade eh notavel.

8. Um comando break:

    a) termina o programa;
    b) deve ser utilizado seguindo as instrucoes de cada caso num switch;
    c) causa a saida imediata de um if;
    d) causa a saida imediata de um laco for, while ou do-while;
    e) causa a saida imediata de um switch;


    Resposta: d) Causa a saida imediata de um laco for, while ou do-while;

    No livro: Pagina 97 cita esta caracteristica de break.

9. Um comando continue:

    a) continua o programa apos uma pausa;
    b) desvia para o proximo caso de um switch;
    c) permite a repeticao continua de um laco;
    d) provoca a proxima iteracao de um laco;

    Resposta: d) provoca a proxima interacao de um laco;

    No livro: Pagina 98 cita esta caracteristica de continue.

10. Verdadeiro ou Falso: A instrucao goto eh um metodo primitivo de interromper um fluxo de um programa e eh desaconcelhado em
    programaca estruturada.

    Resposta: Verdadeiro, o goto eh o "patinho feio" da programacao. Devido o "salto" que ele pode dar em um programa ele se torna totalmente desaconcelhado
    para programacao, perde em muito a legibilidade.

11. Converta o fragmento seguinte para que utilize um laco for.

    int i = 0;
    loop: printf("%d", (i++));
    goto loop;

    Resposta: Este eh um tipico looping infinito, veja que nao tem condicao de teste para que o codigo pare. Desta forma, podemos fazer:

    int i = 0;
    for(; ;)
        printf("%d", (i++));


12. A substituicao do codigo:

    if(ch >= '0' && ch <= '9')
        continue;
    else
        printf("%c", ch);

    por

    (ch >= '0' && ch <= '9') ? continue : printf("%c", ch);

    esta errada. Explique.

    Resposta: Apesar do operador ternario ter bastante semelhanca com o if-else, ele eh apenas um operador. O continue trabalha em lacos, comandos, funcoes.

13. Substitua o uso do if-else pelo operador condicional.

    if(x > y)
        m = x;
    else
        m = y;

    Resposta: Lembrando que o operador ternario tem a seguinte sintaxe exp1 ? exp2 : exp3. Se exp1 for verdadeiro faça exp2, senao faça exp3. Com isso:

    x > y ? m = x : m = y;

14. A sintaxe do laço while eh semelhante a de um if. Se i for uma variavel inteira, os dois codigos seguintes provocarao o mesmo efeito?

    a) while(i = 8){
            printf("%d    %d    %d   ", i, i + 2, i + 3);
            i = 0;
        }

    b) if(i = 8)
            printf("%d    %d    %d   ", i, i + 2, i + 3);


    Resposta: Ah de se lembrar que o while eh um um laco e repete-se enquanto sua condicao de teste for verdadeira. Vejamos.

    while(i = 8)

    Aqui, apesar de ser um campo para teste pode se fazer operacoes, o que eh o caso. i = 8. Em uma validacao logica, qualquer valor diferente de 0
    entender-se-a como 1. Logo, a condicao de teste dara como verdadeira e fara a instrucao:

    printf("%d    %d    %d   ", i, i + 2, i + 3);
    i = 0;

    Veja que i = 0 mas quando volta ao teste while i recebe 8. Ou seja, o i, nao importa que atribuicao seja feita dentro do laco while, sempre tera
    o valor 8, logo sempre entrara no laco fazendo um loop infinito.

    Ja o if so fara o teste de condicao uma vez. Portanto nao ha o mesmo efeito nos dois lacos.


15. O codigo seguinte eh correto?

    switch (temp){
        case temp < 10:
            printf("Esta verdadeiramente frio!");
            break;
        case temp < 25:
            printf("Que tempo agradavel!");
            break;
        default:
            printf("Certamente esta quente!");
            break;
    }

    Resposta: Parece que tudo esta correto, exceto por um simples detalhe. Os case de switch recebem apenas constantes. Nao eh possivel colocar operacoes
    relacionais, operacoes aritmeticas ou algo do tipo. O que deve seguir o case eh um unico valor.

    No livro: Na pagina 100 a autora reforca que "Voce nao podera usar uma variavel ou uma expressao logica como rotulo de um caso dentro de um switch(...)"

16. Modifique o programa "xadrez.c" para imprimir um tabuleiro maior, que preencha a tela;


    /*xadrez.c*/
    /*Desenha um tabuleiro de xadrez*/

    #include <stdio.h>

    int main(){

        int lin, col;

        for(lin = 1; lin <= 8; lin++){
            for(col = 1; col <= 8; col++)
                if((lin + col) % 2 == 0)
                    printf("\xdb\xdb");
                else
                    printf("  ");
            printf("\n");
        }
    return 0;
    }

    Resposta: Simples, apenas modifique a condicao de parada do primeiro for e do segundo for.

17. Modifique o programa "diagonal.c" para que imprima quatro linhas: as duas que ja estao no programa; a terceira, uma linha vertical que passa pelo centro
    do retangulo; e a quarta, uma linha horizontal que passa pelo mesmo centro. As quatro linhas devem se cruzar no mesmo ponto.


    /*diagonal.c*/

    #include <stdio.h>

    int main(){

        int lin, col;

        for(lin = 1; lin < 25; lin++){ /*Passo da descida*/
             for(col = 1; col < 25; col++) /*Passo da largura*/
                if(lin == col) /*Estamos na diagonal?*/
                    printf("\xDB"); /*Desenha bloco escuro*/
                else
                    printf("\xB0"); /*Desenha bloco claro*/
            printf("\n"); /*Pula linha*/
        }

    return 0;
    }


