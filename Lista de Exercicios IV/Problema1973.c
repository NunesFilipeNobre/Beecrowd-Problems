#include <stdio.h>

int main()
{
    int numEstrelas, i=0, j=0, totalAtacadas=0; /*Declara variaveis*/
    long long int totalCarneiros=0; /*Declara variavel long long int para o total de carneiros*/

    scanf("%d",&numEstrelas); /*Recebe o numero de estrelas*/

    int carneiros[numEstrelas]; /*Array de numero de carneiros para cada estrela*/

    for (i = 0; i < numEstrelas; i++) 
    {
        scanf("%d",&carneiros[i]);    /*Recebe o numero de carneiros de cada estrela*/
        totalCarneiros+=carneiros[i]; /*Soma o total de carneiros*/
    }

    i=0; /*Variavel de controle zerada*/
    while (i>=0 && i<numEstrelas) /*Se a estrela estiver dentro do intervalo do numero de estrelas*/
    {
        if ((i+1)>totalAtacadas) /*Verifica por quantas estrelas o irmao maluco ja andou, salvando o numero da estrela mais distante ja visitada +1, pois contamos a partir de 0*/
        {
            totalAtacadas=(i+1); /*Total de atacadas eh o numero da estrela mais distante + 1*/
        }
        if(carneiros[i]>0) /*Se houverem carneiros na estrela*/
        {
            carneiros[i]-=1; /*Rouba um*/
            totalCarneiros-=1; /*Desconta do total de carneiros*/
            if ((carneiros[i]+1)%2) /*Se o numero de carneiros naquela estrela (antes de ser roubada) for impar*/
            {
                i+=1; /*Prossegue para a proxima estrela*/
            }
            else
            {
                i-=1; /*Retorna uma estrela*/
            }
        }
        else /*Se nao houverem carneiros na estrela, ou seja, ela nao sera roubada*/
        {
            if (carneiros[i]%2) /*Se o numero de carneiros naquela estrela for impar*/
            {
                i+=1; /*Prossegue para a proxima estrela*/
            }
            else
            {
                i-=1; /*Retorna uma estrela*/
            }
        }      
    }
    printf("%d %lld\n",totalAtacadas,totalCarneiros); /*Printa o total de estrelas atacadas e o total de carneiros restantes*/
}