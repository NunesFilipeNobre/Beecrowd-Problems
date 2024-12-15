#include <stdio.h>
            /*Entender como usar EOF*/
int main() /*Solucao errada, testar pegar o maior numero e ir somando com os mais pequenos ate os maiores*/
{
    int n,menorDif=9999999,temp, moduloDif;
    long long int total=0, x[10000], comparador=0;

    while (1)
    {
        scanf("%d",&n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&x[i]);
            total+=x[i];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j=0; j < n-1; j++)
            {
                if(x[j] > x[j+1])
                {
                    temp = x[j];
                    x[j] = x[j+1];
                    x[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < (n); i++)
        {
            if(((total-=x[i])-(comparador+=x[i]))<0)
            {
                moduloDif = (-(total)+(comparador));
            }
            else
            {
                moduloDif = ((total)-(comparador));
            }
            if (menorDif>moduloDif)
            {
                menorDif = moduloDif;
            }
        }
        printf("%d\n",menorDif);
        comparador=0;
        total=0;
        menorDif=9999999;
    }
}