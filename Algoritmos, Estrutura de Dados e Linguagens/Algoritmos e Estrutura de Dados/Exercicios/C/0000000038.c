// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.

#include <stdio.h>

int main(){

    float valorproduto;
    scanf("%f",&valorproduto);

    if(valorproduto < 50){valorproduto = valorproduto * 1.05;}
    else if(valorproduto >= 50 && valorproduto <= 100){valorproduto = valorproduto * 1.10;}
    else{valorproduto = valorproduto * 1.15;}

    if(valorproduto < 80){printf("Barato\n");}
    else if(valorproduto >= 80 && valorproduto <= 120){printf("Normal\n");}
    else if(valorproduto > 120 && valorproduto <= 200){printf("Caro\n");}
    else{printf("Muito Caro");}

    return 0;
}