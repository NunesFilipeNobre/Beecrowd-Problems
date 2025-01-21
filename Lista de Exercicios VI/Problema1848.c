#include <stdio.h>
#include <string.h>

int main()
{
    int num=0,contaCaw=0;
    char corvo[1000];
    while (1)
    {
        gets(corvo);
        if(strcmp(corvo,"caw caw")==0)
        {
            printf("%d\n",num);
            contaCaw+=1;
            if (contaCaw==3)
                return 0;
            num=0;
        }
        else
        {
            if (strcmp(corvo,"--*")==0)
            {
                num+=1;
            }
            else if (strcmp(corvo,"-*-")==0)
            {
                num+=2;
            }
            else if (strcmp(corvo,"*--")==0)
            {
                num+=4;
            }
            if (strcmp(corvo,"-**")==0)
            {
                num+=3;
            }
            else if (strcmp(corvo,"**-")==0)
            {
                num+=6;
            }
            else if (strcmp(corvo,"*-*")==0)
            {
                num+=5;
            }
            else if (strcmp(corvo,"***")==0)
            {
                num+=7;
            }
        }
    }
}