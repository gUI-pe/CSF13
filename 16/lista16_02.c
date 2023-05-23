#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFLEN 1024

char* empacotaString (char* string);

char* concatenaStrings (char* s1, char* s2);

int main (void)
{
    char buffer [BUFLEN];
    fgets (buffer, BUFLEN, stdin);

    char* vetor = empacotaString(buffer);

    fgets (buffer, BUFLEN, stdin);

    char* vetor2 = empacotaString(buffer);

    char* vetor3 = concatenaStrings (vetor, vetor2);

    free(vetor);
    free(vetor2);

    printf("%s", vetor3);

    free(vetor3);

    return 0;
}

char* empacotaString (char* string)
{
    int n = strlen(string);

    char* vetor;

    vetor = (char*) malloc((n + 1)*sizeof (char));

    for(int i = 0; i < n; i++)
        vetor[i] = string[i];

    vetor[n - 1] = '\0';

    return vetor;
}

char* concatenaStrings (char* s1, char* s2)
{
    char* vetor;

    int tam = strlen(s1);
    int tam2 = strlen(s2);

    vetor = (char*) malloc((tam + tam2 + 1) *sizeof (char));

    int i, k;
    k = 0;

    for(i = 0; i < tam; i++)
    {
        vetor[k] = s1[i];
        k++;
    }

    for(i = 0; i < tam2; i++)
    {
        vetor[k] = s2[i];
        k++;
    }

    vetor[tam + tam2];
    return vetor;
}

