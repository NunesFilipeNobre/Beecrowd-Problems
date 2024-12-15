#include <stdio.h>

int main()
{
    int tamanho,escadinha=1; /*tamanho eh a quantidade de numeros, escadinha o total de escadinhas*/
    scanf("%d",&tamanho); /*Recebe o tamanho*/
    int num[tamanho], diferencas[tamanho];  /*Vetor num guarda cada numero na sequencia*/
                                            /*Diferencas guarda a diferenca entre um numero e seu sucessor*/
    for (int i = 0; i < tamanho; i++) /*Loop que passa por todos os numeros*/
    {
        scanf("%d",&num[i]); /*Recebe o valor de todos os numeros*/
    }

    for (int i = 0; i < (tamanho-1); i++) /*Loop repete (tamanho-1) vezes pois sao (n-1) diferencas entre n numeros*/
    {
        diferencas[i]=num[i]-num[i+1]; /*Pega as diferencas entre cada numero*/
    }
    for (int i = 0; i < (tamanho-2); i++) /*Loop repete (tamanho-2) vezes pos eh a diferenca entre duas diferencas, que por sua vez sao (tamanho-1)*/
    {
         if (diferencas[i]-diferencas[i+1]) /*Verifica se as diferenca entre 2 diferencas sao iguais*/
        {
            escadinha+=1; /*Se sim, existe uma mudanca na regra da sequencia, portanto, +1 para o numero de escadinhas, ja que entramos na proxima sequencia*/
        }
    }
    printf("%d\n",escadinha); /*Printa a quantidade de escadinhas*/
}