#include <stdio.h>

int main()
{
    int n,m,k=0,pontos[4];

    while (1)    
    {
        if(scanf(" %d",&n)==EOF)
            return 0;
        if(scanf(" %d",&m)==EOF)
            return 0;
        int cidade[n][m];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(scanf(" %d",&cidade[i][j])==EOF)
                    return 0;
                if (cidade[i][j]==1 || cidade[i][j]==2)
                {
                    pontos[k]=i;
                    pontos[k+1]=j;
                    k+=2;
                }
            }
        }
        printf("%d\n",abs(pontos[0]-pontos[2])+abs(pontos[1]-pontos[3]));
        k=0;
    }
}