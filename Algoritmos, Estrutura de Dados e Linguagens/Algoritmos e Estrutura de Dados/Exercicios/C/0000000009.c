// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que calcule e mostre a área de um trapézio.
// sabe-se que: A = ((base maior + base menor) * altura)/2

#include <stdio.h>

int main(){
    float area,basemaior,basemenor,altura;
    scanf("%f%f%f",&basemaior,&basemenor,&altura);
    area = ((basemaior + basemenor) * altura) / 2;
    printf("%f",area);
    return 0;
}