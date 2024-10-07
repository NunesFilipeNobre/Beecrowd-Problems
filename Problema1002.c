#include <stdio.h>
double PI = 3.14159;

int main()
{
    double raio;
    scanf("%lf",&raio);
    printf("A=%.4lf\n",PI*raio*raio);
}