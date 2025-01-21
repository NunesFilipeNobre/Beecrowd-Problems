#include <stdio.h>

int main()
{
    int casos,x[5],y[5];
    scanf("%d",&casos);

    for (int i = 0; i < casos; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4]);
        if (x[4]>=x[0] && x[4]<=x[1] && x[4]<=x[2] && x[4]>=x[3])
        {
            if (y[4]>=y[0] && y[4]>=y[1] && y[4]<=y[2] && y[4]<=y[3])
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}