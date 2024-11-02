#include <stdio.h>

int main()
{
    int a,b; /*Declara as variaveis*/
    scanf("%d%d",&a,&b); /*Recebe o valor das variaveis*/
    if (a%b && b%a) /*Se o resto das duas divisoes der algo diferente de 0 (lido como verdadeiro pelo if)*/
        printf("Nao sao Multiplos\n");
    else /*Se o resto de alguma divisao der 0 (lido como falso pelo if, ativando o else)*/
        printf("Sao Multiplos\n");
    
}