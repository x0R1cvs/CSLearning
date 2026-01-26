// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
// que este sofreu um desconto de 10%.

#include <stdio.h>

int main(){
    float produto,desconto;
    scanf("%f",&produto);
    desconto = produto * 0.9;
    printf("%.2f",desconto);
    return 0;
}