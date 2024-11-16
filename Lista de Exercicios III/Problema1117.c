#include <stdio.h>
int main()
{
    float nota1,nota2; /*Declara as variaveis*/
    do /*Fazer: */
    {
        scanf("%f",&nota1); /*Recebe a variavel nota1*/
        if (nota1<0 || nota1>10) /*Se nota1 nao estiver entre 0 e 10: */
            printf("nota invalida\n"); /*Printa nota invalida*/
    } 
    while (nota1<0 || nota1>10); /*Enquanto a nota1 nao estiver entre 0 e 10*/
    do
    {
        scanf("%f",&nota2); /*Recebe a variavel nota2*/
        if (nota2<0 || nota2>10) /*Se nota2 nao estiver entre 0 e 10: */
            printf("nota invalida\n"); /*Printa nota invalida*/
    }  
    while (nota2<0 || nota2>10); /*Enquanto a nota2 nao estiver entre 0 e 10*/

    printf("media = %.2f\n",(nota1+nota2)/2);   /*Printa a media aritmetica das notas*/
}