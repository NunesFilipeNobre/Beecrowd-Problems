#include <stdio.h>

int main()
{
    int hora1,minuto1,hora2,minuto2,tempo1,tempo2;
    scanf("%d%d%d%d",&hora1,&minuto1,&hora2,&minuto2);
    tempo1=hora1*3600 + minuto1*60;
    tempo2=hora2*3600 + minuto2*60;
    if (tempo2<=tempo1)
        tempo2+=3600*24-tempo1;
    else
        tempo2-=tempo1;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo2/3600,(tempo2%3600)/60);
}