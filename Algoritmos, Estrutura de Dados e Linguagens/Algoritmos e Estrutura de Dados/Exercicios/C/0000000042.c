// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.

#include <stdio.h>

int main(){
    int senha;
    scanf("%d",&senha);
    switch(senha){
        case 4531:
            printf("Acesso Valido.");
            break;
        default:
            printf("Acesso Negado.");
            break;
    }
    return 0;
}