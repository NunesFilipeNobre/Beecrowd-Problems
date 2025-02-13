#include <stdio.h>
#include <string.h>

typedef struct
{
    int val;
    char nome[21];
}Carnes;


int main()
{
    while (1)
    {
        int casos;
        char temp[21];
        if(scanf("%d",&casos)==EOF)
        {
            return 0;
        }
        Carnes seq[casos];

        for (int i = 0; i < casos; i++)
        {
            if(scanf("%s %d",seq[i].nome,&seq[i].val)==EOF)
            {
                return 0;
            }
        }

        for (int i = 0; i < (casos-1); i++)
        {
            for (int j = 0; j < (casos-i-1); j++)
            {
                if (seq[j].val>seq[j+1].val)
                {
                    strcpy(temp,seq[j].nome);
                    strcpy(seq[j].nome,seq[j+1].nome);
                    strcpy(seq[j+1].nome,temp);

                    int tempNum = seq[j].val;
                    seq[j].val = seq[j+1].val;
                    seq[j+1].val = tempNum;
                }
            }
        }

        for (int i = 0; i < casos; i++)
        {
            if (i==0)
                printf("%s",seq[i].nome);
            else
                printf(" %s",seq[i].nome);
        }
        printf("\n");
    }
}