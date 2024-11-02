#include <stdio.h>
int main()
{
    int a,b,c; /*Declara as variaveis*/
    scanf("%d%d%d",&a,&b,&c); /*Recebe os valores das variaveis*/

    if(a==b || a==c || b==c) /*Se 2 tempos forem iguais:*/
        printf("S\n"); /*Eh possivel voltar no tempo e retornar ao presente usando esses 2 tempos*/
    else if (a==(b+c) || b==(c+a) || c==(b+a)) /*Se um tempo for igual a soma de outros dois:*/
        printf("S\n"); /*Eh possivel voltar no tempo com um dos tempos e retornar ao presente com os outros*/
    else /*Caso contrario:*/
        printf("N\n"); /*Nao e possivel retornar ao presente*/
}