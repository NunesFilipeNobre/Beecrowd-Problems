#include <stdio.h>

int main()
{
    int n,k,fat,contagem,mortos=0;
    int numeros[10000];
    scanf("%d%d",&n,&k);

    for(contagem=1; n>=1; contagem++)
    {
        if (numeros[contagem]==1)
        {
            contagem+=1;
            numeros[contagem+mortos*k]=1;
            n-=1;
            mortos+=1;
        }
        
        if(contagem==k);
        {
            numeros[contagem+mortos*k]=1;
            n-=1;
            mortos+=1;
            contagem=0;
        }
    }
}