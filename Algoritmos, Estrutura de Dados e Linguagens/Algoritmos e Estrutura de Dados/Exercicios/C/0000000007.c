// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o peso de uma pessoa, calcule e mostre:
// a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.

#include <stdio.h>

int main(){
    float peso,engordou,emagreceu;
    scanf("%f",&peso);
    engordou = peso * 1.15;
    emagreceu = peso * 0.8;
    printf("%.3f\n%.3f",engordou,emagreceu);
    return 0;
}