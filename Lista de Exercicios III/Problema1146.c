#include <stdio.h>

int main()
{
    int x; /*Define a variavel*/
    while (1) /*Loop infinito*/
    {
        scanf(" %d",&x); /*Recebe x*/
        if (x==0) /*Se x for 0, encerra o programa*/
            return 0;
        for (int i = 1; i <= x; i++) /*Loop que se repete x vezes a partir de 1*/
        {
            if (i==1) /*Se esse for o primeiro numero a ser printado*/
                printf("%d",i); /*Printa ele sem espaco atras*/
            else /*Se nao for*/
                printf(" %d",i); /*Printa com espaco atras*/
        }
        printf("\n"); /*Ao final de cada linha, insere uma quebra de linha*/
    }
}