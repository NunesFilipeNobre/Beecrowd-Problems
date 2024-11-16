#include <stdio.h>

int main()
{
    int n,x,soma=0;
    scanf(" %d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d",&x);
        for (int j = 1; j <= (x/2); j++)
        {
            if (!(x%j))
                soma+=j;
        }
        if (soma==x)
            printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
        soma=0;    
    }
}