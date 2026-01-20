#include <stdio.h>

int main(){

    float peso,pesogordo,pesomagro;
    scanf("%f",&peso);
    pesogordo = peso * 1.15;
    pesomagro = peso - (peso * 0.20);
    printf("%.3f \n %.3f",pesogordo,pesomagro);
}