#include <stdio.h>

/*A questao apresenta um erro na analise do intervalo 0 a 25, relacionado a necessidade de usar (] ou []*/

int main()
{
    float numero;
    scanf("%f",&numero); /*Recebe o valor da variavel*/
    if (numero>=0 && numero <=25) /*Checa se o numero pertence a esse intervalo*/
    {
        if (numero==0) /*Se o numero for igual ao limite do intervalo esquerdo, ele eh incluido*/
            printf("Intervalo [0,25]\n");
        else if (numero==25) /*Para esse intervalo em especifico eh necessario checar a inclusao no numero 25 tambem (erro na questao)*/
            printf("Intervalo [0,25]\n");
        else /*Caso contrario, inclui apenas numeros maiores que o limite menor do intervalo*/
            printf("Intervalo (0,25]\n");
    }
    else /*Caso o numero nao se enquadre no intervalo acima, repete-se o processo com o proximo intervalo*/
    if (numero>25 && numero <=50)
    {
        if (numero==25)
            printf("Intervalo [25,50]\n");
        else
            printf("Intervalo (25,50]\n");
    }
    else
    if (numero>50 && numero <=75)
    {
        if (numero==50)
            printf("Intervalo [50,75]\n");
        else
            printf("Intervalo (50,75]\n");
    }
    else
    if (numero>75 && numero <=100)
    {
        if (numero==75)
            printf("Intervalo [75,100]\n");
        else
            printf("Intervalo (75,100]\n");
    }
    else /*Caso nenhum intervalo compreenda o numero dado, printa que esta fora do intervalo*/
        printf("Fora de intervalo\n");
    
}