// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
// os números múltiplos de 2;
// os números múltiplos de 3;
// os números múltiplos de 2 e de 3.

#include <stdio.h>
#define sete 7

int main(){
    int vetor[sete];
    for(int i = 0; i < sete; i++){
        int x;
        scanf("%d",&x);
        vetor[i] = x;
    }
    printf("\n Multiplos de 2: ");
    for(int i = 0; i < sete; i++){
        if(vetor[i] % 2 == 0)
            printf("%d ",vetor[i]);}
    printf("\n Multiplos de 3: ");
        for(int j = 0; j < sete; j++){
            if(vetor[j] % 3 == 0)
                printf("%d ",vetor[j]);}
    printf("\n Multiplos de 2 e de 3: ");
        for(int k = 0; k < sete; k++){
            if(vetor[k] % 2 == 0 && vetor[k] % 3 == 0)
                printf("%d ",vetor[k]);}
    return 0;
}