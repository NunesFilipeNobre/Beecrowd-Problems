#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int terreno[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&terreno[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (terreno[i][j]==42)
            {
                if (terreno[i-1][j-1]==7 && terreno[i-1][j]==7 && terreno[i-1][j+1]==7)
                {
                    if (terreno[i+1][j-1]==7 && terreno[i+1][j]==7 && terreno[i+1][j+1]==7)
                    {
                        if (terreno[i][j-1]==7 && terreno[i][j+1]==7)
                        {
                            printf("%d %d\n",i+1,j+1);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("0 0\n");
}