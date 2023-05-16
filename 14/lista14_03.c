#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include <ctype.h>
#define N 35

void stling(char *vetor, char* v2, int n);

int main(void)
{
    char txt[N] = "Ro carro da mãe quebror irmão";
    int n = strlen(txt);
    char txt2[n + 1];

    stling(txt, txt2, n);


    printf("%s", txt2);
}

void stling(char *vetor, char* v2, int n)
{
    int i;
    int j;

    for(i = 0; i < n; i++)
    {
        if(!(vetor[i] == 'r' || vetor[i] == 'R'))
        {
            v2[i] = vetor[i];
        }
        else if(vetor[i] == 'r')
        {
            if(vetor[i + 1] > 'z' || vetor[i + 1] < 'a')
            {
                v2[i] = vetor[i];
            }
            else if(vetor[i + 1] == 'r')
            {
                v2[i] = 'l';
                i++;
            }
            else
            {
                v2[i] = 'l';
            }
        }
        else if(vetor[i] == 'R')
        {
            v2[i] = 'L';
        }
    }
}
