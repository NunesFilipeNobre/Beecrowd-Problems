#include <stdio.h>
int main()
{
    int numero,contaPares=0,contaPositivo=0,contaNegativo=0; /*Declara variaveis*/
    for(int i=0;i<5;i++) /*Loop de 5 repeticoes*/
    {
        scanf("%d",&numero); /*Recebe um dos valores dados*/
        if (numero%2==0)     /*Verifica se o resto da divisao por 2 da 0 (se eh par)*/
            contaPares+=1;   /*Se sim, adiciona 1 ao valor conta pares*/
        if (numero<0)        /*Verifica se o numero eh negativo*/
            contaNegativo+=1;
        else if (numero>0)   /*Se nao, verifica se o numero eh positivo*/
            contaPositivo+=1;    
    }
    printf("%d valor(es) par(es)\n",contaPares); /*Printa a contagem de pares*/
    printf("%d valor(es) impar(es)\n",5-contaPares); /*Printa a contagem de impares (total menos pares)*/
    printf("%d valor(es) positivo(s)\n",contaPositivo); /*Printa a contagem de positivos*/
    printf("%d valor(es) negativo(s)\n",contaNegativo); /*Printa a contagem de negativos*/
}