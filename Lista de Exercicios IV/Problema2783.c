#include <stdio.h>

int main()
{
    int totalFig, compradas, restante, tempFig=0, totalCarimb;
    scanf("%d",&totalFig);
    scanf("%d",&totalCarimb);
    int fig[totalFig], carimbadas[totalCarimb];
    scanf("%d",&compradas);

    for (int i = 0; i < totalFig; i++)
    {
        fig[i]=0;
    }
    for (int i = 0; i < totalCarimb; i++)
    {
        scanf("%d",&carimbadas[i]);
        carimbadas[i]-=1;
    }
    for (int i = 0; i < compradas; i++)
    {
        scanf("%d",&tempFig);
        fig[tempFig-1]+=1;
    }
    restante=totalCarimb;
    for (int i = 0; i < totalCarimb; i++)
    {
        if (fig[carimbadas[i]]>0)
        {
            restante-=1;
        }
    }
    printf("%d\n",restante);
}