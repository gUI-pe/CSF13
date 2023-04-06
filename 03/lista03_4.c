#include<stdio.h>
#include<math.h>

int main (void)
{
    int inicio, tempo, fim;

    printf("Hora de inicio: ");
    scanf("%i", &inicio);

    printf("Hora final: ");
    scanf("%i", &fim);

    if(inicio < fim)
    {
        tempo = fim - inicio;
    }
    else if(inicio > fim)
    {
        tempo = 24 - inicio + fim;
    }
    else
    {
        tempo = 24;
    }

    printf("o tempo do jogo foi: %i horas", tempo);

    return 0;
}
