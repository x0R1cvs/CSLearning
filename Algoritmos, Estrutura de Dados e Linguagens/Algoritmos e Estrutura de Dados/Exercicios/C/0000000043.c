// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

#include <stdio.h>

int main(){

    int idade;
    scanf("%d",&idade);
    if(idade >= 18){printf("Maioridade.\n");}
    else{printf("Menoridade.\n");}
    return 0;
}