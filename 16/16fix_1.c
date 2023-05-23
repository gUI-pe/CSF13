#include<stdio.h>
#include <stdlib.h>

int main (void)
{
    int* vetor;

    vetor = (int*) malloc (10 * sizeof (int));

    for(int i = 0; i < 10;i++)
    {
        scanf("%i", &vetor [i]);
    }

    for(int i = 0; i < 10;i++)
    {
        printf("%i", vetor[i]);
    }

    free(vetor);
}
