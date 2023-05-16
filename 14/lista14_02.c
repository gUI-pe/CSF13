#include <stdlib.h>
#include<stdio.h>
#define N 10

int main(void)
{
    int a[N];

    int i;
    for(i = 0; i < N; i++)
    {
        a[i] = rand() % 20 + 1;
    }

    int n;
    int tamanho = N - 1;
    scanf("%i", &n);

    while(!(n > tamanho || n < 0 || tamanho == 0))
    {
        for(i = n; i < tamanho; i++)
        {
            a[i] = a[i + 1];
        }

        a[tamanho] = '\0';

        tamanho--;

        for(i = 0; i < tamanho; i++)
        {
            printf("%i \t", a[i]);
        }

        scanf("%i", &n);
    }
}
