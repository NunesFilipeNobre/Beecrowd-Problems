#include <stdio.h>
#include <string.h>

typedef struct
{
    char item[21];
}Lista;

int main()
{
    int casos,nItens=0;
    Lista lista[1000];
    char linha[20001],*palavra,temp[21];
    scanf("%d",&casos);
    getchar();

    for (int i = 0; i < casos; i++)
    {
        scanf("%[^\n]",linha);
        getchar();
        palavra = strtok(linha," ");
        do
        {
            strcpy(lista[nItens].item,palavra);
            nItens+=1;
        } while (palavra=strtok(NULL," "));
        
        for (int j = 0; j < nItens-1; j++)
        {
            for (int k = 0; k < nItens-j-1; k++)
            {
                for (int l = 0; l < strlen(lista[k].item); l++)
                {
                    if (lista[k].item[l]>lista[k+1].item[l])
                    {
                        strcpy(temp,lista[k].item);
                        strcpy(lista[k].item,lista[k+1].item);
                        strcpy(lista[k+1].item,temp);
                        break;
                    }
                    else if (lista[k].item[l]<lista[k+1].item[l])
                        break;
                }
            }
        }
        for (int j = 0; j < nItens; j++)
        {
            if (j==0)
            {
                printf("%s",lista[j].item);
            }
            else if (strcmp(lista[j].item,lista[j-1].item))
            {
                printf(" %s",lista[j].item);
            }
        }
        printf("\n");
        nItens=0;
    }
}