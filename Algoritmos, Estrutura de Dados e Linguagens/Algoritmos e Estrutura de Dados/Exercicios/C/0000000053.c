// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>
#define dez 10

int main(){
    int codigoprodutos[dez],estoque[dez];
    for(int i = 0; i < dez; i++){
        int codigo;
        scanf("%d",&codigo);
        codigoprodutos[i] = codigo;
        int quantidade;
        scanf("%d",&quantidade);
        estoque[i] = quantidade;
    }
    int codigocliente,codigoproduto,quantidade,indice;
    do{
        printf("Codigo cliente:");scanf("%d",&codigocliente);
        if(codigocliente == 0){
            break;
        }
        printf("Codigo produto:");scanf("%d",&codigoproduto);
        printf("Quantidade do produto:");scanf("%d",&quantidade);
        if(codigoproduto >= codigoprodutos[0] && codigoproduto <= codigoprodutos[dez-1]){
            for(int i = 0; i < dez; i++){
                if(codigoproduto == codigoprodutos[i]){
                    indice = i;
                }
            }
            if((estoque[indice] - quantidade) >= 0){
                estoque[indice] = estoque[indice] - quantidade;
                printf("Pedido atendido. Obrigado e volte sempre\n");}
            else
                printf("Não temos estoque suficiente dessa mercadoria.\n");
            }
        else
            printf("Codigo inexistente.\n");
        } while(1);
    printf("\nEstoque atualizado.\n");
    for(int i = 0; i < dez; i++){
        printf("Produto: %d Estoque: %d\n",codigoprodutos[i],estoque[i]);
    }

    return 0;
}