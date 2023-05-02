#include<stdio.h>

void Conversor(int*segundos, int* minutos, int* horas);

int main(void)
{
    int segundos;
    int horas = 0;
    int minutos= 0;

    scanf("%i", &segundos);

    Conversor(&segundos, &minutos, &horas);

    printf("%i \n", horas);
    printf("%i \n", minutos);
    printf("%i \n", segundos);
}

void Conversor(int *segundos, int *minutos, int *horas)
{
    *horas = *segundos / 3600;
    *minutos = (*segundos % 3600) /60;
    *segundos = (*segundos % 3600) % 60;
}
