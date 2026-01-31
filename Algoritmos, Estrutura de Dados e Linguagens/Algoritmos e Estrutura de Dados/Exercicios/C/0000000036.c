// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main(){
    float salario,aumento = 0;
    scanf("%f",&salario);
    if(salario <= 300){
        aumento = salario * 0.15;
    }
    else if(salario > 300 && salario < 600){
        aumento = salario * 0.10;
    }
    else if(salario >= 600 && salario <= 900){
        aumento = salario * 0.05;
    }
    salario += aumento;
    printf("Aumento: R$ %.2f\n",aumento);
    printf("Salario reajustado: R$ %.2f\n",salario);
}