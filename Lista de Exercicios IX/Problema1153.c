#include <stdio.h>

int main()
{
    long long int num;
    scanf("%lld",&num);

    if (num<2)
    {
        printf("1\n");
        return 0;
    }

    for (int i = num-1; i > 0; i--)
    {
        num = num*i;
    }
    printf("%lld\n",num);   
}