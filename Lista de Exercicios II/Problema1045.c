#include <stdio.h>

int main()
{
    double a,b,c,maior,meio,menor; /*Declara as variaveis*/
    scanf("%lf%lf%lf",&a,&b,&c);   /*Recebe as variaveis*/

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
    else if (a==b && a>c) /*Se 2 lados forem iguais e maiores que o terceiro:*/
    {
        maior = a;
        meio = b; /*Variavel "maior" e "meio" guardam o mesmo valor (isso nao atrapalha a resolucao)*/
        menor = c;
    }
    else if (a==b && a<c) /*Se 2 lados forem iguais e menores que o terceiro:*/
    {
        maior = c;
        meio = b;
        menor = a;
    }
    else if (a==c && a>b)
    {
        maior = a;
        meio = c;
        menor = b;
    }
    else if (a==c && a<b)
    {
        maior = b;
        meio = c;
        menor = a;
    }
    else if (c==b && c>a)
    {
        maior = c;
        meio = b;
        menor = a;
    }
    else if (c==b && c<a)
    {
        maior = a;
        meio = b;
        menor = c;
    }
    

    if (maior>=meio+menor) /*Verifica se nao forma triangulo*/
        printf("NAO FORMA TRIANGULO\n");
    else /*Se formar, verifica as propriedades do triangulo*/
    {
        if (maior*maior==meio*meio+menor*menor)
            printf("TRIANGULO RETANGULO\n");
        if (maior*maior>meio*meio+menor*menor)
            printf("TRIANGULO OBTUSANGULO\n");
        if (maior*maior<meio*meio+menor*menor)
            printf("TRIANGULO ACUTANGULO\n");
        if (a==b && a==c)
            printf("TRIANGULO EQUILATERO\n");
        if (a==b && a!=c || b==a && b!=c || c==a && c!=b || a==c && a!=b || b==c && b!=a || c==b && c!=a)
            printf("TRIANGULO ISOSCELES\n");
    }
}