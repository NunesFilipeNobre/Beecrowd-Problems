#include <stdio.h>

int main ()
{
    int distancia;
    float combustivel;
    scanf("%d%f",&distancia,&combustivel);
    printf("%.3f km/l\n",distancia/combustivel);
}