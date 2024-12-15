#include <stdio.h>

int main()
{
    int n[10]; /*Declara array com 10 elementos*/
    scanf("%d",n); /*Recebe o valor do elemento 0*/
    printf("N[0] = %d\n",n[0]); /*Ja printa o valor inicial*/
    for (int i = 1; i < 10; i++) /*Loop de 9 repeticoes comecando do 1*/
    {
        n[i]=n[i-1]*2; /*Valor do elemento i da array eh o dobro do elemento anterior*/
        printf("N[%d] = %d\n",i,n[i]); /*Printa o valor desse elemento da array*/
    }
}