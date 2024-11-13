#include<stdio.h>
int main()
{
    int n;                           /*Declara a variavel n*/
    scanf("%d",&n);                  /*Recebe o valor da variavel*/
    for (int i=2; i<=n; i+=2)        /*Repeticao comecando no 2, pulando de 2 em 2 ate chegar no valor n*/
        printf("%d^2 = %d\n",i,i*i); /*Printa os valores das operacoes*/
}