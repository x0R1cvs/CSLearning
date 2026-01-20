## GROUP BY e ORDER BY

2025-12-23 18:31

**Subjects**: [[sql]] | [[sqlite]]

**Source**: <a href="https://novatec.com.br/livros/introducao-sql/">Introdução à Linguagem SQL: Abordagem prática para iniciantes</a>

**Level**: Beginner

---

## Write-Up

\chapter{GROUP BY e ORDER BY}

Neste capítulo vamos explorar o `\mintinline{MySQL}{GROUP BY}`, `\mintinline{MySQL}{ORDER BY}` e funções que derivam delas.

\section{Agrupando e Ordenando registros}

Quando agrupamos dados, estamos ao mesmo tempo separando... Isso é simples de entender, já que dependendo dos dados que estamos lidando, precisamos necessariamente nos separar de dados nulos.

Entretanto, quando estamos trabalhando com dados gerais sem ter a distinção de serem nulos ou não, podemos executar um código para poder visualizar tudo que há em uma tabela sem distinção, apenas visando a quantidade de registros:

\begin{verbatim}
SELECT count(\*) from \<TABLE\>;
\end{verbatim}

Executando a função `\mintinline{MySQL}{COUNT(COLUMNS_FIELD)}`, ela realiza a contagem de determinado campo de uma tabela. O exemplo acima, ele retorna a quantidade total de registros de uma tabela.

Imagine que eu precise realizar uma consulte que retorne a quantidade de times do brasileirão que contém mais de 50 títulos totais:

\begin{verbatim}
SELECT count(\*) FROM BRASILEIRAO WHERE titulos_totais > 50;
\end{verbatim}

Dada uma tabela Brasileirão, pode ser que ele retorne apenas; 1,2 ou apenas 3 times.

Agora imagine nesse mesmo contexto, eu queira realizar uma consulta que me retorne o mesmo número de dados. Entretanto, eu quero saber a quantidade de títulos totais conquistados por ANO.

\begin{verbatim}
SELECT ano, count(\*) from BRASILEIRAO WHERE titulos_totais > 50 GROUP BY ano;
\end{verbatim}

Assim, ele vai retornar uma coluna indicando o ano e a quantidade total por ano. 

Ainda utilizando do mesmo contexto, imagine que a gente precise visualizar de forma decrescente para saber qual o ano onde mais teve titulos_totais o brasileirao inteiro:

\begin{verbatim}
SELECT ano, count(\*) from BRASILEIRAO WHERE titulos_totais > 50 GROUP BY ano ORDER BY count(\*);
\end{verbatim}

Assim, ele retornará de forma decrescente os dados. Um adendo: Quando realizamos a consulta de forma sem indicar se queremos "DESC" ou "ASC" ele vai retornar por padrão o ASC. Podemos order por campos ordinais indicando número da coluna feita na consulta, mas não é recomendado.

\section{Funções de Agregação}

Partindo da mesma função `\mintinline{MySQL}{COUNT()}` que a visualizamos antes, a gente tem outras funções que também realizam operações com registros, funções essas como: `\mintinline{MySQL}{SUM()}`, `\mintinline{MySQL}{AVG()}`,  `\mintinline{MySQL}{SUM()}`,  `\mintinline{MySQL}{MIN()}`,  `\mintinline{MySQL}{MAX()}` e enfim.

Terminando de explorar o `\mintinline{MySQL}{COUNT()}`, essa função quando especificamos ela utilizando "\*", ela necessariamente faz a contagem de todos os registros sem exceção alguma. Porém, quando realizamos uma operação com `\mintinline{MySQL}{COUNT()}` especificando a coluna que queremos, ela basicamente vai fazer uma distinção dos dados nulos e não nulos de uma coluna. Exemplo:

\begin{verbatim}
SELECT count(\*) FROM BRASILEIRAO;
\end{verbatim}

Nesse exemplo, pode ser que retorne uma quantidade X de registros, já que ele considerando todos os registros da tabela. Porém, se a gente fizer uma especificação por coluna, pense que ele vai considerar apenas desses X registros, Y registros que não são nulos. Exemplo:

\begin{verbatim}
SELECT count(titulos_mundiais) FROM BRASILEIRAO WHERE titulos_totais > 50;
\end{verbatim}

Aqui ele vai considerar apenas a quantidade de registros que contém algum dado válido na coluna de "titulos_mundiais" sendo assim, ignorando boa parte do registros não válidos.

Explorando outro aspecto de agregação, vamos imaginar que queremos realizar uma soma média de todas idades de clubes do brasileirao, poderiamos realizar a seguinte função:

\begin{verbatim}
SELECT avg(idade_times) FROM BRASILEIRAO;
\end{verbatim}

Quando realizamos a operação de `\mintinline{MySQL}{AVG()}`, estamos basicamente somando todos os registros de uma coluna e realizando uma média pela sua quantidade. Mas pense que, muito das vezes um clube existe mas ainda não teve seu ano de fundação exato ainda, nesse caso, ele vai considerar apenas os registros que tem dados válidos na coluna.

Outra função também interessante é a de soma: "`\mintinline{MySQL}{SUM()}`" já que com essa função podemos realizar operações de somar determinados dados de uma tabela.

Vamos supor que eu precise saber a quantidade de títulos mundiais de todos os times do Brasil a partir do ano 1950:

\begin{verbatim}
SELECT sum(mundiais) FROM BRASILEIRAO where ano >= 1950;
\end{verbatim}

O exemplo acima é ilustrativo com algumas faltas de operações etc. Mas foi feito com o ideal de explicar e não de aplicar este exato código.

\section{Instrução HAVING}

A instrução `\mintinline{MySQL}{HAVING}` é útil para que a gente possa trabalhar agrupações e não registros individuais em uma dada tabela. Sendo assim, essa instrução é o equivalente a usar `\mintinline{MySQL}{WHERE}`, mas em si apenas para agrupamentos. Lembrando que, a cláusula `\mintinline{MySQL}{WHERE}` serve exclusivamente para registros individuais e não para agrupações.

Vamos supor que a gente queira fazer a soma de jogadores de times onde seu ano de fundação é entre 1900 e 2000 visualizando apenas onde há mais que 40 jogadores.

\begin{verbatim}
SELECT sum(jogadores) FROM BRASILEIRAO where ano between 1900 and 2000 Having sum(jogadores) > 40;
\end{verbatim}

\section{Registros Distintos}

É preciso as vezes a gente precisar consultar dados nos quais há repetições de registros, seja por ano ou coisa semelhante. Com isso, podemos utilizar um opcional do SQL para poder fazer a distinção de registros dos times do brasileirão por títulos.

\begin{verbatim}
SELECT DISTINCT titulos FROM BRASILEIRAO;
\end{verbatim}