#include <stdio.h>

int main()
{
    int cv,ce,cs,fv,fe,fs; /*Declara as variaveis*/
    scanf("%d%d%d%d%d%d",&cv,&ce,&cs,&fv,&fe,&fs); /*Recebe o valor das variaveis*/

    if ((cv*3+ce)>(fv*3+fe)) /*Se a pontucao do cormengo for maior:*/
        printf("C");
    else if ((cv*3+ce)<(fv*3+fe)) /*Se a pontucao do flarinthians for maior:*/
        printf("F");
    else if (cs>fs) /*Se nenhuma for maior e se o saldo do cormengo for maior:*/
        printf("C");
    else if (cs<fs) /*Se nenhuma for maior e se o saldo do flarinthians for maior:*/
        printf("F");
    else            /*Caso contrario:*/
        printf("=");
    printf("\n");
}