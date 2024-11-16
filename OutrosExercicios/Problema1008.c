#include <stdio.h>

int main()
{
    int numero,horas;
    float dinheiro;
    scanf("%d%d%f",&numero,&horas,&dinheiro); /*Coleta numero, horas trabalhadas e pagamento*/
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero,dinheiro*horas); /*Printa o numero e o salario*/
}