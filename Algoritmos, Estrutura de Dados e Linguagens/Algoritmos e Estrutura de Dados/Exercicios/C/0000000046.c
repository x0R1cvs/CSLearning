// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência. A procedência obedece à tabela a seguir

#include <stdio.h>

int main(){
    float preco;
    int codigo;
    scanf("%f%d",&preco,&codigo);
    switch(codigo){
        case 1:
            printf("Procedencia: Sul");
            break;
        case 2:
            printf("Procedencia: Norte");
            break;
        case 3:           
            printf("Procedencia: Leste");
            break;
        case 4:
            printf("Procedencia: Norte");
            break;
        default:
            if(codigo == 5 || codigo == 6){printf("Procedencia: Nordeste");}
            else if(codigo == 7 || codigo == 8 || codigo == 9){printf("Procedencia: Sudeste");}
            else if(codigo >= 10 && codigo <= 20){printf("Procedencia: Centro-oeste");}
            else if(codigo >= 21 && codigo <= 30){printf("Procedencia: Nordeste");}
            else{
                printf("Procedencia desconhecida.");
            }
    }

    return 0;
}