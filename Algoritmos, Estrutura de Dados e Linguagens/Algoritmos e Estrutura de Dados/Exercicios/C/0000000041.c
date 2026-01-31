// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

#include <stdio.h>

int main(){
    float valor,codigoproduto,desconto = 0;
    scanf("%f%d",&valor,&codigoproduto);
    if(valor >= 50 && valor <= 100){desconto = valor * 0.10;}
    else if(valor > 100){desconto = valor * 0.15;}
    valor -= desconto;
    printf("Desconto: %.2f\n",desconto);
    printf("Valor: %.2f\n",valor);

    return 0;
}