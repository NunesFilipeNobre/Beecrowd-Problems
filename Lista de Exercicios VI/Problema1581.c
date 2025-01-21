#include <stdio.h>
#include <string.h>

int main()
{
    int casos,pessoas,primeiro=0,ingles=0;
    scanf("%d",&casos);
    for (int i = 0; i < casos; i++)
    {
        scanf("%d",&pessoas);
        getchar();
        char idiomas[pessoas][21];
        for (int j = 0; j < pessoas; j++)
        {
            gets(idiomas[j]);
            if (primeiro)
            {
                if(strcmp(idiomas[j],idiomas[j-1])!=0)
                {
                    ingles=1;
                }
            }
            primeiro=1;
        }
        switch (ingles)
        {
            case 0: printf("%s\n",idiomas[0]); break;
            case 1: printf("ingles\n"); break;
        }
        ingles=0;
        primeiro=0;
    }
}