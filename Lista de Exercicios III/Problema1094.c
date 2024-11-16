#include <stdio.h>
int main()
{
    int n,numero,clh=0,rto=0,spo=0; /*Declara as variaveis inteiras*/
    char animal; /*Declara a variavel do tipo char*/
    scanf(" %d",&n); /*Recebe o numero de casos*/
    for (int i = 0; i < n; i++) /*Loop de n repeticoes*/
    {
        scanf(" %d %c",&numero,&animal); /*Recebe o numero de animais e o tipo de animal*/
        switch (animal) /*switch case com a variavel animal*/
        {
            case 'C':clh+=numero; break; /*Se for coelho, soma o numero de animais ao numero de coelhos*/
            case 'R':rto+=numero; break; /*Se for coelho, soma o numero de animais ao numero de ratos*/
            case 'S':spo+=numero; break; /*Se for coelho, soma o numero de animais ao numero de sapos*/
        }
    }
    printf("Total: %d cobaias\n",clh+rto+spo); /*Printa o total de cobaias*/
    printf("Total de coelhos: %d\n",clh); /*Printa o total de coelhos*/
    printf("Total de ratos: %d\n",rto); /*Printa o total de ratos*/
    printf("Total de sapos: %d\n",spo); /*Printa o total de sapos*/

    /*O float escrito antes de umavariavel serve para transforma-la em float, permitindo uma divisao nao inteira*/
    /*Para escrever o simbolo "%" no printf eh necessario inserir "%%", ja que % sozinho eh um simbolo interpretado pelo compilador*/
    printf("Percentual de coelhos: %.2f %%\n",(((float)clh/(clh+spo+rto))*100)); /*Printa a porcentagem de coelhos*/
    printf("Percentual de ratos: %.2f %%\n",(((float)rto/(clh+spo+rto))*100)); /*Printa a porcentagem de ratos*/
    printf("Percentual de sapos: %.2f %%\n",(((float)spo/(clh+spo+rto))*100)); /*Printa a porcentagem de sapos*/
}