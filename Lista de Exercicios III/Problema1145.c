#include <stdio.h>
int main()
{
    int x,y,reserva; /*Define as variaveis*/
    scanf(" %d %d",&x,&y); /*Recebe os valores x e y*/
    for (int i=1; i <= y; i++) /*Loop que se repete y vezes a partir do 1*/
    {
        if (i%x) /*Se i nao for divisivel por x*/
            printf("%d ",i); /*Printa o numero i seguido de um espaco*/
        else /*Se for divisivel*/
            printf("%d\n",i); /*Printa o numero i seguido de uma quebra de linha*/
    }
    if (y%x) /*Se y nao for divisivel por x*/
        printf("\n"); /*Printa uma quebra de linha no final de todo o texto (Necessario pois caso o texto nao acabe num numero divisivel por 3 no loop acima, o programa acabaria sem uma quebra de linha)*/
}