#include <stdio.h>
#include <math.h>

int main()
{
    int t,w[1000],h[1000],x[1000],y[1000],n[1000],cx[1000],cy[1000],dano[1000],range[1000];
    char spell[1000];
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d%d",&w[i],&h[i],&x[i],&y[i]);
        gets(spell);
        scanf("%d%d%d",&n[i],&cx[i],&cy[i]);
        if(spell[0]=='f')
        {
            dano[i]=200;
            switch(n[i])
            {
                case 1:range[i]=20; break;
                case 2:range[i]=30; break;
                case 3:range[i]=50; break;
            }
        }
        else if(spell[0]='w')
        {
            dano[i]=300;
            switch(n[i])
            {
                case 1:range[i]=10; break;
                case 2:range[i]=25; break;
                case 3:range[i]=40; break;
            }
        }
        else if(spell[0]='e')
        {
            dano[i]=400;
            switch(n[i])
            {
                case 1:range[i]=25; break;
                case 2:range[i]=55; break;
                case 3:range[i]=70; break;
            }
        }
        else if(spell[0]='a')
        {
            dano[i]=100;
            switch(n[i])
            {
                case 1:range[i]=18; break;
                case 2:range[i]=38; break;
                case 3:range[i]=60; break;
            }
        }
    }

    if (sqrt((x-cx)*(x-cx)+(y-cy)*(y-cy)))
    {
        /* code */
    }
    
    for (int i = 0; i < t; i++)
    {
        printf("%d",dano);
    }
}