// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre em qual grupo de risco essa pessoa se encaixa.

#include <stdio.h>

int main(){
    int idade;
    float peso;
    scanf("%d%f",&peso,&peso);
    if(idade < 20){
        if(peso < 60){printf("9");}
        else if(peso >= 60 && peso <= 90){printf("8");}
        else{printf("7");}
    }
    else if(idade >= 20 && idade <= 50){
        if(peso < 60){printf("6");}
        else if(peso >= 60 && peso <= 90){printf("5");}
        else{printf("4");}
    }
    else{
        if(peso < 60){printf("3");}
        else if(peso >= 60 && peso <= 90){printf("2");}
        else{printf("1");}
    }
    return 0;
}