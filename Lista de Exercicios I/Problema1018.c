#include <stdio.h>

int main()
{
    int total;
    scanf("%d",&total);
    
    printf("%d\n",total);
    printf("%d nota(s) de R$ 100,00\n",total/100);
    total-=100*(total/100);
    printf("%d nota(s) de R$ 50,00\n",total/50);
    total-=50*(total/50);
    printf("%d nota(s) de R$ 20,00\n",total/20);
    total-=20*(total/20);
    printf("%d nota(s) de R$ 10,00\n",total/10);
    total-=10*(total/10);
    printf("%d nota(s) de R$ 5,00\n",total/5);
    total-=5*(total/5);
    printf("%d nota(s) de R$ 2,00\n",total/2);
    total-=2*(total/2);
    printf("%d nota(s) de R$ 1,00\n",total%2);
}