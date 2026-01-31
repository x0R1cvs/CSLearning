// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. sabe-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O programa deve fazer as conversões e mostrá-las.

#include <stdio.h>

int main(){
    float real;
    printf("Quantidade que tem para viajar: ");scanf("%f",&real);
    float dolar = 1.80 * real, marcoalemao = 2.0 * real, libraesterlina = 3.57 * real;
    printf("Dolar: %.2f\n",dolar);
    printf("Marco Alemao: %.2f\n",marcoalemao);
    printf("Libra Esterlina: %f\n",libraesterlina);
}