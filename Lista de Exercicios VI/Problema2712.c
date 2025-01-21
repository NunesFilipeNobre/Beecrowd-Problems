#include <stdio.h>
#include <string.h>

int main()
{
    int testes,numPlaca,falha=1;

    scanf("%d",&testes);
    getchar();
    char placa[testes][101];
    for (int i = 0; i < testes; i++)
    {
        gets(placa[i]);
        if (strlen(placa[i])==8)
        {
            if ('A'<=placa[i][0] && 'Z'>=placa[i][0])
            {
                if ('A'<=placa[i][1] && 'Z'>=placa[i][1])
                {
                    if ('A'<=placa[i][2] && 'Z'>=placa[i][2])
                    {
                        if (placa[i][3]=='-')
                        {
                            if ('0'<=placa[i][4] && '9'>=placa[i][4])
                            {
                                if ('0'<=placa[i][5] && '9'>=placa[i][5])
                                {
                                    if ('0'<=placa[i][6] && '9'>=placa[i][6])
                                    {
                                        numPlaca=placa[i][7]-'0';
                                        switch (numPlaca)
                                        {
                                            case 1:
                                            case 2:printf("MONDAY\n"); falha=0; break;
                                            case 3:
                                            case 4:printf("TUESDAY\n"); falha=0; break;
                                            case 5:
                                            case 6:printf("WEDNESDAY\n"); falha=0; break;
                                            case 7:
                                            case 8:printf("THURSDAY\n"); falha=0; break;
                                            case 9:
                                            case 0:printf("FRIDAY\n"); falha=0; break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (falha==1)
        {
            printf("FAILURE\n");
        }
        falha=1;
    }
}