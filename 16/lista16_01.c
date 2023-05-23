#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFLEN 1024

char* empacotaString (char* string);

int main (void)
{
    char buffer [BUFLEN];
    fgets (buffer, BUFLEN, stdin);

    char* vetor = empacotaString(buffer);

    printf("%s", vetor);

    free(vetor);

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

