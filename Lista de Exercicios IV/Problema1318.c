#include <stdio.h>

int main()
{
    int qtdDeBilhetes, qtdDePessoas, bilhete[10000], bilheteNum, contaRepetidos=0; /*Declara variaveis e vetores*/
    while (1) /*Loop infinito*/
    {
        scanf(" %d%d",&qtdDeBilhetes,&qtdDePessoas); /*Recebe a quantidade de bilhetes e pessoas*/

        if (qtdDeBilhetes==qtdDePessoas && qtdDeBilhetes==0) /*Se ambas forem 0 encerra o programa*/
            return 0;

        for (int i = 0; i < 10000; i++) /*Loop de 100 repeticoes zerando todos os valores do vetor bilhete*/
        {
            bilhete[i]=0;
        }
        for (int i = 0; i < qtdDePessoas; i++) /*Loop que passa por todas as pessoas que entraram an festa*/
        {
            scanf("%d",&bilheteNum); /*Recebe o numero de cada bilhete*/
            bilhete[bilheteNum]+=1; /*Adiciona +1 pra contagem de cada numero de bilhete*/
        }
        for (int i = 0; i < 10000; i++) /*Le todos os bilhetes*/
        {
            if (bilhete[i]>1) /*Se houver mais de uma ocorrencia do mesmo numero de bilhete*/
            {
                contaRepetidos+=1; /*Adiciona mais um pra contagem de bilhetes repetidos*/
            }
        }

        printf("%d\n",contaRepetidos); /*Printa a quantidade de numeros de bilhete repetios*/
        contaRepetidos=0; /*Zera a variavel para voltar no proximo loop*/
    }
}