#include <stdio.h>
#include <string.h>

int main()
{
    int casos,zeroUm[2]={0,0},result=0;
    char num[1001];

    while (1)
    {
        scanf("%d",&casos);
        getchar();
        if (casos==0)
            return 0;
        
        for (int i = 0; i < casos; i++)
        {
            gets(num);
            for (int j = 0; j < strlen(num); j++)
            {
                if (strlen(num)%2)
                {
                    if (j%2)
                        zeroUm[1]+=(num[j]-'0');
                    else
                        zeroUm[0]+=(num[j]-'0');
                }
                else
                {
                    if (j%2)
                        zeroUm[0]+=(num[j]-'0');
                    else
                        zeroUm[1]+=(num[j]-'0');
                }
            }
            zeroUm[0]=(zeroUm[0]/1000)+((zeroUm[0]%1000)/100)+(((zeroUm[0]%1000)%100)/10)+(((zeroUm[0]%1000)%100)%10);
            zeroUm[1]=(zeroUm[1]/1000)+((zeroUm[1]%1000)/100)+(((zeroUm[1]%1000)%100)/10)+(((zeroUm[1]%1000)%100)%10);
            result=zeroUm[0]+zeroUm[1];

            printf("%d\n",result);
            result=0;
            zeroUm[0]=0;
            zeroUm[1]=0;
        }
    }
}