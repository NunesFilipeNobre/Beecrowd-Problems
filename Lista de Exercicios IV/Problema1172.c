#include <stdio.h>

int main()
{
    int x[10]; /*Declara uma array X com 10 elementos (do elemento 0 ao 9)*/
    for (int i = 0; i < 10; i++) /*Loop de 10 repeticoes*/
    {
        scanf("%d",&x[i]); /*Recebe o valor da posicao i da array*/
        if (x[i]<=0) /*Se o numero na posicao i for menor ou igual a 0*/
            x[i]=1; /*Corrige o numero nessa posicao para 1*/
        printf("X[%d] = %d\n",i,x[i]); /*Printa a posicao da array e seu valor correspondente*/
    }
}