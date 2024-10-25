#include <stdio.h>

int main()
{
    double a,b; /*Declara as variaveis do tipo double (float de maior tamanho e precisao decimal)*/
    scanf("%lf",&a); /*Recebe o valor da variavel a*/
    scanf("%lf",&b); /*Recebe o valor da variavel b*/
    printf("MEDIA = %.5lf\n",(a*3.5+b*7.5)/11); /*Printa a media ponderada de a e b*/
    /*Formula da media ponderada: (a*P1 + b*P2 + c*P3.../P1+P2+P3...), sendo Pn = peso n*/
    /*O "%.5lf" significa: long float de 5 casas decimais*/
}