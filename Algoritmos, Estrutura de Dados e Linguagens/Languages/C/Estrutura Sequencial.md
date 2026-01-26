## Estrutura Sequencial em C

2026-01-26 07:46

**Subjects**: [[sintaxe]]

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Notes

```C
#include <library>

int main(){
	<command block>;
	return 0;
}
```

Em C utilizamos bibliotecas para efetuar operações de saídas, operações de dados etc. Através do `include` ele realiza a importação de uma dada biblioteca que o usuário inserir. Por padrão, utilizamos a biblioteca `<stdio.h>` para realizar comandos de entrada e saída.

#### Tipos de Variáveis

Em C temos alguns tipos básicos de variáveis para poder manipular os dados. Com apenas dois decréscimos, não temos manipulação de dados do tipo strings (cadeia de caracteres) e também não temos um dado específico para boolean (dados booleanos) já que a linguagem identifica como verdadeiro qualquer valor diferente de 0. Alguns exemplos:

```c
int idade;
```

o `Int` opera apenas com números do tipo inteiro.

```c
float gasolina;
```

`Float` é o tipo de dado que opera com números decimais. 

```C
char nome[40];
```

Em C as variáveis do tipo de caracteres tem o `LENGTH - 1`. Isso devido a ser o tamanho total e menos um caractere para o caractere `\0` que sinaliza o fim do vetor de caracteres.

| Tipo de Dado  | Faixa de Valores               | Tamanho (Aproximado) | Chamada Variável |
| ------------- | ------------------------------ | -------------------- | ---------------- |
| Char          | -128 a 128                     | 8 bits               | %c               |
| unsigned char | 0 a 255                        | 8 bits               |                  |
| int           | -32.768 a 32.767               | 16 bits              | %d               |
| unsigned int  | 0 a 65.535                     | 16 bits              |                  |
| short int     | -32.768 a 32.767               | 16 bits              |                  |
| long          | −2.147.483.648 a 2.147.483.647 | 32 bits              | %ld              |
| unsigned long | 0 a 4.294.967.295              | 32 bits              |                  |
| double        | 1.7 × 10^308 a 1.7 × 10^308    | 64 bits              | %lf              |
| float         | 3.4 × 10^38 a 3.4 × 10^38      | 32 bits              | %f               |
| long double   | 3.4 × 10^4932 a 1.1 × 10^4932  | 80 bits              |                  |
#### Declaração de constantes em C

As constantes são declaradas de modo que a gente as use definitivamente com um valor fixo, elas são definidas após as bibliotecas e não podem ser alteradas durante a execução.

```c
#define pi 3.1415
```

Definimos para o escopo inteiro do programa que a constante `pi` tem o valor `3.1415`.

#### Comando de entrada em C

```c
scanf("%<variabletype>",&<namevar>);
```

Temos como padrão na linguagem C para armazenar os dados em uma variável a função `scanf("%")` visando apenas ter entrada de dados de um usuário. 
#### Comando de saída em C

```c
printf("Dados %f",variável);
```

Em C podemos ter a manipulação de saída de dados indicando o tipo que queremos que saia e indicando logo após a variável.