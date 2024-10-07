#include <stdio.h>

int main()
{
    int numero,horas;
    float dinheiro;
    scanf("%d%d%f",&numero,&horas,&dinheiro);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero,dinheiro*horas);
}