#include <stdio.h>

int main()
{
    FILE *template;
    FILE *codigo;
    char chr, filename[13];
    int numInic,numFin;

    /*CUIDADO|--- Freio numero 2 ---|CUIDADO*/
    int freio=0;
    /*CUIDADO|--- Freio numero 2 ---|CUIDADO*/

    printf("BEM VINDO AO GERADOR DE ARQUIVO C AUTOMATICO\n\n");
    fflush(stdin);
    printf("Digite o numero inicial para o codigo: \n"); scanf("%d",&numInic);
    fflush(stdin);
    printf("Digite o numero final para o codigo: \n"); scanf("%d",&numFin);
    fflush(stdin);

    /*CUIDADO|--- Freio numero 1 ---|CUIDADO*/
    if((numFin-numInic)<20)
    {
        for (; numInic <= numFin; numInic++)
        {
            template = fopen("geraTemplate.txt","r");
            sprintf(filename,"Problema%d.c",numInic);
            codigo = fopen(filename,"w");

            while ((chr = fgetc(template)) != EOF)
            {
                fprintf(codigo,"%c",chr);
            }

            fclose(template);
            fclose(codigo);

            /*CUIDADO|--- Freio numero 2 ---|CUIDADO*/
            freio+=1;
            if (freio>20)
            {
                printf("OPERACAO ABORTADA\n");
                printf("pc quase explodiu, confira os arquivos criados\n");
                break;
            }
            /*CUIDADO|--- Freio numero 2 ---|CUIDADO*/
        }
    }
    /*CUIDADO|--- Freio numero 1 ---|CUIDADO*/

    else
    {
        printf("Tentando explodir o pc?\n");
    }
}