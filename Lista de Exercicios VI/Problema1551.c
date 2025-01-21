#include <stdio.h>
#include <string.h>
int main()
{
    int casos,alfabeto[26],letra,total=0;
    scanf("%d",&casos);
    getchar();
    char frase[casos][1001];
    for (int i = 0; i < casos; i++)
    {
        for (int i = 0; i < 26; i++)
        {
            alfabeto[i]=0;
        }
        gets(frase[i]);
        for (int j = 0; j < strlen(frase[i]); j++)
        {
            if ('a'<=frase[i][j] && frase[i][j]<='z')
            {
                letra=frase[i][j]-'a';
                if(alfabeto[letra]!=1)
                {
                    total+=1;
                    alfabeto[letra]=1;
                }
            }
        }
        if (total<13)
        {
            printf("frase mal elaborada\n");
        }
        else if (total==26)
        {
            printf("frase completa\n");
        }
        else
        {
            printf("frase quase completa\n");
        }
        total=0;
    }
}