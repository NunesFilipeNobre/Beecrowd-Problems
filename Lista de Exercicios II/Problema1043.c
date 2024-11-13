#include <stdio.h>

int main()
{
    float a,b,c; /*Declara 3 variaveis*/
    scanf("%f%f%f",&a,&b,&c); /*As variaveis recebem seus valores*/
    if (a>=(b+c) || c>=(b+a) || b>=(a+c)) /*Verifica se qualquer lado do triangulo eh maior ou igual aos outros dois*/
        printf("Area = %2.1f\n",(b+a)*c/2);/*Calcula a area do suposto trapezio*/
    else
        printf("Perimetro = %2.1f\n",a+b+c); /*Calcula o perimetro do triangulo*/
}