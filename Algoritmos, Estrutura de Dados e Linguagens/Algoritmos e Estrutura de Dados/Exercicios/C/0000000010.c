// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que calcule e mostre a área de um quadrado. sabe-se que: A = lado * lado.

#include <stdio.h>

int main(){
    float area,lado;
    scanf("%f",&lado);
    area = lado * lado;
    printf("%f",area);
    return 0;
}