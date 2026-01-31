// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):

#include <stdio.h>

int main(){
    float altura,peso;
    int sexo;
    printf("[H = HOMEM / M = MULHER] \n Sexo:");
    sexo = getchar();
    printf("Altura:");
    scanf("%f",&altura);
    switch(sexo){
        case 'H':
            peso = (72.7*altura) - 58;
            break;
        case 'M':
            peso = (62.1*altura) - 44.7;
            break;
        default:
            printf("Sexo desconhecido.\n");
    }
    printf("Peso ideal: %.2f",peso);
    return 0;
}
