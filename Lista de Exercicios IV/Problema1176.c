#include <stdio.h>

unsigned long long int fibonacci(int n) /*Funcao fibonacci pra ficar bonitinho*/
{
    unsigned long long int sequencia[61]; /*Vetor de 61 numeros, de 0 a 60*/
    for (int i = 0; i <= n; i++) /*Loop que repete ate o numero desejado*/
    {
        if (i==0 || i==1) /*Excecoes para 0 e 1*/
        {
            sequencia[i]=i;
        }
        else
        {
            sequencia[i]=sequencia[i-1]+sequencia[i-2]; /*Regra de fibonacci*/
        }
    }
    return sequencia[n]; /*Retorna o valor do nesimo numero da sequencia*/
}

int main()
{
    int casos, num; /*Variaveis de numero de casos e numero da sequencia de fibonacci*/
    unsigned long long int result; /*unsigned long long int tem 64bits pedidos pela questao*/
    scanf("%d",&casos); /*Recebe quantos casos serao*/
    for (int i = 0; i < casos; i++)
    {
        scanf("%d",&num); /*Recebe o numero desejado da sequencia*/
        result=fibonacci(num); /*Aplica o numero na sequencia de fibonacci*/
        printf("Fib(%d) = %llu\n",num,result); /*Printa o valor do numero na sequencia de fibonacci*/
    }   
}