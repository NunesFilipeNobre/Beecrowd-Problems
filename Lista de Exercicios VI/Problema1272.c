#include <stdio.h>
#include <string.h>

int main()
{
    int casos;
    int primeira=0,k=0;
    char frase[51],fraseFin[51];
    scanf("%d",&casos);
    getchar();
    for (int i = 0; i < casos; i++)
    {
        gets(frase);
        for (int j = 0; j < strlen(frase); j++)
        {
            if (frase[j]==' ')
            {
                primeira=0;
            }
            else if(primeira==0)
            {
                primeira=1;
                fraseFin[k]=frase[j];
                k++;
            }
        }
        fraseFin[k]='\0';
        k=0;
        primeira=0;
        printf("%s\n",fraseFin);
    }
}