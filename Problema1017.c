#include <stdio.h>
int main()
{
    float tempo,vel;/*horas, km/h*/
    scanf("%f%f",&tempo,&vel);

    printf("%.3f\n",tempo*vel/12);
}