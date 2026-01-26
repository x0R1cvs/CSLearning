// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
// derando peso 2 para a primeira e peso 3 para a segunda.

#include <stdio.h>

int main(){
    float nota1,nota2,media;
    scanf("%f%f",&nota1,&nota2);
    media = (nota1 * 2 + nota2*3) / (2+3);
    printf("%f",media);
    return 0;
}