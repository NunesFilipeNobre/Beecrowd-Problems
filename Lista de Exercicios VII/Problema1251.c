#include <stdio.h>
#include <string.h>

typedef struct
{
    int freq;
}Dados;


int main()
{
    int primeiro=0;
    char linha[1001],sequencia[1001];
    Dados caract[1001];

    while (1)
    {
        if(scanf("%[^\n]",linha)==EOF)
        {
            return 0;
        }
        getchar();
        if(primeiro)
            printf("\n");
        else
            primeiro=1;

        for (int j = 0; j < 1001; j++)
        {
            caract[j].freq=0;
        }
        for (int j = 0; j < strlen(linha); j++)
        {
            caract[linha[j]].freq+=1;
        }
        for (int i = 1; i <= strlen(linha); i++)
        {
            for (int j=1001; j > 0; j--)
            {
                if (caract[j].freq==i)
                {
                    printf("%d %d\n",j,caract[j].freq);
                }
            }
        }
    }
}