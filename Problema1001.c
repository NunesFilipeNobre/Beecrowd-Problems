#include <stdio.h>

int main()
{
    int a,b;        /*Declara as variaveis do tipo inteiro a e b, sem inicializa-las*/
    scanf("%d",&a); /*A variavel "a" recebe o valor do tipo inteiro (Nao esquecer do caractere &)*/
    scanf("%d",&b); /*A variavel "b" recebe o valor do tipo inteiro (Nao esquecer do caractere &)*/
    printf("X = %d\n",a+b); /*Printa o valor da soma de a e b*/
}