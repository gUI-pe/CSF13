#include<stdio.h>
#include<math.h>

int main (void)
{
    int inicio, minInicio, minFim, tempo, fim, Min;

    printf("Hora de inicio: ");
    scanf("%i", &inicio);

    printf("minuto de inicio: ");
    scanf("%i", &minInicio);

    printf("Hora final: ");
    scanf("%i", &fim);

    printf("minuto final: ");
    scanf("%i", &minFim);

    if(inicio < fim)
    {
        tempo = fim - inicio;
    }
    else if(inicio > fim)
    {
        tempo = 24 - inicio + fim;
    }
    else if (inicio == fim)
    {
        tempo = 24;
    }

    if (minInicio < minFim)
    {
        Min = minFim - minInicio;
    }
    else if (minInicio > minFim)
    {
        Min = 60 - minInicio + minFim;
        tempo -= 1;
    }
    else if (minInicio == minFim)
    {
        Min = 0;
    }

    printf("o tempo do jogo foi: %i horas e %i minutos", tempo, Min);

    return 0;
}
