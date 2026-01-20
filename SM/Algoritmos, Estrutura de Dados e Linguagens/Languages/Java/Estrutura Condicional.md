## Estrutura Condicional em Java

2026-01-17 11:03

**Subjects**: [[sintaxe]] 

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Write-Up

#### Estrutura condicional Simples

```Java
if (condition)
	<command1>;
```

Nessa estrutura básica, ele basicamente apenas executa um comando se caso corresponda com a condição.

```Java
if (condition){
	<command1>;
	<command2>;
	<command3>;
	}
```

Precisando utilizar um bloco de comandos, precisamos necessariamente utilizar chaves para executar um bloco inteiro.
#### Estrutura condicional Composta

```Java
if (condition)
	<command>;
else
	<command2>;
```

Nessa estrutura semelhante a inicial, estamos apenas realizando uma verificação e a execução exclusiva de apenas um código.

```Java
if (condition){
	<command>;
	<command>;
	<command>;}
else{
	<command2>;
	<command2>;
	<command2>;}
```

Se for verdadeira a sentença, vai ser executado o bloco de comandos.
#### Estrutura condicional Case

```Java
switch (selector){
	case <value1>: 
		<command1>;
		<command2>;
		break;
	case <value2>:
		<command3>;
		<command4>;
	default:
		<command5>;
		<command6>;
}
```
#### Operadores lógicos

De forma semelhante a linguagem C, a tabela lógica do Java é baseada em caracteres especiais e não em palavras literais. Os respectivos caracteres e seus respectivos nomes: `|| (OR)`, `! (NOT)` e `&& (AND)`.


| TABELA (AND)   | TABELA (OR)      | TABELA (NOT)  |
| -------------- | ---------------- | ------------- |
| V && V = True  | V \|\| V = True  | NOT V = False |
| V && F = False | V \|\| F = True  | NOT F = True  |
| F && V = False | F \|\| V = True  |               |
| F && F = False | F \|\| F = False |               |
