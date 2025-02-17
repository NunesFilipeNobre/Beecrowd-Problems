#include <stdio.h>

int main()
{
    int n,e1,e2,x1,x2;

    while (1)
    {
        if (scanf(" %d",&n)==EOF)
        {
            return 0;
        }

        scanf(" %d %d",&e1,&e2);
        int lin1[n],lin2[n],tran1[n-1],tran2[n-1],temp1[n],temp2[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &lin1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &lin2[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            scanf("%d", &tran1[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            scanf("%d", &tran2[i]);
        }
        scanf("%d %d", &x1, &x2);

        temp1[0] = e1+lin1[0];
        temp2[0] = e2+lin2[0];

        for (int i = 1; i < n; i++)
        {
            if (temp1[i-1] < temp2[i-1] + tran2[i-1])
                temp1[i] = lin1[i]+temp1[i-1];
            else
                temp1[i] = lin1[i]+temp2[i-1]+tran2[i-1];

            if (temp2[i-1] < temp1[i-1] + tran1[i-1])
                temp2[i] = lin2[i]+temp2[i-1];
            else
                temp2[i] = lin2[i]+temp1[i-1]+tran1[i-1];
        }

        if ((temp1[n-1]+x1) < (temp2[n-1]+x2))
            printf("%d\n",temp1[n-1]+x1);
        else
            printf("%d\n",temp2[n-1]+x2);
    }
}