#include <stdio.h>

int main()
{
    int a,b,c,maior,meio,menor; /*Declara as variaveis a serem recebidas e as variaveis de ordenamento*/
    scanf("%d%d%d",&a,&b,&c); /*Recebe os 3 numeros*/
    if(a>b && a>c) /*Se a for maior que b e c:*/
    {
        maior = a; /*O maior eh o numero a*/
        if (b>c) /*Se b for maior que c:*/
        {
            meio=b;/*O numero do meio eh b*/
            menor=c;/*O menor eh o numero c*/
        }
        else /*Caso contrario (c eh maior que b:)*/
        {
            meio=c;/*O numero do meio eh c*/
            menor=b;/*O menor eh o numero b*/
        }
    }
    else if(b>a && b>c)
    {
        maior = b;
        if (a>c)
        {
            meio=a;
            menor=c;
        }
        else
        {
            meio=c;
            menor=a;
        }
    }
    else if (c>a && c>b)
    {
        maior = c;
        if (a>b)
        {
            meio=a;
            menor=b;
        }
        else
        {
            meio=b;
            menor=a;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",menor,meio,maior,a,b,c); /*Printa os numeros em ordem descrescente e os numeros na ordem em que foram dados*/
}