#include <stdio.h>

int main()
{
    int num,primeiraMat=0;
    while (1)
    {
        scanf("%d",&num);
        if (num == 0)
        {
            return 0;
        }
        int matriz[num][num];

        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {   
                if ((i-j)>=0)
                {
                    matriz[i][j] = (i-j+1);
                }
                else
                {
                    matriz[i][j] = (j-i+1);
                }
                if (j==(num-1))
                {
                    if (matriz[i][j]>=100)
                    {
                        printf("%d\n",matriz[i][j]);
                    }
                    else if (matriz[i][j]>=10)
                    {
                        printf(" %d\n",matriz[i][j]);
                    }
                    else
                    {
                        printf("  %d\n",matriz[i][j]);
                    }
                }
                else
                {
                    if (matriz[i][j]>=100)
                    {
                        printf("%d ",matriz[i][j]);
                    }
                    else if (matriz[i][j]>=10)
                    {
                        printf(" %d ",matriz[i][j]);
                    }
                    else
                    {
                        printf("  %d ",matriz[i][j]);
                    }
                }
            }
        }
        printf("\n");
    }
}