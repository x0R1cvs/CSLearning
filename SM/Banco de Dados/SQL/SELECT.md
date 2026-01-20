## SELECT

2025-12-12 23:12

**Subjects**: [[sql]] | [[sqlite]]

**Source**: <a href="https://novatec.com.br/livros/introducao-sql/">Introdução à Linguagem SQL: Abordagem prática para iniciantes</a>

**Level**: Beginner

---

## Write-Up

Na Linguagem SQL, temos uma tarefa comum que é de solicitar os dados de uma determinada tabela em um Banco de Dados X. Quando vamos solicitar dados de uma tabela, o comando mais comum é de realizar um: `\mintinline{MySQL}{SELECT <column1, column2, ... , columnN> FROM <TABLE>}`. Sendo sua sintaxe simples de entender, já que estamos requisitando os dados das N Colunas da tabela. Um atalho no SQL é de requisitar TODAS as colunas de uma Tabela X sem precisar necessariamente explicitá-las ao pedir, iremos utilizar um placeholder nesse local de colunas e assim extrair todos os dados com o `\mintinline{MySQL}{SELECT}`, o placeholder em questão é o `*` que seria um atalho para TODAS/TODOS e seu uso é da seguinte forma: `\mintinline{MySQL}{SELECT * FROM <TABLE>}`. Utilizando esse placeholder, a gente vai fazer com que o banco de dados retorne TODOS os dados DA TABELA que estamos trabalhando.

\section{Cálculo e Operações}

Podemos utilizar o `\mintinline{MySQL}{SELECT}` para realizar operações matemáticas e vários outros tipos de operações de concatenação etc. Vamos supor que a gente precisasse realizar um cálculo de aumento de 17\% e precisamos realizar esse aumento em todos os produtos da tabela mercadoria, com esse contexto em mente podemos realizar simplesmente a seguinte operação: `\mintinline{MySQL}{SELECT preco * 1.17 FROM mercadoria}`. Dessa forma, vamos realizar uma operação aumentando o valor de todos os produtos em 17\%. Quando utilizamos o `\mintinline{MySQL}{SELECT}` para realizar essas operações, a gente não necessariamente faz uma operação permanente na tabela e sim apenas algo visual de modo que a gente observe como seriam os valores aumentados em 17\%.

\section{Concatenação de Textos}

Podemos manipular textos em concatenação com outro... Vamos supor que a gente precise manipular as tabelas agregando um "R$" em dado uma tabela que tem uma coluna com tipo price. Podemos fazer o seguinte: `\mintinline{MySQL}{SELECT 'R\$' || ' ' || price FROM mercadoria}`. Basicamente estamos concatenando através do "||" (Double Pipe) que queremos concatenar um texto juntamente de um valor inteiro/decimal etc. Aqui, implicitamente convertemos o PRICE para um tipo de Texto, isso quer dizer que ele vai concatenar os dados como se fosse um texto e não como valor. Em alguns Interpretadores SQL como (Microsoft SQL Server), a gente precisa explicitamente dizer para converter para texto e assim concatenar. No caso, o MSS faz a concatenação através do "+".