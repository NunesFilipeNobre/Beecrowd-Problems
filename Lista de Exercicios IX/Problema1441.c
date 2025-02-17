#include <stdio.h>

int maior=0;

int granizo(int num)
{
    if (maior<num)
    {
        maior=num;
    }

    if (num==1)
    {
        return 0;
    }
    if (num%2)
    {
        granizo((num*3+1));
    }
    else
    {
        granizo((num/2));
    }
}

int main()
{
    int num;
    while (1)
    {
        scanf("%d",&num);
        if (num == 0)
        {
            return 0;
        }
        granizo(num);
        printf("%d\n",maior);
        maior=0;
    }
}