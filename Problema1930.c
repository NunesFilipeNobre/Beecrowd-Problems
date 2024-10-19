/*Decifrando o enunciado mal traduzido: existe 1 tomada em um quarto de hotel e cada um dos 4 moradores
possui um adaptador. A questao fornece em ordem a quantidade de entradas que cada um desses adaptadores 
possuem. Nosso objetivo e retornar a quantidade maxima de entradas disponiveis se cada um desses
adaptadores estiverem conectados um no outro.*/

/*Se um adaptador for conectado a outro, uma entrada e usada, visto que ela esta ocupada pelo adaptador
conectado ao outro. Portanto, se 4 adaptadores estiverem interligados, 3 entradas serao usadas, ja que
3 coneccoes estao sendo feitas entre eles. Assim, para descobrir quantas entradas estao disponiveis,
basta somar todas as entradas dos adaptadores e subtrair 3 do total*/
#include <stdio.h>

int main()
{
    int a,b,c,d; /*declaracao de 4 variaveis representando o numero de entradas de cada adaptador*/
    scanf("%d%d%d%d",&a,&b,&c,&d); /*questao fornece quantidade de entradas para cada adaptador*/
    printf("%d\n",a+b+c+d-3); /*somatorio de todas as entradas -3 coneccoes entre os adaptadores*/
}