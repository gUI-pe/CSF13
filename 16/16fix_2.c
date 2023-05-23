#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Prenche(int* vetor, int tam);

int main (void)
{
    int i;
    int* vetor;
    int* vetor2;

    int tam1, tam2;

    scanf("%i", &tam1);
    scanf("%i", &tam2);

    vetor = (int*) malloc (tam1 * sizeof (int));
    vetor2 = (int*) malloc (tam2 * sizeof (int));

    Prenche(vetor, tam1);
    Prenche(vetor2, tam2);

    int* vetor3;

    if(tam1 <= tam2)
        vetor3 = (int*) malloc (tam1 * sizeof (int));
    else
    {
        tam1 = tam2;
        vetor3 = (int*) malloc (tam1 * sizeof (int));
    }


    for(i = 0; i < tam1; i++)
    {
        vetor3[i] = vetor[i] * vetor2[i];
    }

    free(vetor);
    free(vetor2);

    for(int i = 0; i < tam1; i++)
    {
        printf("%i \n", vetor3[i]);
    }

    free(vetor3);

    return 0;
}

void Prenche(int* vetor, int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 11;
    }
}
