#include <stdio.h>
int main()
{
    int n; /*Define a variavel int*/
    float num1,num2,num3; /*Define as variaveis float*/
    scanf("%d",&n); /*Recebe quantos casos de 3 numeros serao calculados*/
    for (int i = 0; i < n; i++) /*Loop que repete segundo o numero de casos*/
    {
        scanf("%f%f%f",&num1,&num2,&num3); /*Recebe 3 numeros*/
        printf("%.1f\n",(num1*2+num2*3+num3*5)/(2+3+5)); /*Calcula a media ponderada*/
    }
}