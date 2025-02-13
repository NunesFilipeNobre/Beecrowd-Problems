#include <stdio.h>

int main()
{
    int casos,valor;
    int num[2001];
    scanf("%d",&casos);
    for (int i = 1; i < 2001; i++)
    {
        num[i]=0;
    }
    for (int i = 0; i < casos; i++)
    {
        scanf("%d",&valor);
        num[valor]+=1;
    }
    for (int i = 1; i < 2001; i++)
    {
        if (num[i]!=0)
        {
            printf("%d aparece %d vez(es)\n",i,num[i]);
        }
    }
}