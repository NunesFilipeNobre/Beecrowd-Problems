#include <stdio.h>

int main()
{
    double a,b,c;    /*Declara as variaveis do tipo double (float de maior tamanho e precisao decimal)*/
    scanf("%lf",&a); /*Recebe o valor da variavel a*/
    scanf("%lf",&b); /*Recebe o valor da variavel b*/
    scanf("%lf",&c); /*Recebe o valor da variavel c*/
    printf("MEDIA = %.1lf\n",(a*2+b*3+c*5)/10); /*Printa a media ponderada de a, b e c*/
    /*Formula da media ponderada: (a*P1 + b*P2 + c*P3.../P1+P2+P3...), sendo Pn = peso n*/
    /*O "%.1lf" significa: long float de 1 casa decimal*/
}