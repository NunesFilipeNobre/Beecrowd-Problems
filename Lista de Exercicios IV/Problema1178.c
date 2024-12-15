#include <stdio.h>

int main()
{
    double x,n[100]; /*Declara array com 10 elementos*/
    scanf("%lf",n); /*Recebe o valor do elemento 0*/
    printf("N[0] = %.4lf\n",n[0]); /*Ja printa o valor inicial*/
    for (int i = 1; i < 100; i++) /*Loop de 99 repeticoes comecando do 1*/
    {
        n[i]=(n[i-1]/2); /*Valor do elemento i da array eh a metade do elemento anterior*/
        printf("N[%d] = %.4lf\n",i,n[i]); /*Printa o valor desse elemento da array*/
    }
}