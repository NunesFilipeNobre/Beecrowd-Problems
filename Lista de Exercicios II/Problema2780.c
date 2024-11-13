#include <stdio.h>

int main()
{
    int d; /*Declara a variavel*/
    scanf("%d",&d); /*Recebe o valor da variavel*/
    if (d<=800) /*Se a distancia for menor ou igual a 800: */
        printf("1\n");
    else if(d<=1400) /*Se a distancia for menor ou igual a 1400: */
        printf("2\n");
    else /*Caso contrario: */
        printf("3\n");
}