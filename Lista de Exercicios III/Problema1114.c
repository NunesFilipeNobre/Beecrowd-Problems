#include <stdio.h>

int main()
{
    int senha; /*Declara a variavel*/
    while (1) /*Loop infinito*/
    {
        scanf("%d",&senha); /*Recebe a senha digitada*/
        if (senha==2002) /*Se a senha digitada for 2002:*/
        {
            printf("Acesso Permitido\n"); /*Printa acesso permitido*/
            return 0; /*Encerra o programa*/
        }
        else /*Se nao:*/
            printf("Senha Invalida\n"); /*Printa senha invalida*/
    }
}