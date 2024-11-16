#include <stdio.h>

int main()
{
    int n,x,y,soma=0; /*Declara as variaveis*/
    scanf("%d",&n); /*Recebe o numero de casos*/
    for (int i = 0; i < n; i++) /*Loop que repete n vezes*/
    {
        scanf(" %d %d",&x,&y); /*Recebe os valores x e y de um dos casos*/
        if (x<y) /*Se x for menor que y*/
        {
            x+=1; /*Soma 1 a x (Pois iremos contar apenas os numeros ENTRE x e y)*/
            for (; x < y; x++) /*Enquanto x for menor que y:*/
            {
                if (x%2) /*Se x for impar:*/
                    soma+=x; /*Adiciona o valor de x a soma*/
            }
        }
        else /*Se y for menor que x*/
        {
            y+=1; /*Soma 1 a y (Pois iremos contar apenas os numeros ENTRE x e y)*/
            for (; y < x; y++) /*Enquanto y for menor que x:*/
            {
                if (y%2) /*Se y for impar:*/
                    soma+=y; /*Adiciona o valor de y a soma*/
            }
        }
        printf("%d\n",soma); /*Printa a soma dos numeros impares*/
        soma=0;  /*apaga o valor da soma para antes de comecarmos as proximas contas*/
    }  
}