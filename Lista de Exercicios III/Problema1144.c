#include <stdio.h>
int main()
{
    int n; /*Declara a variavel n*/
    scanf("%d",&n); /*Recebe o valor da variavel n*/
    for (int i=1; i <= n; i++) /*Loop que repete n vezes a partir do 1*/
    {
        printf("%d %d %d\n%d %d %d\n",i,i*i,i*i*i,i,(i*i)+1,(i*i*i)+1); /*Printa i, i ao quadrado e i ao cubo, i, i ao quadrado mais um e i ao cubo mais um*/
    }
}