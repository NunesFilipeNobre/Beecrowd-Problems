#include <stdio.h>
#include <string.h>

int main()
{
    char word[16];
    scanf(" %s",word);
    if (strcmp(word,"vertebrado")==0)
    {
        scanf(" %s",word);
        if (strcmp(word,"ave")==0)
        {
            scanf(" %s",word);
            if (strcmp(word,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            if (strcmp(word,"onivoro")==0)
            {
                printf("pomba\n");
            }
        }
        if (strcmp(word,"mamifero")==0)
        {
            scanf(" %s",word);
            if (strcmp(word,"onivoro")==0)
            {
                printf("homem\n");
            }
            if (strcmp(word,"herbivoro")==0)
            {
                printf("vaca\n");
            }
        }
    }
    if (strcmp(word,"invertebrado")==0)
    {
        scanf(" %s",word);
        if (strcmp(word,"inseto")==0)
        {
            scanf(" %s",word);
            if (strcmp(word,"hematofago")==0)
            {
                printf("pulga\n");
            }
            if (strcmp(word,"herbivoro")==0)
            {
                printf("lagarta\n");
            }
        }
        if (strcmp(word,"anelideo")==0)
        {
            scanf(" %s",word);
            if (strcmp(word,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            if (strcmp(word,"onivoro")==0)
            {
                printf("minhoca\n");
            }
        }
    }
}