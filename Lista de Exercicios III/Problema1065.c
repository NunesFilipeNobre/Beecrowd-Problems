#include <stdio.h>
int main()
{
    int numero,contaPares=0; /*Declara variaveis*/
    for(int i=0;i<5;i++) /*Loop de 5 repeticoes*/
    {
        scanf("%d",&numero); /*Recebe um dos valores dados*/
        if (numero%2==0) /*Verifica se o resto da divisao por 2 da 0 (se eh par)*/
            contaPares+=1;/*Se sim, adiciona 1 ao valor conta pares*/
    }
    printf("%d valores pares\n",contaPares); /*Printa a contagem de pares*/
}