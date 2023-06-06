#include <stdio.h>
#define MESES 12

typedef struct{
    int horas;
    int minutos;
    int segundos;
} Horario;

int segundosEntre (Horario h1, Horario h2);

int main (void)
{
    Horario h1;
    h1.horas = 6;
    h1.minutos = 30;
    h1.segundos = 18;

    Horario h2;
    h2.horas = 7;
    h2.minutos = 40;
    h2.segundos = 20;

    int s = segundosEntre (h1, h2);
    printf("A diferenca em segundos entre h1 e h2 eh %i", s);
}

int segundosEntre (Horario h1, Horario h2)
{
    int deltaTime = 0;

    deltaTime += (h2.horas - h1.horas) * 3600;
    deltaTime += (h2.minutos - h1.minutos) * 60;
    deltaTime += h2.segundos - h1.segundos;

    return deltaTime;
}
