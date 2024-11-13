#include <stdio.h>
int main()
{
    float numero; /*Declara variavel float pra receber numeros reais*/
    int positivos=0; /*Declara variavel int para contar os numeros positivos*/
    for (int i=0;i<6;i++) /*Loop que repete o conteudo dentro dele 6 vezes*/
    {
        scanf("%f",&numero); /*Recebe um dos valores dado pela questao */
        if (numero>0)        /*Se o valor der positivo:*/
            positivos+=1;    /*Conta mais 1 positivo na variavel que conta positivos*/
    }
    printf("%d valores positivos\n",positivos);    /*Printa a quantidade de positivos*/
}