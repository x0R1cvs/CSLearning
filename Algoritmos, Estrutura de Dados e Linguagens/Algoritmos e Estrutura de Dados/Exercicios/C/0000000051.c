// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
// todos os números pares;
// a quantidade de números pares;
// todos os números ímpares;
// a quantidade de números ímpares

#include <stdio.h>
#define six 6

int main(){

    int vet[six],pares[six],par = 0,impares[six],impar = 0;
    for(int i = 0; i < six; i++){
        int x;
        vet[i] = scanf("%d",&x);
        if(x % 2 == 0){
            pares[par] = x;
            par++;}
        else{
            impares[impar] = x;
            impar++;}
    }
    printf("Pares: ");
    for(int i = 0; i < par;i++)
        printf("%d ",pares[i]);
    printf("\n Quantidade de pares: %d \n",par);
    printf("Impares: ");
    for(int i = 0; i < impar; i++)
        printf("%d ",impares[i]);
    printf("\n Quantidade de impares: %d \n",impar);

    return 0;
}