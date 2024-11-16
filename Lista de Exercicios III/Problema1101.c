#include <stdio.h>

int main()
{
    int m=1,n=1,soma=0; /*Declara as variaveis*/
    while(1) /*Loop infinito*/
    {
        scanf(" %d %d",&m,&n); /*Recebe os valor m e n*/
        if (m<=0 || n<=0) /*Se algum deles for menor ou igual a 0*/
            return 0; /*Encerra o codigo*/
        
        if (m<n) /*Se m for menor que n*/
        {
            for (; m <= n; m++) /*Repeticao de m ate n*/
            {
                printf("%d ",m); /*Printa o m*/
                soma+=m; /*atribui a variavel soma o valor de m*/
            } 
        }
        else /*Se m nao for menor que n*/
        {
            for (; n <= m; n++) /*Repeticao de n ate m*/
            {
                printf("%d ",n); /*Printa o n*/
                soma+=n; /*atribui a variavel soma o valor de n*/
            } 
        }
        printf("Sum=%d\n",soma); /*Printa o valro da soma*/
        soma=0; /*Define o valor soma como 0 para iniciar as novas contas*/
    }
}