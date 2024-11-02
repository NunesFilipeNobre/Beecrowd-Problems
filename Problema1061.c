#include <stdio.h>

int main()
{
    int tempo1,tempo2; /*Declara variaveis*/
    int dia1,hora1,minuto1,segundo1; /*Declara Variaveis*/
    scanf("Dia %d%d : %d : %d",&dia1,&hora1,&minuto1,&segundo1); /*Recebe os valores das variaveis*/
    int dia2,hora2,minuto2,segundo2; /*Declara Variaveis*/
    scanf(" Dia %d%d : %d : %d",&dia2,&hora2,&minuto2,&segundo2); /*Recebe os valores das variaveis*/

    tempo1 = dia1*24*3600+hora1*3600+minuto1*60+segundo1; /*O primeiro instante eh definido em segundos*/
    tempo2 = dia2*24*3600+hora2*3600+minuto2*60+segundo2; /*O segundo instante eh definido em segundos*/
    tempo2-=tempo1; /*Segundo instante menos o primeiro, resultando em tempo2 = diferenca de tempo*/

    /*Logica da operacao abaixo: Divide-se o total de segundos pela quantidade de segundos na unidade de
     tempo que queremos, por exemplo: 3601segundos (uma hora) dividido por 60 segundos (um minuto),
     resultando na parte inteira da divisao: 60 minutos. Na mesma operacao,
     a variavel tempo2 recebe o resto dessa divisao,
     tornando mais facil seguir com as proximas operacoes
     (pegar esse resto de tempo e dividir pela proxima unidade de tempo, no exemplo acima: o resto de 3601/60 = 1 segundo)*/

    printf("%d dia(s)\n",tempo2/(24*3600)); /*Divide o tempo pelo total de segundos em um dia, resulta nos dias inteiros*/
    printf("%d hora(s)\n",(tempo2=tempo2%(24*3600))/3600); /*Divide o tempo pelo total de segundos em uma hora, resulta nas horas inteiras*/
    printf("%d minuto(s)\n",(tempo2=tempo2%(3600))/60); /*Divide o tempo pelo total de segundos em um minuto, resulta nos minutos inteiros*/
    printf("%d segundo(s)\n",(tempo2%(60))); /*Pega o Resto da divisao pelos minutos, resultando nos segundos restantes*/
}