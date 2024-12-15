#include <stdio.h>

int main()
{
    int areaTele, numEstrelas, totalEstrelasPercebidas=0;
    scanf(" %d%d",&areaTele,&numEstrelas);
    int fotonsEstrela[numEstrelas];
    for (int i = 0; i < numEstrelas; i++)
    {
        scanf(" %d",&fotonsEstrela[i]);

        if (40000000<=(fotonsEstrela[i]*areaTele))
        {
            totalEstrelasPercebidas+=1;
        }
    }

    printf("%d\n",totalEstrelasPercebidas);
}