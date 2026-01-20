## WHERE

2025-12-15 08:33

**Subjects**: [[sql]] | [[sqlite]]

**Source**: <a href="https://novatec.com.br/livros/introducao-sql/">Introdução à Linguagem SQL: Abordagem prática para iniciantes</a>

**Level**: Beginner

---

## Write-Up

\chapter{WHERE}

A instrução `\mintinline{MySQL}{WHERE}` no SQL serve para que a gente possa realizar filtragens em resultados de consulta com base em condicionais. O `\mintinline{MySQL}{WHERE}` seria uma espécie de `\mintinline{C}{IF}` das linguagens de programação como C, Python etc. 

\section{Questões Problema Para o Uso do WHERE}

A funcionalidade de filtragem do `\mintinline{MySQL}{WHERE}` é de uso fundamental no contexto geral corporativo e de manipulação de dados. Esse uso fundamental advém da ideia de que, se estamos manipulando bancos de dados que contém milhares de tabelas e nessas tabelas há milhares de bancos de dados, como vamos visualizar o que precisamos e/ou queremos dos dados contidos? Um exemplo seria o seu chefe pedir para que levasse para a mesa dele todos os funcionários que recebem menos que um valor X, se a empresa tem centenas de milhares de funcionários, seria viável mesmo olhar o salário de um por um para realizar essa comparação? Acredito que entre o poder computacional de cálculo de um computador e sua comparação de forma "ingênua", vamos preferir que o computador processe os dados e retorne para nós o resultado.

\section{Filtragem com Números}

Como explicado anteriormente, o condicional `\mintinline{MySQL}{WHERE}` no SQL serve para que a gente faça filtragens de registros em bancos de dados conforme nosso interesse de negócio ou com base no que precisamos manipular os dados. Primeiro, vamos nos contextualizar do funcionamento do `\mintinline{MySQL}{WHERE}` com sua sintaxe:

\begin{verbatim}
SELECT <\columns> FROM <\table> WHERE <\conditional columns>
\end{verbatim}

O `\mintinline{MySQL}{WHERE}` em si por essência ele precisa de algum dado para manipular com base na consulta do usuário. Claramente, não é possível realizar condicionais em um banco de dados X pensando em dados Y. Vamos imaginar um exemplo que a gente queria filtrar da tabela FUNCIONARIOS todos aqueles que recebem menos que 5000.

\begin{verbatim}
SELECT * FROM funcionarios WHERE salario < 5000
\end{verbatim}

Neste exemplo hipotético, ele retornará todos os dados contidos na tabela dos quais correspondem com a condição que a gente colocou. Com essa condicional de `\mintinline{MySQL}{WHERE}`, poderiamos realizar vários tipos de operações, sendo: aumento do salário, desconto de 10\% etc. Exemplo:

\begin{verbatim}
SELECT fname, lname, salary * 1.10 FROM funcionarios WHERE salario < 5000
\end{verbatim}

Realizando assim um aumento de 10\% do salário dos funcionários.

\section{Instrumentos de Comparação}

Na linguagem SQL, temos mecanismos de comparação de valores para verificar se são (maiores/iguais/menores/diferentes/etc.). Com base nessas verificações, temos duas divisões de comparativos cruciais a se fazer: Comparação de Números e Comparação de Textos

\subsection{Comparação de Números}

Como qualquer comparação matemática, podemos comparar valores válidos de modo que a gente possa obter resultados baseados no nosso interesse. No SQLite e em outros bancos de dados que utilizam Linguagem SQL (Algumas Exceções em: Microsoft SQL Server e ORACLE). O padrão ANSI para comparação de valores são os seguintes:

\begin{itemize}
	\item Equiparidade de Valores ("=")
		\begin{verbatim}
			SELECT * FROM empresas WHERE faturamento = 5000000
		\end{verbatim}
	\item Desigualdade de Valores ("<>","!=")
		\begin{verbatim}
			SELECT * FROM funcionarios WHERE salarios != 2000
		\end{verbatim}
		Ou Até mesmo 
		\begin{verbatim}
			SELECT * FROM funcionarios WHERE salarios <> 2000
		\end{verbatim}
	\item Comparação de valores (">=","<=",">","<")
		\begin{verbatim}
			SELECT * FROM funcionarios WHERE salarios > 2500
		\end{verbatim}
		\begin{verbatim}
			SELECT * FROM funcionarios WHERE salarios < 2500
		\end{verbatim}
\end{itemize}

Podemos manipular intervalos de valores ou mesmo verificar se valores estão em um intervalo etc.

\subsubsection{BETWEEN}

O operador `\mintinline{MySQL}{BETWEEN}` ele nos poupa digitação e várias comparações, já que ele faz as seguintes operações: `\mintinline{MySQL}{V1 >= X AND V1 <= Y}`. Sendo assim, ele faz um intervalo de valores inclusivos, sendo assim, os dois números que a gente comparar vai estar inclusos. Exemplo de uso:

\begin{verbatim}
	SELECT * FROM funcionarios WHERE salary between 5000 and 20000
\end{verbatim}

Nesse exemplo, basicamente estamos pedindo resultados de onde o salário está contido dentro do intervalo especificado.

\subsubsection{IN}

O operador `\mintinline{MySQL}{IN}` ele nos poupa de realizar várias operações em série de `\mintinline{MySQL}{OR}`. Isso quer dizer que, ao realizarmos o uso do `\mintinline{MySQL}{IN}` ele vai apenas comparar os valores em uma lista. Exemplo de uso:

\begin{verbatim}
	SELECT * FROM funcionarios WHERE mesnasicmento IN (2,4,5,7,8)
\end{verbatim}

Estamos realizando uma consulta de mesnascimento dos funcionários que estejam nesse intervalo de números.

\subsection{Comparação de Textos}

A comparação de textos no SQL funciona de forma semelhante com a comparação de valores numéricos, tendo apenas poucas diferenças. Vamos supor que precisamos em um banco de dados achar pessoas que se chamam "PEDRO" e com isso, visualizar os dados que estão atrelados a "PEDRO".

Entretanto, diferente da lógica matemática de comparação, utilizamos "LIKE" que é algo como "SEMELHANTE/IGUAL" na língua portuguesa. Exemplo: 

\begin{verbatim}
	SELECT * FROM funcionarios WHERE nome like 'PEDRO%'
\end{verbatim}

Neste exemplo acima, estamos fazendo a consideração com que o nome "PEDRO" seja o primeiro nome da pessoa. O wildcard "%" é um atalho na manipulação de texto que pede com que venha qualquer coisa depois de tal local que foi colocado. (Cuidado para não confundir com módulo, operador esse para obter resto da divisão).

Temos outro wildcard em SQL para que a gente possa achar um pattern conforme o que a gente está pesquisando. Exemplo:

\begin{verbatim}
	SELECT * FROM funcionarios WHERE nome like 'P_D%'
\end{verbatim}

Neste exemplo, o wildcard em questão é o "\_" que está sendo utilizado para indicar que a pessoa quer qualquer tipo de caractere neste campo, sendo assim, caso haja resultados com letras diferentes neste lugar, ele vai retornar.

Podemos também fazer comparação de equivalência caso a gente queira algo muito específico na nossa consulta, sendo assim: 

\begin{verbatim}
	SELECT * FROM funcionarios WHERE nome = "Pedro''
\end{verbatim}

Neste exemplo em específico, estamos pedindo para que retorne resultados específicos apenas que contenham o nome "PEDRO"

\begin{verbatim}
	SELECT * FROM funcionarios WHERE nome != "Pedro''
\end{verbatim}

Estamos pedindo nesse exemplo resultados que sejam diferentes do nome "PEDRO" conforme explícito anteriormente.

\section{Lógica Booleana no SQL}

AND, OR  e NOT são instruções que precisamos utilizar nas condicionais para estruturar logicamente. Isso quer dizer que, se precisarmos consultar um ou mais verificações em uma tabela, esses comandos vão ser úteis. 

\begin{figure}[h!]
	\begin{center}
		\begin{tabular}{ |c|c|c|c| } 
			\hline
			 INSTRUCTION & V1 & V1 & RESULT \\
			 AND & 1 & 1 & $1 * 1  = 1$  \\
			 OR & 1 & 0 & $1 + 0  = 1$  \\
			 NOT & 1 & X & $!1=0$  \\ 
		 \hline
		\end{tabular}
	\end{center}
\end{figure}

\subsection{AND}

Começando pela operação `\mintinline{MySQL}{AND}`, ele nos auxilia a realizar uma consulta na qual vai realizar duas comparações de modo que se caso forem verdadeiras, ele retorna $TRUE$.

Vamos imaginar a hipotética de que a gente precise consultar os dados dos funcionários que contém mais de 30 anos E que ganham mais de 5000 mil reais

\begin{verbatim}
SELECT * FROM funcionarios WHERE idade > 30 AND salario > 5000
\end{verbatim}

Assim, vamos imaginar nesse caso que, se caso houver algum registro correspondente a essa consulta SQL, a Lógica por trás vai ser basicamente: $1*1=1$ em todos os registros que correspondem a essa condição. Observação: A instrução AND na algebra booleana é uma multiplicação, sendo assim, o resultado depende diretamente das duas serem verdadeiras

\subsection{OR}

A operação `\mintinline{MySQL}{OR}` ela funciona diferente da `\mintinline{MySQL}{AND}`, já que a operação `\mintinline{MySQL}{OR}` considera apenas um fator para que a sentença seja verdadeira. Sendo assim, se eu realizar uma consulta que eu quero funcionários que tenham mais de 30 anos OU que tenham salários superiores que a média, isso quer dizer que ele vai levar em consideração que se uma retornar falso e a outra verdadeiro, ele vai retornar valores correspondentes sem invalidar a sentença inteira. Ex:

\begin{verbatim}
SELECT * FROM funcionarios WHERE idade > 30 OR salario > (select avg(salarios) from funcionarios)
\end{verbatim}

Observação: A função avg() ela realiza um cálculo de média dos valores contidos em salarios não nulos e o select feito é uma sub-query, assunto esse que vai ser explorado mais a frente.

\subsection{NOT}

Como visto no inicio, a operação `\mintinline{MySQL}{NOT}` ela realiza uma inversão de valores, sendo assim, qualquer valor que corresponda a TRUE vira FALSE e vice-versa. Sua aplicabilidade no contexto de SQL pode ser interessante, já que vamos supor que queremos todos os funcionarios que não tem idade superior a 20. Exemplo:

\begin{verbatim}
SELECT * FROM funcionarios WHERE NOT idade > 20
\end{verbatim}

Ela basicamente inverte os valores, sendo assim, a lógica conceitual da coisa quando se é aplicado `\mintinline{MySQL}{NOT}`, a operação a seguir é feita:

\begin{verbatim}
	SELECT * FROM funcionarios WHERE idade < 20
\end{verbatim}

\section{Compreendendo e Manipulando o NULL}

É completamente redundante, mas o valor NULL em si nem é um valor. Para compreender o NULL, basta entender que ele é o vazio por completo que nem mesmo ele si encaixa em um valor exato, já que nem mesmo quando vamos fazer comparação, o NULL é igual a NULL. 

Tendo isso em mente, em um banco de dados é preferível não conter dados com tipo NULL já que dependendo da regra de negócio, é um valor consideravelmente irrelevante. Entretanto, as vezes pode ser que haja um valor NULL devido ao usuário não ter preenchido o campo na hora de seu registro e assim vai.

Podemos manipular os dados nulos de modo do que nos interesse. Vamos supor que a gente precise pegar dados dos funcionários onde que o campo de CPF não seja nulo, talvez pelo fato de que precisamos manipular os dados de funcionários ativos na empresa e não os que não estão.

\begin{verbatim}
	SELECT * FROM funcionarios WHERE cpf is not null;
\end{verbatim}

Basicamente estamos indo pesquisar dados dos quais o campo de CPF não seja nulo. Podemos também manipular esses NULL de modo que eu queira visualizar os funcionários que estão com o campo nulo.

\begin{verbatim}
	SELECT * FROM funcionarios WHERE cpf is null;
\end{verbatim}

Pode ser que não seja tão útil manipular NULL, mas podemos converter dados nulos para algum valor que a gente precise para entregar para um relatório ou algo semelhante. Por exemplo, vamos supor que a gente queira visualizar os dados dos funcionários que recebam 10000:

\begin{verbatim}
	SELECT * FROM funcionarios WHERE coalesce(salary,0) < 10000;
\end{verbatim}

Basicamente, aqui ele converte os valores que são nulos para "0" e se caso não forem nulos, ele manterá o valor e vai apenas comparar com o outro valor.

