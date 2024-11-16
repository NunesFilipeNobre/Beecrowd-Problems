#include <stdio.h>

int main()
{
    int i=1,j; /*Define as variaveis*/
    for (j = 60; j >=0; j-=5) /*Loop que se repete ate que j chegue a 0*/
    {
        printf("I=%d J=%d\n",i,j); /*Printa o valor de i e j*/
        i+=3; /*Soma 3 ao valor de i*/
    }
}