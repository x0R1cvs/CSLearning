// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito

#include <stdio.h>

int main(){
    float saldomedio, credito;
    scanf("%f",&saldomedio);
    if(saldomedio <= 200)
        credito = saldomedio * 0.10;
    else if(saldomedio > 200 && saldomedio <= 300)
        credito = saldomedio * 0.20;
    else if(saldomedio > 300 && saldomedio <= 400)
        credito = saldomedio * 0.25;
    else
        credito = saldomedio * 0.30;
    printf("Saldo medio: %.2f\n",saldomedio);
    printf("Credito: %.2f\n",credito);
    return 0; 
}