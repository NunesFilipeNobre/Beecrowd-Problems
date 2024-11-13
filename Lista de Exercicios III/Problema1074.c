#include <stdio.h>
int main()
{
    int n,x; /*Declara variaveis*/
    scanf("%d",&n); /*Recebe os valores das variaveis*/
    for (int i = 0; i < n; i++) /*Repete n vezes*/
    {
        scanf("%d",&x); /*Recebe um dos valores da questao*/
        if (x == 0) /*Se for igual a 0:*/
            printf("NULL\n");
        else if (x%2) /*Se for impar (se x%2 der 1):*/
        {
            if (x<0) /*Se x for negativo: */
                printf("ODD NEGATIVE\n");
            else if(x>0) /*Se x for positivo: */
                printf("ODD POSITIVE\n"); 
        }
        else /*Caso contrario:*/
        {
            if (x<0) /*Se x for negativo: */
                printf("EVEN NEGATIVE\n");
            else if(x>0) /*Se x for positivo: */
                printf("EVEN POSITIVE\n"); 
        }
    }
}