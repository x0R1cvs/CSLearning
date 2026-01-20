#include <stdio.h>

int main(){
    float x,y,z;
    scanf("%f%f",&x,&y);
    z = (x+y) / 2;
    if(z >= 7)
        printf("Aprovado.");
    else
        printf("Reprovado.");
}