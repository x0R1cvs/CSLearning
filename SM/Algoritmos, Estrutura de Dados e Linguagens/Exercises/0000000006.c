#include <stdio.h>

int main(){
    float salario,valorvendas,cmvendas,salariofinal;
    scanf("%f%f",&salario,&valorvendas);
    cmvendas = valorvendas * 0.04;
    salariofinal = salario + cmvendas;
    printf("R$ %.2f\n",cmvendas);
    printf("R$ %.2f\n",salariofinal);
}