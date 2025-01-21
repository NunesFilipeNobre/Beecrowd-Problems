#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    unsigned long long int total=0, inicial=0, menorDif=9999999999999999;

    while (scanf("%d",&n)!=EOF)
    {
        unsigned long long int x[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%llu",&x[i]);
            total+=x[i];
        }
        for (int i = 0; i < (n-1); i++)
        {
            total-=x[i];
            inicial+=x[i];
            if (menorDif>llabs(inicial-total)) /*long long absolute*/
            {
                menorDif = llabs(inicial-total);
            }
        }
        if (n == 1)
        {
            printf("%llu\n",total);
        }
        else
        {
            printf("%llu\n",menorDif);
        }
        total=0;
        inicial=0;
        menorDif=9999999999999999;
    }
}