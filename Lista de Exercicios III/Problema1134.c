#include <stdio.h>

int main()
{
    int numero,alcool=0,gasolina=0,diesel=0; /*Declara variaveis*/
    while (1) /*Loop infinito*/
    {
        scanf("%d",&numero); /*Recebe o input*/
        switch (numero) /*Switch case, se o numero digitado foi:*/
        {
            case 1: alcool+=1; break; /*1, entao aumenta em 1 o valor de alcool*/
            case 2: gasolina+=1; break; /*2, entao aumenta em 1 o valor de gasolina*/
            case 3: diesel+=1; break; /*3, entao aumenta em 1 o valor de diesel*/
            case 4: printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel); return 0; /*Printa os valores de cada variavel e encerra o programa*/
        }
    }
}