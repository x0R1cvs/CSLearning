// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include <stdio.h>

int main(){
    float kilogramas,gramas;
    scanf("%f",&kilogramas);
    gramas = kilogramas * 1000;
    printf("%.3f",gramas);
    return 0;
}