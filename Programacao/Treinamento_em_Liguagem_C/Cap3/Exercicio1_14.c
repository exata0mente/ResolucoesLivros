//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 3 - laços
//Exercícios 1 a 14

1. Um laço for com uma unica instrucao termina com:

    a) virgula;
    b) chave de abertura;
    c) chave de fechamento;
    d) ponto-e-virgula;

   Resposta: Quanto houver apenas e somente apenas uma instrucao ou ate nenhuma instrucao, deve conter ponto-e-virgula. d)

   No livro: Pagina 67 auxilia nesta resposta.

2. Um laco while com uma unica instrucao termina com:

    a) virgula;
    b) chave de abertura;
    c) chave de fechamento;
    d) ponto-e-virgula;

    Resposta: Igual a questao 1. Necessita ter ponto-e-virgula para uma instrucao. d)

    No livro: Pagina 73

3. Um laco do-while com uma unica instrucao termina com:

    a) virgula;
    b) chave de abertura;
    c) chave de fechamento;
    d) ponto-e-virgula;

    Resposta: A similaridade com o comando while tambem absorve esta caracteristica. Se houver uma unica instrucao, basta apenas o ponto-e-virgula
    d)

4. Um laco for de multiplas instrucoes termina com:

    a) virgula;
    b) chave de abertura;
    c) chave de fechamento;
    d) ponto-e-virgula;

    Resposta: Quando ha necessidade de varias instrucoes para um laco, usamos "bloco de instrucao" que nada mais eh do que as instrucoes/operacoes
    entre as chaves.

A questao 5 e 6 tem a mesma resposta da questao 4. Sempre que precisar em um laco varias operacoes faz-se necessario o uso de chaves.

7. As tres expressoes que compoem a expressao do laco for sao separadas por _______.

    Resposta: As tres expressoes ao qual o livro refere-se eh inicializacao - teste - incremento. Para separa-las precisa usar o ponto-e-virgula.
    Lembrando = for(i = 0; i < 5; i++); inicializacao; teste; incremento. Podemos recordar tambem que nos tres passos podemos fazer mais de uma operacao
    separando-as por virgula = for(i = 0, j = 15; i <= j; i++, j++).

    No livro: A pagina 62 faz esta explicacao.

8. Multiplas exprecoes de incremento na expressao do laco for sao separadas por _____.

    Resposta: Acabei respondendo no exercicio anterior. Sao separadas por virgula.

9. Um laco do-while e util quando seu corpo:

    a) nunca eh executado;
    b) pode nunca ser executado;
    c) deve ser executado pelo menos uma vez;
    d) termina apos a primeira execucao;

    Resposta: O comando do-while faz seu teste apenas no final da primeira instrucao. Ou seja, quando queremos primeiro saber algo para depois ter uma acao,
    o do-while eh a melhor escolha. Opcao c).

    No livro: Na introducao ao laco do-while na pagina 75 a autora reforca esta ideia.

10. A expressao de inicializacao de um laco for:

    a) nunca eh executada;
    b) eh executada uma unica vez a cada iteracao;
    c) eh executada enquanto o laco nao termina;
    d) eh executada uma vez antes do laco ser iniciado;

    Resposta: A inicializacao no laco for, atribui um valor de "start" a uma variavel, por exemplo, "Neste for, minha variavel i vai iniciar em 0", esta
    inicializacao ocorre apenas uma vez no inicio do laco e seu valor sera modificado apenas com a expressao de incremento. Logo, a resposta correta eh
    a opcao d)

11. Verdadeiro ou Falso: Os dois fragmentos seguintes produzem o mesmo resultado.

a) for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            printf("%d", i + j);

b) for(i = 0, j = 0; i < 10; i++)
        for(; j < 10; j++)
            printf("%d", i + j);


    Resposta: Nao se enganem! Sao totalmente diferentes. Vamos analisar cada um.

    a) O primeiro for inicializa o i = 0 e parte para a proxima instrucao;
       O segundo for inicializa o j = 0 e parte para a proxima instrucao;
       O printf() sera repitido ate o j < 10 ser falso.
       Apos j < 10 falso, i sera incrementado (i++) e validado (i < 10). Caso verdadeiro ira para a proxima instrucao.
       O segundo for sera novamente inicializado com j=0.

       Resumindo, para cada i, o j recebera 0 e fara a proxima expressao, isto resultara em 100 printf(); Lembrando que a inicilizacao do for ocorre apenas
       uma vez antes do laco comecar. O i sera inicializado uma vez e o j sera inicializado 10 vezes.

    b) O primeiro for inicializa i = 0 e j = 0;
       O segundo for nao inicializa nenhuma variavel, ou seja, mantem o valor de o valor de j;
       Acontece que quando j++ resultar em j = 0, o teste do segundo for sempre vai ser falso e por isso sera "pulado".

       Resumindo, o printf() ocorrera 10 vezes apenas.

12. Qual eh o erro deste programa?

    /*Soma dos quadrados*/

    #include<stdio.h>

    int main(){

        int i;

        for(i = 1; i < 10; i++){

            int soma = 0;
            soma += i*i;

        }

        printf("%d\n", soma);

    return 0;
    }

    Resposta: Aparentemente o codigo esta correto. Nao ha erro de sintaxe, os ponto-e-virgulas estao corretos, a biblioteca esta ok e a operacao matematica
    ocorre de forma correta. Agora pense o seguinte: Se apagassemos o laco for, como ficaria o programa? Veja:

    #include<stdio.h>

    int main(){

        int i;

        printf("%d\n", soma);

    return 0;
    }

    Achou o erro? Declaramos a variavel i e imprimimos a variavel soma, mas a variavel soma nao esta declarada! Este eh justamente o erro. Quando declaramos uma
    variavel dentro de um bloco esta variavel sera util enquanto este bloco estiver sendo usado, quando o bloco acaba, a variavel eh "destruida". A variavel soma
    eh declarada dentro do for e quando o for acaba ela acaba tambem. Para corrigir este programa a declaracao da soma deveria ser antes do for:

    /*Soma dos quadrados*/

    #include<stdio.h>

    int main(){

        int i;
        int soma = 0;

        for(i = 1; i < 10; i++){

            soma += i*i;

        }

        printf("%d\n", soma);

    return 0;
    }

13. Qual eh a saida do programa seguinte?

    #include<stdio.h>

    int main(){

        int a;

        for(a = 36; a > 0; a /= 2)
            printf("%d\t", a);
        printf("\n");

    return 0;
    }

    Resposta: Veja este passo a passo.

    a = 36; a > 0 ? Sim; printf("36\t"); a = 36 / 2;
    a = 18; a > 0 ? Sim; printf("18\t"); a = 18 / 2;
    a =  9; a > 0 ? Sim; printf(" 9\t"); a =  9 / 2;
    a =  4; a > 0 ? Sim; printf(" 4\t"); a =  4 / 2;
    a =  2; a > 0 ? Sim; printf(" 2\t"); a =  2 / 2;
    a =  1; a > 0 ? Sim; printf(" 1\t"); a =  1 / 2; /*A divisao inteira de 1 por 2 eh 0.*/
    a =  0; a > 0 ? Nao; printf("\n");

    Isto eh o que acontecera dentro deste for e a saida sera:

    36  18  9   4   2   1

14. Este programa imprime uma letra I bem grande na tela:

    /*Imprime a letra I*/

    #include<stdio.h>

    int main(){

        int i = 0;

        printf("IIIIIII\n");

        while(i < 17){

            printf("  III\n");
            i++;
        }
        printf("IIIIIII\n");
        printf("\n");

    return 0;
    }

    a) modifique o programa para que utilize um laco for no lugar do laco while;
    b) construa um programa similar que imprima a letra E;
    c) responda: nesse exemplo, qual dos lacos se adapta melhor; Por que?

    Resposta a):

    /*Substituindo apenas o while*/
    #include<stdio.h>

    int main(){

        int i = 0;

        printf("IIIIIII\n");

        for(; i < 17; i++)      /*Como o i ja esta sendo inicializado, deixei a inicializacao sem instrucao*/
            printf("  III\n");  /*Retirei o i++ pois este ja ocorre no instrucao de incremento do for*/

        printf("IIIIIII\n");
        printf("\n");

    return 0;
    }

    Resposta b)

    /*Letra E com o while*/
    #include<stdio.h>

    int main(){

        int i = 0, j;

        while(i < 3){
            printf("IIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
            j = i == 2 ? 17 : 0;
            while(j < 17){
                printf("III\n");
                j++;
            }
            i++;
        }

    return 0;
    }


    O primeiro while forma a parte horizontal da letra, o segundo while forma a parte vertical.


    /*Letra E com o for*/
    #include<stdio.h>

    int main(){

        int i, j;

        for(i = 0; i < 3; i++){
            printf("IIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
            j = i == 2 ? 17 : 0;
            for( ;j < 17; j++)
                printf("III\n");
        }
    return 0;
    }


    O mesmo que acontece com o while acontece com o for.

    Resposta c) Para este exemplo o laco for foi muito melhor pois usou bem menos instrucoes que o while. No while eu preciso iniciar e incrementar
    "manualmente", ja no for faco isto no comeco do laco apenas. Instrucoes no for: 5, instrucoes no while: 7.


