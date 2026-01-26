// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

#include <stdio.h>

int main(){
    int w,x,y,z;
    scanf("%d%d%d",&w,&x,&y);
    z = w * x * y;
    printf("%d",z);
    return 0;
}