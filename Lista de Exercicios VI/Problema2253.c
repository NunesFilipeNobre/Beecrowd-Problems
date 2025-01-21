#include <stdio.h>
#include <string.h>

int main()
{
    char senha[5000],mai=0,min=0,num=0;
    while (!feof(stdin))
    {
        gets(senha);
        if (strlen(senha)>=6 && strlen(senha)<=32)
        {
            for (int i = 0; i < strlen(senha); i++)
            {
                if (senha[i]>='a' && senha[i]<='z')
                {
                    min = 1;
                }
                else if (senha[i]>='A' && senha[i]<='Z')
                {
                    mai = 1;
                }
                else if (senha[i]>='0' && senha[i]<='9')
                {
                    num = 1;
                }
                else
                {
                    mai=0;  /*precisa dar invalido de algum jeito*/
                    break;
                }
            }
        }
        if (mai && min && num)
        {
            printf("Senha valida.\n");
        }
        else
        {
            printf("Senha invalida.\n");
        }
        min=mai=num=0;
    }
}