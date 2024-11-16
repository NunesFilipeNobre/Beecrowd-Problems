#include <stdio.h>

int main()
{
    int segundos;
    scanf("%d",&segundos);
    printf("%d:%d:%d\n",segundos/3600,(segundos%3600)/60,(segundos%3600)%60);
}