#include <stdio.h>

int potenciacao(int exp)
{
    int result=2;
    if (exp == 0)
    {
        return 1;
    }
    for (int i = 0; i < exp-1; i++)
    {
        result=result*2;
    }
    return result;
}

int main()
{
    int casos,linha,total=0;

    scanf("%d",&casos);

    for (int i = 0; i < casos; i++)
    {
        scanf("%d",&linha);
        for (int j = 0; j < linha; j++)
        {
            total+=potenciacao(j);
        }
        printf("%d\n",total);
        total=0;
    }
}