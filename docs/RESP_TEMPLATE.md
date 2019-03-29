## Descrição

Este template indicará como deverá ser as respostas dos exercícios que você irá realizar.

## Sobre a localização do arquivo

Pensando em manter um padrão no nosso repositório, iremos estabelecer a seguinte estrutura de diretórios

**Topico/Nome_Livro/Cap_`n`/ex_`m`.`k`**

onde:

* `n`: é o número do capítulo
* `m`: é o número do exercício
* `k`: é a extenção (veja mais detalhes no tópico abaixo)

## Sobre a extenção do arquivo

É importante que a extensão do arquivo esteja de acordo com o a linguagem (se aplicável) do exercício que esteja respondendo. Por exemplo, se estiver resolvendo um exercício de algoritmo em C então o arquivo dever ser `exercicio_n.C`, algo em R então `exercicio_n.R` e assim por diante.

Caso seja um exercício conceitual, usar a extenção `.md`. Desta forma vamos usufruir do *[linguist library](https://help.github.com/en/articles/about-repository-languages)* do GitHub e melhorar nossa posição nos mecanismos de busca de repositórios.

## Sobre a descrição do exercício

Vamos manter as informações pertinentes ao exercício para que mais pessoas possam encontrá-los. Façamos da seguinte forma:

*A resposta deverá conter um no início do código as informações abaixo como comentário.*

```c
/*
nome_livro:     Inserir o nome do livro
nome_autor:     Inserir o nome do(a) autor(a)
respondido_por: Inserir seu usário e uma rede social (se quiser)
respondido_em:  Inserir a data do envio da resposta.
revisado_por:   Caso esteja revisando um exercício já respondido
revisado_em:    Inserir data do envio da revisão.

Capítulo X - nome_do_capitulo_correspondente

  Exercicio Y - Escreva uma mensagem de Olá Mundo na saída padrão

links: Caso tenha alguma rede que queira divulgar
*/
```
É importante que estas informações estejam em um trecho comentado

## Boas práticas

É sempre bom reforçar algumas boas práticas, principalmente em exercícios que seja referentes a programação:

* Idente seu código.
* Comente seu código sem medo.
