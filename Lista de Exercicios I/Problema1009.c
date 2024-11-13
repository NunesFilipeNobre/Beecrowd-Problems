#include <stdio.h>

int main()
{
    char nome[20];
    float salario,produtos;
    scanf("%s%f%f",nome,&salario,&produtos);
    printf("TOTAL = R$ %.2f\n",salario+(0.15*produtos));

    /*O nome nao serve pra nada???*/
}