#include <stdio.h>

int main()
{
    int casos, num1, num2;
    char letra, sequencia[4];
    scanf("%d",&casos);
    for (int i = 0; i < casos; i++)
    {
        scanf("%s",&sequencia);
        if (sequencia[0] == sequencia[2])
        {
            printf("%d\n",(sequencia[2]-'0')*(sequencia[0]-'0'));
        }
        else if ('A'<= sequencia[1] && sequencia[1]<='Z')
        {
            printf("%d\n",(sequencia[2]-'0')-(sequencia[0]-'0'));
        }
        else
        {
            printf("%d\n",(sequencia[2]-'0')+(sequencia[0]-'0'));
        }
    }
}