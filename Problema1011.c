#include <stdio.h>
#define PI 3.14159

int main()
{
    double raio;
    scanf("%lf",&raio);
    printf("VOLUME = %.3lf\n",raio*raio*raio*PI*4.0/3.0);
}