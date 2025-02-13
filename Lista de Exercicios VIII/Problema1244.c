#include <stdio.h>
#include <string.h>

int main()
{
    int casos,nItem=0;
    char linha[5000],*palavra,temp[51];
    scanf("%d",&casos);
    getchar();

    char palavras[50][51];

    for (int i = 0; i < casos; i++)
    {
        scanf("%[^\n]",linha);
        getchar();

        palavra = strtok(linha," ");
        do
        {
            strcpy(palavras[nItem],palavra);
            nItem+=1;
        } 
        while (palavra=strtok(NULL," "));

        for (int j = 0; j < nItem-1; j++)
        {
            for (int k = 0; k < nItem-j-1; k++)
            {
                if (strlen(palavras[k])<strlen(palavras[k+1]))
                {
                    strcpy(temp,palavras[k]);
                    strcpy(palavras[k],palavras[k+1]);
                    strcpy(palavras[k+1],temp);
                }
            }
        }

        for (int j = 0; j < nItem; j++)
        {
            if (j==0)
            {
                printf("%s",palavras[j]);
            }
            else
                printf(" %s",palavras[j]);
        }
        printf("\n");
        nItem=0;
    }
}