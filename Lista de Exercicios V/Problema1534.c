#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d",&n)!= EOF)
    {
        int m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[i][j]=3;
            }
        }

        for (int i = 0; i < n; i++)
        {
            m[i][i]=1;
        }
        for (int i = 0; i < n; i++)
        {
            m[i][n-i-1]=2;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j==n-1)
                {
                    printf("%d\n",m[i][j]);
                }
                else
                {
                    printf("%d",m[i][j]);
                }
            }
        }
    }
    return 0;
}