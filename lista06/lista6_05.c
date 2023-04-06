#include<stdio.h>

int main (void)
{
    int hora, hora2, minuto, minuto2, segundo, segundo2;

    do
    {
        printf("Digite uma entrada no formato “hora:minuto:segundo” \n");
        scanf("%i:%i:%i", &hora, &minuto, &segundo);
    }while(hora > 23 || minuto > 59 || segundo > 59);

    do
    {
        printf("Digite uma entrada no formato “hora:minuto:segundo” \n");
        scanf("%i:%i:%i", &hora2, &minuto2, &segundo2);
    }while(hora2 > 23 || minuto2 > 59 || segundo2 > 59);

    if(segundo + segundo2 > 59)
    {
        segundo = (segundo + segundo2) - 60;
        minuto += 1;
    }
    else
    {
        segundo += segundo2;
    }

    if(minuto + minuto2 > 59)
    {
        minuto = (minuto + minuto2) - 60;
        hora += 1;
    }
    else
    {
        minuto += minuto2;
    }

    if(hora + hora2 > 23)
    {
        hora = (hora + hora2) - 24;
        printf("Um dia se passou \n");
    }
    else
    {
        hora += hora2;
    }

    printf("%i:%i:%i", hora, minuto, segundo);
    return 0;
}
