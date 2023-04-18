#include<stdio.h>

int main (void)
{
    int i, j, n;

    scanf("%i", &n);

    for(i = n; i >= 1; i--)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}
