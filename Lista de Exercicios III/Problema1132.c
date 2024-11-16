#include <stdio.h>

int main()
{
    int x,y,soma=0; /*Declara variaveis*/
    scanf(" %d %d",&x,&y); /*Recebe os valores das variaveis*/
    if (x<y) /*Verifica se x eh menor que y*/
    {
        for (; x <= y; x++) /*Loop de x ate y contando x e y*/
        {
            if (x%13) /*Se x nao for divisivel por 13: */
                soma+=x; /*Soma o valor de x ao valor de soma*/
        }
    }
    else /*se x nao for menor que y*/
    {
        for (; y <= x; y++) /*Loop de y a x contando x e y*/
        {
            if (y%13) /*Se y nao for divisivel por 13: */
                soma+=y; /*Soma o valor de x ao valor de soma*/
        }
    }
    printf("%d\n",soma); /*Printa o valor da soma*/
}