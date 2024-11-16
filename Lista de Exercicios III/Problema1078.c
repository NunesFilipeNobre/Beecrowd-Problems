#include <stdio.h>

int main()
{
    int n; /*Declara variavel*/
    scanf("%d",&n); /*Recebe o valor da variavel*/
    for (int i = 1; i <= 10; i++) /*Repete dez vezes comecando pelo 1*/
        printf("%d x %d = %d\n",i,n,i*n); /*Printa o numero na tabuada x o numero dado e o resultado*/
}