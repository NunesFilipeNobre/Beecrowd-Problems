#include <stdio.h>
int main()
{
    int x1,y1,x2,y2; /*Declara as variaveis*/
    while (1) /*Loop infinito*/
    {
        scanf(" %d %d %d %d",&x1,&y1,&x2,&y2); /*Recebe as duas coordenadas*/
        if (x1==0)   /*Caso os 4 numeros sejam 0 o programa se encerra, mas como a questao apenas da numeros de 1 a 8, se qualquer coordenada for dada com o valor 0, infere-se que todas sao 0*/
            return 0;
        if (x1==x2 && y1==y2) /*Se as coordenadas forem iguais*/
            printf("0\n"); /*Nao eh necessario movimento*/
        else if (x1==x2 || y1==y2) /*Se as coordenadas tiverem linha ou colunas iguais*/
            printf("1\n"); /*Basta um movimento*/
        else if ((x1-x2)==(y1-y2) || ((x1-x2)+(y1-y2))==0) /*Se estiverem na mesma diagonal: (Verifica-se que estao na mesma diagonal se a quantidade de linhas percorridas eh a mesma das colunas)*/
            printf("1\n"); /*Se sim, basta um movimento*/
        else /*Se nenhuma das condicoes anteriores forem verdadeiras:*/
            printf("2\n"); /*A dama pode chegar a qualquer casa com no maximo 2 movimentos, pois basta ela se posicionar na linha correta e depois na coluna, e vice e versa, portanto, faz-se 2 movimentos*/
    }
}