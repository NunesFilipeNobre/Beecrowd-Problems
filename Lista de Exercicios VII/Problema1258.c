#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[51];
    char cor[51];
    char tama;
}Info;


int main()
{
    int casos,primeiro=1;
    char temp[51],tempchar;
    while (1)
    {
        scanf("%d",&casos);
        getchar();
        if (casos==0)
        {
            return 0;
        }
        if (primeiro==1)
        {
            primeiro=0;
        }
        else
        {
            printf("\n");
        }

        Info camisa[casos];
        for (int i = 0; i < (casos); i++)
        {
            scanf("%[^\n]",camisa[i].nome);
            getchar();
            scanf("%[^ ] %c",camisa[i].cor,&camisa[i].tama);
            getchar();
        }
        for (int i = 0; i < casos-1; i++)
        {
            for (int j = 0; j < casos-i-1; j++)
            {
                for (int k = 0; k < strlen(camisa[j].nome); k++)
                {
                    if (camisa[j].nome[k]>camisa[j+1].nome[k])
                    {
                        strcpy(temp,camisa[j].nome);
                        strcpy(camisa[j].nome,camisa[j+1].nome);
                        strcpy(camisa[j+1].nome,temp);

                        strcpy(temp,camisa[j].cor);
                        strcpy(camisa[j].cor,camisa[j+1].cor);
                        strcpy(camisa[j+1].cor,temp);

                        tempchar=camisa[j].tama;
                        camisa[j].tama=camisa[j+1].tama;
                        camisa[j+1].tama=tempchar;
                        break;
                    }
                    else if(camisa[j].nome[k]<camisa[j+1].nome[k])
                        break;
                }
            }
        }
        for (int i = 0; i < casos-1; i++)
        {
            for (int j = 0; j < casos-i-1; j++)
            {
                if (camisa[j].tama<camisa[j+1].tama)
                {
                    strcpy(temp,camisa[j].nome);
                    strcpy(camisa[j].nome,camisa[j+1].nome);
                    strcpy(camisa[j+1].nome,temp);

                    strcpy(temp,camisa[j].cor);
                    strcpy(camisa[j].cor,camisa[j+1].cor);
                    strcpy(camisa[j+1].cor,temp);

                    tempchar=camisa[j].tama;
                    camisa[j].tama=camisa[j+1].tama;
                    camisa[j+1].tama=tempchar;
                }
            }
        }
        for (int i = 0; i < casos-1; i++)
        {
            for (int j = 0; j < casos-i-1; j++)
            {
                for (int k = 0; k < strlen(camisa[j].cor); k++)
                {
                    if (camisa[j].cor[k]>camisa[j+1].cor[k])
                    {
                        strcpy(temp,camisa[j].nome);
                        strcpy(camisa[j].nome,camisa[j+1].nome);
                        strcpy(camisa[j+1].nome,temp);

                        strcpy(temp,camisa[j].cor);
                        strcpy(camisa[j].cor,camisa[j+1].cor);
                        strcpy(camisa[j+1].cor,temp);

                        tempchar=camisa[j].tama;
                        camisa[j].tama=camisa[j+1].tama;
                        camisa[j+1].tama=tempchar;
                        break;
                    }
                    else if(camisa[j].cor[k]<camisa[j+1].cor[k])
                        break;
                }
            }
        }
        for (int i = 0; i < casos; i++)
        {
            printf("%s %c %s\n",camisa[i].cor,camisa[i].tama,camisa[i].nome);
        }
    }
    return 0;
}