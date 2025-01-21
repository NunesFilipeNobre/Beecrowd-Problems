#include <stdio.h>

int main()
{
    int t,n[1000]; /*Declara uma variavel e um vetor de 1000 elementos (do elemento 0 ao 999)*/
    scanf("%d",&t); /*Recebe o valor t que sera o limite das sequencias que usaremos para preencher a array*/
    for (int i = 0; i < 1000; i++) /*Loop de 1000 repeticoes de 0 a 999*/
    {
        n[i]=(i%t); /*A posicao i da array recebe o resto da divisao de i por t, iniciando uma sequencia de 0,1,2,3,...,t-1  Essa sequencia sera repetida ate acabar o loop*/
        printf("N[%d] = %d\n",i,n[i]); /*Printa o valor de cada elemento*/
    }
}