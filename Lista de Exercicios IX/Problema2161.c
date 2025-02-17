#include <stdio.h>

double raiz(int repet)
{
    if (repet == 0)
    {
        return 0;
    }
    else
    {
        return 1/(6+raiz(repet-1));
    }
}

int main()
{
    int repet;
    scanf("%d",&repet);

    printf("%.10lf\n",3+raiz(repet));
}