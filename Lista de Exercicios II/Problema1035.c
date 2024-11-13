#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d); /*Recebe os valores das variaveis*/
    if (b>c && d>a && (c+d)>(a+b) && c>0 && d>0 && (a%2)==0)/*realiza as checagens propostas pela questao em ordem*/
        printf("Valores aceitos\n"); /*printa "Valores aceitos" caso todas as checagens sejam verdadeiras*/
    else
        printf("Valores nao aceitos\n"); /*caso contrario, printa "Valores nao aceitos"*/
}