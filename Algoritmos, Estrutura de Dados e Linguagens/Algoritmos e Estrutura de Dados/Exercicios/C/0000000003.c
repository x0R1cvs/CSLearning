// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
// segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
// com validações.

#include <stdio.h>

int main(){
    float x,y,z;
    scanf("%f%f",&x,&y);
    z = x / y;
    printf("%f",z);
    return 0;
}