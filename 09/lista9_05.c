#include <stdio.h>

int main(void)
{
    char c;

    scanf("%c", &c);

    int n, spaces, tamanho;

    scanf("%i", &n);

    int i, j, k;

    for(i = 0, tamanho = (2*n + 1); i < tamanho; i++)
    {
        if(i < tamanho/2)
        {
            for(spaces = n - i; spaces > 0; spaces--)
            {
                printf(" ");
            }
        }
        else if(i > tamanho/2)
        {
            for(spaces = i - tamanho/2; spaces > 0; spaces--)
            {
                printf(" ");
            }
        }

        if(i < tamanho/2)
        {
            for(j = 0; j < 2*i + 1; j++)
            {
                printf("%c", c);
            }
        }
        else
        {
            for(j = 0, k = i - (n); j < tamanho - 2*k; j++)
            {
                printf("%c", c);
            }
        }
        printf("\n");

    }
}
