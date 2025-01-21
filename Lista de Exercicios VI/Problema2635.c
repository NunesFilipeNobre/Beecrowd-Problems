#include <stdio.h>
#include <string.h>

int main()
{
    int numSug,numPesq,maior= -1,sugeridas=0,tamanho;

    scanf("%d",&numSug);
    getchar();
    char sugestoes[numSug][101];
    for (int i = 0; i < numSug; i++)
    {
        gets(sugestoes[i]);
    }
    
    scanf("%d",&numPesq);
    getchar();
    char pesquisas[numPesq][101];
    for (int i = 0; i < numPesq; i++)
    {
        gets(pesquisas[i]);
        for (int j = 0; j < numSug; j++)
        {
            if(strncmp(pesquisas[i],sugestoes[j],strlen(pesquisas[i]))==0)
            {
                tamanho=strlen(sugestoes[j]);
                sugeridas+=1;
                if (maior<tamanho)
                {
                    maior=tamanho;
                }
            }
        }
        if (maior==-1)
            printf("-1\n");
        else
            printf("%d %d\n",sugeridas,maior);
        sugeridas=0;
        maior=-1;
    }
}