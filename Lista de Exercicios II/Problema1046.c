#include <stdio.h>

int main()
{
    int hora1,hora2; /*Declara as variaveis*/
    scanf("%d%d",&hora1,&hora2); /*Recebe os valores das variaveis*/
    if (hora2<=hora1) /*Se a hora final for menor ou igual a inicial:*/
        hora2+=(24-hora1); /*Adiciona 24horas e subtrai a hora inicial (hora2 agora eh o tempo total)*/
    else /*Se nao for:*/
        hora2-=hora1; /*Hora final menos inicial (hora2 agora eh o tempo total)*/

    printf("O JOGO DUROU %d HORA(S)\n",hora2); /*Printa hora2 (tempo total)*/
}