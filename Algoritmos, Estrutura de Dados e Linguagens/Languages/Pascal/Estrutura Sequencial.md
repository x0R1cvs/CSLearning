## Estrutura Sequencial em Pascal

2025-12-29 16:18

**Subjects**: [[sintaxe]] 

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Write-Up

A sintaxe do Pascal é a mais básica e compreensível de manipular e entender, tendo a seguinte sintaxe:

```Pascal
PROGRAM <name>;
USES <library>;
VAR <varname>: <type>;
BEGIN
END.
```

A sintaxe basicamente se baseia em: Definir o nome do programa em "**PROGRAM**"; Uso de bibliotecas sendo na **USES** e nela por padrão precisamos necessariamente utilizar a biblioteca CRT que contém as funções básicas da Linguagem Pascal.
#### Declaração de Variável

Juntamente da sintaxe básica, os tipos de dados contidos na linguagem Pascal são fáceis e intuitivas de modo que são os tipos primitivos:

- **INTEGER**: O tipo INTEGER é do tipo que trabalha exclusivamente com números inteiros
- **REAL**: Diferente de algumas outras linguagens que se é declarado através do tipo FLOAT, no PASCAL a linguagem trabalha com o REAL.
- **BOOLEAN**: BOOLEAN tendo seus dois únicos tipos de valor, sendo: TRUE ou FALSE.
- **CHAR**: Exclusivamente para o armazenamento de um caractere.
- **STRING**: Trabalha com o armazenamento de STRINGS.
#### Declaração de Constante

Para declaramos constantes na Linguagem Pascal, basta apenas a gente criar um bloco semelhante ao de variáveis.

```Pascal
PROGRAM <name>;
USES <library>;
CONST <name> = <value>;
BEGIN
END.
```

Desse modo, podemos referenciar a constante em todas as partes do código de forma semelhante as variáveis.
#### Comando de Atribuição

Para atribuirmos valor, temos uma sintaxe muito básica para receber nas variáveis etc.

```Pascal
<variavel> := <value>
```
#### I/O Pascal

Para gente realizar a leitura de uma variável na linguagem Pascal, basta sinalizarmos a função "**readln()**" e assim podermos receber os dados.

```Pascal
readln(<name>);
```

Também, semelhante ao "readln" temos o comando de escrever os dados. Entretanto, temos dois tipos primordialemnte, temos o "**writeln**" e o "**write**" que um serve para escrever com quebra de linha e outro sem quebra de linha.

```Pascal
writeln("message", variable);
```

```Pascal
write("message",variable);
```
