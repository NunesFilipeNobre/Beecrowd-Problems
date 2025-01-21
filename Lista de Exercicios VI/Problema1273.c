#include <stdio.h>
#include <string.h>

int main()
{
    int palavras,maior=0;
    scanf("%d",&palavras);
    getchar();
    if (palavras==0)
    {
        return 0;
    }
    while (1)
    {
        maior=0;
        char frase[palavras][51];
        
        for (int i = 0; i < palavras; i++)
        {
            fgets(frase[i], 51, stdin);
            frase[i][strcspn(frase[i], "\n")] = '\0';
            if (maior<strlen(frase[i]))
            {
                maior=strlen(frase[i]);
            }
        }
        for (int i = 0; i < palavras; i++)
        {
            for (int j = 0; j < (maior-strlen(frase[i])); j++)
            {
                printf(" ");
            }
            printf("%s\n",frase[i]);
        }
        scanf("%d",&palavras);
        getchar();
        if (palavras==0)
        {
            return 0;
        }
        printf("\n");
    }    
}