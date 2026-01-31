// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de investimento, de acordo com o tipo de investimento.

#include <stdio.h>

int main(){
    int tipo;
    float valor,investimento;

    scanf("%d%f",&tipo,&valor);

    switch(tipo){
        case 1:
            investimento = valor * 0.03;
            break;
        case 2:
            investimento = valor * 0.04;
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    valor += investimento;
    printf("Valor corrigido: %.2f\n",valor);

    return 0;
}