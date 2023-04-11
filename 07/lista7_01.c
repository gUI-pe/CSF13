#include<stdio.h>

int main(void)
{
    int i, n, soma;
    n = 3;
    soma = 0;

    for(i = n - 1; i > 0; i--)
    {
        soma += n * i;
    }

    printf("%i", soma);
}
