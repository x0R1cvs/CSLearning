## Estrutura Sequencial Java

2025-12-29 19:32

**Subjects**: [[sintaxe]] 

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Write-Up

A estrutura do Java diferente de algumas linguagens de programação é bem diferente a sintaxe, seja na sua forma de estruturar o código ou mesmo declarar variáveis. Sua sintaxe básica:

```java
import <packages>;

public class <nameprogram>{
	public static void main(String args[]){
		<command block>
	}
}
```

Os pacotes servem para importar arquivos contendo diferentes funções que podem ser utilizadas.

Sendo uma linguagem case sensitive, ela distingue bem uma variável chamada "Abelha" ou "abelha".
#### Declaração de Variável 

A declaração de variável é semelhante a linguagem C e entre outras. Sendo assim, seus tipos primitivos são: `int`, `float`, `char`, `double` e `string`. Para declarar, basta apenas indicar o tipo e o nome da variável.

Exemplo:

```java
float W;
double X,Y;
int Z;
```

#### Declaração de Constante

Já a declaração de constantes, as constantes podem ser quanto abrangentes ou limitadas dependendo do contexto de declaração, vamos supor que o usuário declarou a variável dentro do método, logo: Ele vai servir apenas para aquele método. Se não, caso declarado fora do método, ele serve para o código inteiro do usuário. Precisamos declarar o tipo da constante, nome e o valor dela.

Exemplo:

```java
final double pi = 3.1415;
```

```java
final string NOME = "PETRVS";
```

#### Comando de Atribuição

O comando de atribuição do java é semelhante a outras linguagens, bastando apenas explicitar a variável e o valor a ser recebido.

Exemplo:

```java
x = 4;
y = x + 2;
sexo = 'F';
ativo = true;
```

Deixando como adendo, os caracteres devem ser declarados por apóstrofos  " ' " e as cadeias de caracteres com aspas duplas.3 

#### I/O JAVA

No java, precisamos utilizar um pacote de classes para fazer o tratamento de Input/Output dos dados na linguagem, sendo assim, utilizamos a `java.util.Scanner` para realizar o recebimento dos dados.

Exemplo:

```java
int v1;
Scanner dado;
dado = new Scanner(System.in);
v1 = dado.nextInt();
```

```java
float v2;
Scanner dado;
dado = new Scanner(System.in);
v2 = dado.nextFloat();
```

Cada variável precisa de um novo scanner, sendo assim, são declarados no Scanner "variáveis temporárias" para realizar a manipulação desses dados.

Esses dados na linguagem Java são recebidos como String/Caracteres, logo, devemos utilizar funções para manipular esses dados e realizar a devida conversão.


| Functions    | Funcionalities                                           |
| ------------ | -------------------------------------------------------- |
| next()       | Aguarda um formato string de única palava                |
| nextLine()   | Aguarda um formato string de apenas uma ou mais palavras |
| nextInt()    | Aguarda um formato inteiro                               |
| nextByte()   | Aguarda um formato inteiro                               |
| nextLong()   | Aguarda um formato Inteiro                               |
| nextFloat()  | Aguarda uma entrada de fracionário                       |
| nextDouble() | Aguarda uma entrada de fracionário                       |

Para realizarmos o comando de output de sistema, precisamos chamar a variável ou constante com um adendo a mais na mensagem. Um exemplo:

```java
System.out.println("A soma de "+ x + "+" + y + " é igual a:" + x+y);
```

```java
System.out.print("Hello, world!");
```

```java
System.out.println(x);
```
