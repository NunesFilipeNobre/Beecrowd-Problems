#include <stdio.h>

int main()
{
    int quantNum, num, contaNum[2001]; /*declara as variaves e uma array de 2001 elementos (de 0 a 2000)*/
    scanf("%d",&quantNum); /*Le quantos numeros serao recebidos*/

    for (int i = 1; i <= 2000; i++) /*Inicia todos os elementos da array de 1 a 2000 com o valor 0*/
    {
        contaNum[i]=0; /*Array que conta quantas vezes apareceu um numero i iniciada com o valor 0*/
    }
    
    for (int i = 0; i < quantNum; i++) /*Loop que repete de acorodo com a quantidade de numeros que serao recebidos*/
    {
        scanf("%d",&num); /*Le um numero*/
        contaNum[num]+=1; /*Adiciona mais um na contagem desse numero*/
    }

    for (int i = 1; i <= 2000; i++) /*Passa por todos os numeros de 1 a 2000 da array*/
    {
        if(contaNum[i]!=0) /*Se a contagem do numero i for diferente de 0*/
            printf("%d aparece %d vez(es)\n",i,contaNum[i]); /*Printa essa contagem*/
    }
}