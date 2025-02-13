#include <stdio.h>
#include <string.h>

typedef struct
{
    int freq;
}Dados;


int main()
{
    int casos,maior=0;
    char linha[700],sequencia[700];
    Dados caract[700];

    scanf("%d",&casos);
    getchar();

    for (int i = 0; i < casos; i++)
    {
        scanf("%[^\n]",linha);
        getchar();

        for (int j = 0; j < 700; j++)
        {
            caract[j].freq=0;
        }
        for (int j = 0; j < strlen(linha); j++)
        {
            if (linha[j]>='A' && linha[j]<='Z')
            {
                linha[j] += ('a'-'A');
            }
            caract[linha[j]].freq+=1;
            if (maior<caract[linha[j]].freq && linha[j]>='a' && linha[j]<='z')
            {
                maior = caract[linha[j]].freq;
            }
        }
        
        for (int j = 0; j < 700; j++)
        {
            if (maior==caract[j].freq && j>='a' && j<='z')
            {
                printf("%c",j);
            }
        }
        printf("\n");
        maior=0;
    }
}