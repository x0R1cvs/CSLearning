## Estrutura Condicional em Pascal

2026-01-14 17:52

**Subjects**: [[sintaxe]] 

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Write-Up

#### Estrutura Simples

```Pascal
PROGRAM <name>;
USES <library>;
VAR <var> : <type>;
BEGIN
	IF condition
	THEN <command>;
END.
```
Na estrutura mais básica acima, ele apenas faz a verificação da condição e com isso apenas executa o que vem logo abaixo em `THEN`.

Claro que, nesta estrutura basicamente apenas realizamos a execução de apenas um comando, sendo assim, para executarmos uma série de outros comandos precisamos fazer o seguinte:

```Pascal
PROGRAM <name>;
USES <library>;
VAR <var> : <type>;
BEGIN
	IF <condition>
	BEGIN
	END;
END.
```

Assim, todos os comandos que estiverem abaixo do `BEGIN` vão ser executados.

#### Estrutura Composta

```Pascal
PROGRAM <name>;
USES <library>;
VAR <var> : <type>;
BEGIN
	IF <condition>;
	THEN <command1>;
	ELSE <command2>;
END.
```

Utilizamos essa estrutura basicamente para fornecer uma sentença a ser executada caso a primeira condição não seja correspondida. 

```Pascal
PROGRAM <name>;
USES <library>;
VAR <var> : <type>;
BEGIN
	IF <condition>;
	THEN
		BEGIN
			<command1>;
			<command2>;
		END
	ELSE 
		BEGIN
			<command3>;
		END;
END.
```

Não existe antes do `ELSE` um ponto e vírgula.

#### Estrutura Case

```Pascal
PROGRAM <name>;
USES <library>;
VAR <var> : <type>;
BEGIN
	CASE <seletor> OF
		<range>: <command1>;
		<target>: <command2>;
	END;
END.
```

Nessa estrutura, precisamos necessariamente de um seletor (Variável) para que possamos escolher uma sentença se correspondente com o valor desse seletor. Podemos executar bloco de comandos e também colocar um comando para que se caso não seja correspondente.

Ex:

```Pascal
PROGRAM <name>;
USES <library>;
VAR <var> : <type>;
BEGIN

	CASE <seletor> OF
		n..p:writeln("Range de n a p");
		a,b,c:writeln("Os valores a,b,c");
		z: BEGIN
			<command1>;
			<command2>;
			<command3>;
			END;
		else writeln("Nenhum valor correspondido.")
	END;
END.
```
#### Operadores lógicos
