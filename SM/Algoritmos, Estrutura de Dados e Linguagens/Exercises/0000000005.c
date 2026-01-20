#include <stdio.h>

int main(){
    float preco,novopreco;
    scanf("%f",&preco);
    novopreco = preco - (preco * 0.10);
    printf("%.2f",novopreco);
}