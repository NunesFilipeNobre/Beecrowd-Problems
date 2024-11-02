#include <stdio.h>

int main()
{
    float n1,n2,n3,n4,exame,media; /*Declara o valor das 4 notas de prova, do exame e a variavel media*/
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4); /*Recebe a s 4 notas de prova*/
    printf("Media: %.1f\n",media=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1)); /*guarda o valor da media e printa-o*/
    if (media>=7) /*Se a media for maior que 7, printa que o aluno foi aprovado*/
        printf("Aluno aprovado.\n");
    else if(media<5) /*Se a media for maior que 7, printa que o aluno foi aprovado*/
        printf("Aluno reprovado.\n");
    else /*Se o aluno nao foi reprovado ou aprovado:*/
    {
        printf("Aluno em exame.\n"); /*Printa que o aluno esta em exame*/
        scanf("%f",&exame); /*Le a nota do exame*/
        printf("Nota do exame: %.1f\n",exame); /*printa a nota do exame*/
        if ((media=(exame+media)/2)>5) /*Verifica se a declaracao ((exame+media)/2)>5 eh verdadeira, ao mesmo tempo que atribui seu valor a variavel media (por praticidade)*/
        {
            printf("Aluno aprovado.\n"); /*Printa que o aluno foi aprovado*/
            printf("Media final: %.1f\n",media); /*Printa a expressao ((exame+media)/2)>5, salva na variavel media*/
        }
        else
        {
            printf("Aluno reprovado.\n"); /*Printa que o aluno foi reprovado*/
            printf("Media final: %.1f\n",media); /*Printa a expressao ((exame+media)/2)>5, salva na variavel media*/
        }
    }
}