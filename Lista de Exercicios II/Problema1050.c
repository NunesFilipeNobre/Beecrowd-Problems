#include <stdio.h>

int main()
{
    int ddd; /*Declara a variavel*/
    scanf("%d",&ddd); /*Recebe o valor da variavel*/
    switch (ddd) /*Case switch com cada ddd correspondendo a uma cidade*/
    {
        case 61: printf("Brasilia"); break;
        case 71: printf("Salvador"); break;
        case 11: printf("Sao Paulo"); break;
        case 21: printf("Rio de Janeiro"); break;
        case 32: printf("Juiz de Fora"); break;
        case 19: printf("Campinas"); break;
        case 27: printf("Vitoria"); break;
        case 31: printf("Belo Horizonte"); break;
    
        default: printf("DDD nao cadastrado"); /*Caso o ddd nao exista na lista, entra no caso default*/
    }
    printf("\n"); /*Esqueci da quebra de linha no final das linhas, coloquei aqui no final*/
}