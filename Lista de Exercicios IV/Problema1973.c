#include <stdio.h>

int main()
{
    long long int numEstrelas, i, contaCarneiro=0, contaAtacadas=0;

    scanf("%lld",&numEstrelas);

    long long int carneiros[numEstrelas], atacadas[numEstrelas];

    for (i = 0; i < numEstrelas; i++)
    {
        atacadas[i]=0;
    }
    for (i = 0; i < numEstrelas; i++)
    {
        scanf(" %lld",&carneiros[i]);
    }

    i=0;
    while (i>=0 && i<numEstrelas)
    {
        atacadas[i]+=1;
        if(carneiros[i]>0)
        {
            carneiros[i]-=1;
            if ((carneiros[i]+1)%2)
            {
                i+=1;
            }
            else
            {
                i-=1;
            }
        }
        else
        {
            if (carneiros[i]%2)
            {
                i+=1;
            }
            else
            {
                i-=1;
            }
        }
    }

    for (i = 0; i < numEstrelas; i++)
    {
        contaCarneiro+=carneiros[i];
        if (atacadas[i]>0)
        {
            contaAtacadas+=1;
        }
    }
    printf("%lld %lld\n",contaAtacadas,contaCarneiro);
}