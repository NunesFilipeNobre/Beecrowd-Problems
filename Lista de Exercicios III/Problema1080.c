#include <stdio.h>

int main()
{
    int n,maior,maiorPos=1; /*Declara variaveis*/
    scanf("%d",&n); /*Recebe o primeiro numero dado pela questao*/
    maior=n; /*Define ele como o maior numero (No momento)*/
    for (int i = 2; i <= 100; i++) /*Loop que repete 99 vezes, comecando do 2 (Pois ja recebemos um numero)*/
    {
        scanf("%d",&n); /*Recebe o valor de um numero*/
        if (n>maior) /*Se ele for maior que o maior numero salvo:*/
        {
            maior=n; /*Recebe ele como o maior numero*/
            maiorPos=i; /*Recebe a posicao do numero pela contagem de repeticoes*/
        }
    }
    printf("%d\n%d\n",maior,maiorPos); /*Printa o maior numero e sua posicao*/
}