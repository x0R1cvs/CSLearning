// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
// que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
// salário final.

#include <stdio.h>

int main(){
    float salario,comissao,vendas,novosalario;
    scanf("%f%f",&salario,&vendas);
    comissao = vendas * 0.04;
    novosalario = salario + comissao;
    printf("%.2f",novosalario);
    return 0;
}