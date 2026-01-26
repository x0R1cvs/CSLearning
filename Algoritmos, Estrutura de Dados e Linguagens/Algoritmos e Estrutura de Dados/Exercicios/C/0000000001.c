// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
// segundo.

#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    z = x - y;
    printf("%d",z);
    return 0;
}