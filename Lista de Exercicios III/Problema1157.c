#include <stdio.h>

int main()
{
    int n; /*Declara a variavel*/
    scanf(" %d",&n); /*Recebe o valor da variavel*/
    for (int i = 1; i <= n; i++) /*Loop que se repete n vezes a partir de 1*/
    {
        if (!(n%i)) /*Se n for divisivel por i*/
            printf("%d\n",i); /*Printa i*/
    }
}