#include<stdio.h>

int main (void)
{
    int i, j, n;

    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
        for(j = n; j >= 1; j--)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}
