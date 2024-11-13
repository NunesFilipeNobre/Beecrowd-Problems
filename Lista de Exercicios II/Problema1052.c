#include <stdio.h>

int main()
{
    int mes; /*Declara a variavel*/
    scanf("%d",&mes); /*Recebe o valor da variavel*/
    switch (mes) /*Case switch com cada mes em ingles*/
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December");
    }
    printf("\n"); /*Esqueci da quebra de linha no final das linhas, coloquei aqui no final*/
}