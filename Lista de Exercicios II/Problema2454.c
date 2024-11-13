#include <stdio.h>

int main()
{
    int p,r; /*Declara as variaveis*/
    scanf("%d%d",&p,&r); /*Recebe os valores das variaveis*/
    if (p) /*Se p for 1: */
    {
        if (r) /*Se r for 1: */
            printf("A\n");
        else /*Se r for 0: */
            printf("B\n");
    }
    else /*Se p for 0: */
        printf("C\n");
}