//Projeto de Banco de Dados 6ed. - Carlos Alberto Heuser
//Capítulo 1 - Introdução
//Exercícios 1 a 12
//Acesse nossa página de resolução dos exercícios: http://exata0mente.blogspot.com.br/

Exercício 1. Dê um exemplo, diferente do apresentado no início do capítulo, de redundância não controlada de dados.

	Resposta: A redundância não controlada de dados é quando um arquivo que recebe o mesmo tipo de informação está em vários computadores mas não estão sincronizados. Um exemplo cotidiano que podemos dar é uma lista de compra. Imagine que a mãe faz uma lista de compra e o pai também e devido a uma discussão eles não "sincronizaram" suas listas. A bagunça está feita! Com certeza haverá repetição do arroz, feijão, tempero, açucar, etc. 

Exercício 2. Dê um exemplo, diferente do apresentado no início do capítulo, de redundância contralada de dados. Explique quais os benefícios que a redundância controlada de dados tem neste caso em específico.

	Resposta: A redundância controlada é quando um arquivo está com diferentes usuários mas o sistema tem o conhecimento disso e faz a devida sincronização. Aproveitando o exemplo acima, imagine que o filho mais velho decidiu intermediar no conflito caseiro e pediu que a mãe e o pai desse-lhe as listas. Ele sabe que o pai e a mãe terão repetido alguns itens mas outros não. Esta é uma redundância que estará controlada.

Exercício 3. Enumere as principais diferenças entre o desenvolvimento de software com arquivos convencionais e o desenvolvimente de software com SGBD.

	Resposta:

	Arquivos convencionais: 
		1. Redundância não controlada de dados
			1.1. Redigitação
			1.2. Incosistência
		2. Arquivos são tratados em locais diferentes sem interligação
		3. Não há restrições bem definidas quando aos dados a serem colocados
		4. O acesso depende da disponibilidade do usuário
		5. Alto risco de perda total do arquivo.

	SGBD:
		1. Redundância controlada
		2. Os arquivos estão interligados pelo SGBD
		3. Restrições de dados não podem ser ignoradas
		4. Os dados estarão em um servidor ou na nuvem
		5. Há módulos de backup que garantem a segurança dos dados

	O compartilhamento dos dados para evitar os problemas do uso de arquivos convencionais deu origem aos SGBDs.

Exercício 4. Descreva alguns fatores que levam alguém a preferir o uso de arquivos convencionais ao uso do SGBD. Descreva alguns fatores que levam alguém a preferir o uso de SGBD ao uso de arquivos convencionais.

	Resposta: 

	Arquivos convencionais:
		1. Baixo (ou nenhum) custo
		2. Manutenção fácil
		3. Indicado quando há pouquíssimos usuários
		4. Poucos dados
		5. Não precisa de muito conhecimento em computação

	SGBD:
		1. Diversas funcionalidades
		2. Armazena muitos dados
		3. Admite vários usuários
		4. Trata as redundâncias
		5. Restringe certos dados

Exercício 5. Defina, sem retornar ao capítulo acima, os seguintes conceitos: banco de dados, sistema de gerência de banco de dados, modelo de dados, esquema de dados, modelo conceitual, modelo lógico, modelagem conceitual e projeto lógico. Verifique a definição que você fez contra a apresentada no capítulo.

	Resposta:

	Banco de dados: Compartilhamento de diversos dados em um único repositório para acesso de vários usuários.

	Modelo de dados: Definição do tipo de dados que cada objeto poderá receber.

	Esquema de dados: Resultado do uso da linguagem de modelo de dados para representar um modelo de dados.

	Modelo conceitual: Representação do banco de dados em forma de conceitos. Geralmente utilizado para boa integração e entendimento do usuário-cliente.

	Modelo lógico: Representação do banco de dados em linguagem mais técnica. Utilizado para integração e entendimento com a equipe de BD. Também tem relação com o SGBD que 		será utilizado no projeto.
	
	Modelagem conceitual: Uso do modelo conceitual já em uma linguagem de banco de dados. Geralmente em um modelo de entidade-relacionamento.

	Projeto lógico: Parte em que a modelagem conceitual começa a ser estrutrada para o SGBD. Geralmente o modelo é estrutrado em tabelas ou pseudocódigo.


Exercício 6. Um técnico em informática juntamente com um futuro usuário definem formalmente que informações deverão estar armazenadas em um banco de dados a ser construído. O resultado deste processo é um modelo conceitual, um modelo lógico ou um modelo físico?

	Resposta: Modelo conceitual. Quando o usuário participa do processo, devido a possibilidade do não ter um conhecimento sólido em computação, usa-se este modelo pois 		nele é abstraído complexidades como estrutura dos dados, restrições, tipos, relacionamentos, etc. Aqui o técnico tenta transformar a empresa do usuário em um banco de 		dados.

Exercício 7. Um programador recebe um documento especificando precisamente a estrutura de um banco de dados. O programador deverá construir um software para acessar o banco de dados através de um SGBD conforme esta estrutura. Esse documento é um modelo conceitual, um modelo lógico ou um modelo físico?

	Resposta: Modelo físico. Receber o documento com a estrutura significa que o processo já passou pelo modelo conceitula e lógico. Este modelo é o de nível mais baixo, ou 		seja, mais próximo do computador.

Exercício 8. UML (Unified Modeling Language) é um conjunto de conceitos usados para modelar um software, que, entre outras coisas, serve para modelar bases de dados no nível conceitual. UML é uma abordagem de modelagem de dados ou um modelo de dados?

	Resposta: Modelagem de dados. 

Exercício 9. A definição do fator de bloco de um arquivo faz parte do modelo conceitual, do modelo lógico ou do modelo físico?

	Resposta: (Fator de bloco: Quantidade de registros que cabe em um bloco) - Modelo lógico.

Exercício 10. Dê um exemplo de aplicação de banco de dados. Defina quais seriam alguns arquivos que o banco de dados iria conter e quais os tipos de objetos da organização que neles estariam armazenados.

	Resposta: Lista de compras caseira. Os arquivos poderiam ser: Alimentos, Higiene e Utensílios. Os objetos seriam Descrição, Quantidade, Valor.

Exercício 11. A definição de tipo de um dado (numérico, alfanumérico, ...) faz parte do modelo conceitual, do modelo lógico ou do modelo físico?

	Resposta: Modelo lógico.

Exercício 12. Qual a diferença entre a redundância de dados controlada e a redundância de dados não controlada? Dê exemplos de cada uma delas.

	Resposta: A redundância de dados controlada é quando há diversos arquivos, que recebe basicamente os mesmos tipos de dados, em diversos locais e o software tem o 		conhecimento desta redundância e garante a sincronia dos dados. Já a redundância não controlada é o oposto. Não há um sistema que garanta a sincronia, o que deixa isto 	a cargo do usuário final. Os exemplos podem ser retirados do exercício 1 e 2
