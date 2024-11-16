#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a==0 || ((b*b)-(4*a*c))<0) /*Verifica se existe uma divisao por 0 ou uma raiz de numero negativo*/
        printf("Impossivel calcular\n");
    else /*aplica a formula de bhaskara para encontrar as suas raizes*/
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-b+sqrt((b*b)-(4*a*c)))/(2*a), (-b-sqrt((b*b)-(4*a*c)))/(2*a));
}