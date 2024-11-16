#include <stdio.h>

int main()
{
    /*variavel float precisa ser double para aumentar a precisao das casas decimais*/
    /*melhor metodo seria utilizar a unidade mais fundamental do sistema, nesse caso, o centavo*/
    double moedas,prova;
    int cedulas;
    scanf("%lf",&moedas);
    cedulas = (int)moedas;
    moedas-=cedulas;
    moedas *=100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cedulas/100);
    printf("%d nota(s) de R$ 50.00\n",(cedulas%100)/50);
    printf("%d nota(s) de R$ 20.00\n",((cedulas%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n",(((cedulas%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n",((((cedulas%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n",(((((cedulas%100)%50)%20)%10)%5)/2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(((((cedulas%100)%50)%20)%10)%5)%2);
    printf("%d moeda(s) de R$ 0.50\n",(int)moedas/50);
    printf("%d moeda(s) de R$ 0.25\n",((int)moedas%50)/25);
    printf("%d moeda(s) de R$ 0.10\n",(((int)moedas%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n",((((int)moedas%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n",((((int)moedas%50)%25)%10)%5);
}