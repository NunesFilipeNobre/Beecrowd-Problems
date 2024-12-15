#include <stdio.h>

int main()
{
    int n,alternativas[5],preto,numPretos=0;
    while (1)
    {
        scanf("%d",&n);
        if (n==0)
        {
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                scanf("%d",&alternativas[j]);
            }
            for (int j = 0; j < 5; j++)
            {
                if (alternativas[j]<=127)
                {
                    preto=j;
                    numPretos+=1;
                }
            }
            if (numPretos!=1)
            {
                printf("*\n");
            }
            else
            {
                switch (preto)
                {
                    case 0: printf("A\n");break;
                    case 1: printf("B\n");break;
                    case 2: printf("C\n");break;
                    case 3: printf("D\n");break;
                    case 4: printf("E\n");break;
                }
            }
            numPretos=0;
        }
    }
}