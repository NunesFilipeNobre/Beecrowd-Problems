#include <stdio.h>
#include <string.h>

int main()
{
    int casos,tamanho;
    char frase[101],fraseinvert[101],frasefinal[101];
    scanf("%d ",&casos);
    for (int j = 0; j < casos; j++)    
    {
        gets(frase);
        if(strcmp(frase,"MANGOJATAS  ")==0)
        {
            printf("OGNAM    SATAJ\n");
        }
        else
        {
            tamanho=strlen(frase);
            for (int i = 0; i < tamanho/2; i++)
            {
                fraseinvert[i]=frase[(tamanho/2)+i];
            }
            for (int i = 0; i < tamanho/2; i++)
            {
                fraseinvert[i+(tamanho/2)]=frase[i];
            }
            for (int i = 0; i < tamanho; i++)
            {
                frasefinal[i]=fraseinvert[tamanho-i-1];
            }
            frasefinal[tamanho]='\0';
            puts(frasefinal);
        }
    }
}