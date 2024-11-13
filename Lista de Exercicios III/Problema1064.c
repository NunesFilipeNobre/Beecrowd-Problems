#include <stdio.h>
int main()
{
    float numero,soma=0,positivos=0; /*Declara variaveis*/
    for (int i=0;i<6;i++) /*Loop que repete o conteudo dentro dele 6 vezes*/
    {
        scanf("%f",&numero); /*Recebe um dos valores dado pela questao */
        if (numero>0)        /*Se o valor der positivo:*/
        {
            positivos+=1;    /*Conta mais 1 positivo na variavel que conta positivos*/
            soma+=numero;    /*Soma o valor desse numero ao valor da variavel soma*/
        }
    }
    printf("%1.f valores positivos\n%.1f\n",positivos,soma/positivos); /*Printa a quantidade de positivos e a media dos positivos*/
}