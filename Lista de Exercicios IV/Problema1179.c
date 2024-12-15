#include <stdio.h>

int main()
{
    int numero, pares[5], impares[5],contaPar=0,contaImpar=0; /*Declara variaveis e vetores*/
    for (int i = 0; i < 15; i++) /*Loop de 15 repeticoes para os 15 numeros a serem fornecidos*/
    {
        scanf("%d",&numero); /*Recebe o numero a ser atribuido a um vetor*/
        if (numero%2) /*Se for impar*/
        {
            impares[contaImpar]=numero; /*Adiciona ao vetor impar na poiscao contaImpar*/
            contaImpar+=1; /*Adiciona em 1 o valor de contagem de numeros impares*/
        }
        else /*Mesma coisa para os pares*/
        {
            pares[contaPar]=numero;
            contaPar+=1;
        }

        if (contaPar==5) /*Se a contagem de pares chegar a 5*/
        {
            for (int j = 0; j < 5; j++) /*Printa todos os pares na array*/
            {
                printf("par[%d] = %d\n",j,pares[j]);
            }
            contaPar=0; /*Reseta a contagem de pares*/
        }
        if (contaImpar==5) /*Mesma coisa para impares*/
        {
            for (int j = 0; j < 5; j++)
            {
                printf("impar[%d] = %d\n",j,impares[j]);
            }
            contaImpar=0;
        }
    }
    if (contaImpar>0) /*Apos o loop de 15 numeros, Verifica se ainda ha alguns numeros nas arrays nao printados*/
    {
        for (int j = 0; j < contaImpar; j++) /*Se sim, printa ate a contagem de impares*/
        {
            printf("impar[%d] = %d\n",j,impares[j]);
        }
        contaImpar=0;
    }
    if (contaPar>0) /*Mesma coisa para pares*/
    {
        for (int j = 0; j < contaPar; j++)
        {
            printf("par[%d] = %d\n",j,pares[j]);
        }
        contaPar=0;
    }
}