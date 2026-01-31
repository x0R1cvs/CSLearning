## Estrutura de Repetição em C

2026-01-29 13:48

**Subjects**: [[sintaxe]]

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Notes

Estruturas de repetição são úteis para que a gente possa executar blocos de comando ou comandos de modo que a gente precisa repetir suas execuções, são úteis para que a gente automatize tarefas. Por exemplo, para realizarmos uma tabuada via linha de comando, o mais viável é realizar blocos de repetição ao invés de fazer na mão.
#### Estrutura de repetição FOR

- Simples

```C
for(<type> <variable> = <value>; <condition>; <increment>)
	<command1>;
```

- Composto

```C
for(<type> <variable> = <value>; <condition>; <increment>){
	<command1>;
	<command2>;
	...
	<commandN>;
}
```

A estrutura `FOR` em si é útil para que a gente possa executar determinadas ações com base no que a gente prevê para o código. Traduzindo, a gente sabe até que ponto a gente quer chegar. Exemplo de código:

```C
#include <stdio.h>
int main(){
    for(int i = 1; i <= 10; i *= 2)
        printf("%d\n",i);
}
```

| Variável i | Valor da Variável i | Valor da Operação com i |
| ---------- | ------------------- | ----------------------- |
| i \*= 2    | 1                   | 2                       |
| i \*= 2    | 2                   | 4                       |
| i \*= 2    | 4                   | 8                       |
| i \*= 2    | 8                   | 16                      |

Com isso com nossa condição bem explícita, ele verifica se `i` é menor ou igual a 10. Como o número 16 não é, ele finaliza a execução do bloco de loop.
#### Estrutura de repetição WHILE

```C
while(<condition>){
	<command1>;
	<commnad2>;
	...
	<commandN>;
}
```

A estrutura `WHILE` é um tipo de estrutura que não necessariamente sabemos até qual vai ser o limite de programa, porém, colocamos um condição que ao se tornar inválida, ele para com a execução. Exemplo de código:

```C
#include <stdio.h>

int main(){

    int n = 0;
    while(n <= 10){
        printf("%d\n",n);
        n++;
    }
}
```

Enquanto `n` for menor ou igual a 10, ele executará o `printf()` e vai realizar um acréscimo `n++` de +1 na variável.
#### Estrutura de repetição DO-WHILE

```C
do{
	<command1>;
	<command2>;
	...
	<commandN>;
} while(<condition>);
```

De forma semelhante ao `WHILE`, o `DO-WHILE` é uma estrutura de pós teste de código. A estrutura de pós teste ela se baseia em basicamente executar o código para apenas depois realizar algum tipo de verificação. Exemplo de código:

```C
#include <stdio.h>

int main(){

    int n = 0;
    do{
        printf("%d\n",n);
        n++;
    }while(n <= 10);

}
```

O seu funcionamento é semelhante ao da estrutura `WHILE`.