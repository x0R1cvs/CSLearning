// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

#include <stdio.h>

int main(){

    float salario;
    scanf("%f",&salario);

    if(salario <= 350){
        salario += 100;}
    else if(salario > 350 && salario < 600){
        salario += 75;}
    else if(salario >= 600 && salario <= 900){
        salario += 50;}
    else{
        salario += 35;}
    salario = salario * 0.93;
    printf("%.2f",salario);
    return 0;
}