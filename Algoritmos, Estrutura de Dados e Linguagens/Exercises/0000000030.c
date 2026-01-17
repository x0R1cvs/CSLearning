#include <stdio.h>

int main(){
    float x,y;
    int num;
    scanf("%f%f%d",&x,&y,&num);
    switch (num){
        case 1:
            float media;
            media = (x + y) / 2;
            printf("%.2f",media);
            break;
        case 2:
            float dif;
            if(x > y)
                dif = x - y;
            else
                dif = y - x;
            printf("%f",dif);
            break;
        case 3:
            float prod;
            prod = x*y;
            printf("%f",prod);
            break;
        case 4:
            if(y != 0){
                float div;
                div = x / y;
                printf("%f",div);
                break;}
            else{
                printf("Não foi possível realizar a operação.");
                break;}
        default:
            printf("Opção inválida.");
            break;
    }
}