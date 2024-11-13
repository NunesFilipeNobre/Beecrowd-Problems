#include <stdio.h>
const double PI = 3.14159; /*Invoca a constante pi e inicia ela com um valor (dado pela questao)*/
                           /*No caso usei uma constante pois nao tenho a intencao de mudar o seu valor*/
int main()
{
    double raio;           /*A questao informa que a variavel seria do tipo double, "floating point(double precision)"*/
    scanf("%lf",&raio);    /*Para delimitar uma variavel do tipo double, usa-se "%lf"(long float)*/
    printf("A=%.4lf\n",raio*raio*PI); /*Printa a area do circulo, seguindo a formula (PI*R^2) */
    /* O "%.4ff" utilizado na formula significa: long float de 4 casas decimais"*/
}