#include <stdio.h>
int main()
{
    int n; /*Declara a variavel*/
    scanf("%d",&n); /*Recebe o valor da variavel*/
    for (int i = 1; i <= 10000; i++) /*Loop de 10000 repeticoes, com i aumentando de 1 em 1*/
        if (i%n==2) /*Se o resto de i dividido por n for 2*/
            printf("%d\n",i);   /*Printa i*/
}