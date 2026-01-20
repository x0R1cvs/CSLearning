#include <stdio.h>

int main(){
    float x,y,z;
    scanf("%f%f",&x,&y);
    z = (x+y) / 2;
    if(z >= 0 && z < 3)
        printf("Reprovado.");
    else if (z >= 3 && z < 7)
        printf("Exame.");
    else
        printf("Aprovado.");
    
}