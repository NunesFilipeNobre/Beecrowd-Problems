#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[1001];
    int pwr,kll,dth;
}Godofor;

int main()
{
    int numCand;
    char temp[1001];
    scanf("%d",&numCand);
    Godofor cand[numCand];

    for (int i = 0; i < numCand; i++)
    {
        scanf(" %s %d %d %d",cand[i].nome,&cand[i].pwr,&cand[i].kll,&cand[i].dth);
    }
    for (int i = 0; i < (numCand-1); i++)
    {
        for (int j = 0; j < (numCand-i-1); j++)
        {
            for (int k = 0; k < strlen(cand[j].nome); k++)
            {
                if (cand[j].nome[k]>cand[j+1].nome[k])
                {
                    strcpy(temp,cand[j].nome);
                    strcpy(cand[j].nome,cand[j+1].nome);
                    strcpy(cand[j+1].nome,temp);

                    int tempNum = cand[j].pwr;
                    cand[j].pwr = cand[j+1].pwr;
                    cand[j+1].pwr = tempNum;

                    tempNum = cand[j].kll;
                    cand[j].kll = cand[j+1].kll;
                    cand[j+1].kll = tempNum;

                    tempNum = cand[j].dth;
                    cand[j].dth = cand[j+1].dth;
                    cand[j+1].dth = tempNum;
                    break;
                }
                else if (cand[j].nome[k]<cand[j+1].nome[k])
                    break;
            }
        }
    }
    for (int i = 0; i < (numCand-1); i++)
    {
        for (int j = 0; j < (numCand-i-1); j++)
        {
            if (cand[j].dth>cand[j+1].dth)
            {
                strcpy(temp,cand[j].nome);
                strcpy(cand[j].nome,cand[j+1].nome);
                strcpy(cand[j+1].nome,temp);

                int tempNum = cand[j].pwr;
                cand[j].pwr = cand[j+1].pwr;
                cand[j+1].pwr = tempNum;

                tempNum = cand[j].kll;
                cand[j].kll = cand[j+1].kll;
                cand[j+1].kll = tempNum;

                tempNum = cand[j].dth;
                cand[j].dth = cand[j+1].dth;
                cand[j+1].dth = tempNum;
            }
        }
    }
    for (int i = 0; i < (numCand-1); i++)
    {
        for (int j = 0; j < (numCand-i-1); j++)
        {
            if (cand[j].kll<cand[j+1].kll)
            {
                strcpy(temp,cand[j].nome);
                strcpy(cand[j].nome,cand[j+1].nome);
                strcpy(cand[j+1].nome,temp);

                int tempNum = cand[j].pwr;
                cand[j].pwr = cand[j+1].pwr;
                cand[j+1].pwr = tempNum;

                tempNum = cand[j].kll;
                cand[j].kll = cand[j+1].kll;
                cand[j+1].kll = tempNum;

                tempNum = cand[j].dth;
                cand[j].dth = cand[j+1].dth;
                cand[j+1].dth = tempNum;
            }
        }
    }
    for (int i = 0; i < (numCand-1); i++)
    {
        for (int j = 0; j < (numCand-i-1); j++)
        {
            if (cand[j].pwr<cand[j+1].pwr)
            {
                strcpy(temp,cand[j].nome);
                strcpy(cand[j].nome,cand[j+1].nome);
                strcpy(cand[j+1].nome,temp);

                int tempNum = cand[j].pwr;
                cand[j].pwr = cand[j+1].pwr;
                cand[j+1].pwr = tempNum;

                tempNum = cand[j].kll;
                cand[j].kll = cand[j+1].kll;
                cand[j+1].kll = tempNum;

                tempNum = cand[j].dth;
                cand[j].dth = cand[j+1].dth;
                cand[j+1].dth = tempNum;
            }
        }
    }
    printf("%s\n",cand[0].nome);
}