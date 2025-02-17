#include <stdio.h>

int mdc(int men, int mai, int pMen, int pMai)
{
    if (pMai%men==0 && pMen%men==0)
    {
        return men;
    }
    else
    {
        mdc(mai%men,men,pMen,pMai);
    }
}

int main()
{
    int casos,f1,f2;
    scanf("%d",&casos);
    for (int i = 0; i < casos; i++)
    {
        scanf(" %d %d",&f1,&f2);
        
        if (f1<f2)
            printf("%d\n",mdc(f1,f2,f1,f2));
        else
            printf("%d\n",mdc(f2,f1,f2,f1));
    }
    return 0;
}