#include <stdio.h>
int primeiro=1;

int fibas(int num,int um,int dois)
{
    if (num==0)
        return 0;
    num-=1;

    if (primeiro)
    {
        printf("%d",um+dois);
        primeiro=0;
    }
    else
        printf(" %d",um+dois);

    if (um+dois==0)
        fibas(num,0,1);
    else
        fibas(num,um+dois,um);
}

int main()
{
    int num;
    scanf("%d",&num);
    fibas(num,0,0);
    printf("\n");
    return 0;
}