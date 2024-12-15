#include <stdio.h>

int main()
{
    int totalFig, compradas, restante, tempFig=0;
    scanf("%d",&totalFig);
    int fig[totalFig];
    scanf("%d",&compradas);

    for (int i = 0; i < totalFig; i++)
    {
        fig[i]=0;
    }
    for (int i = 0; i < compradas; i++)
    {
        scanf("%d",&tempFig);
        fig[tempFig-1]+=1;
    }
    restante=totalFig;
    for (int i = 0; i < totalFig; i++)
    {
        if (fig[i]>0)
        {
            restante-=1;
        }
    }
    printf("%d\n",restante);
}