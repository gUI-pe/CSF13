#include<stdio.h>

int main (void)
{
    int n, i;
    int bol = 0;

    printf("n: ");
    scanf("%i", &n);

    int altura[n];

    for(i = 0; i < n; i++)
    {
        scanf("%i", &altura[i]);
    }

    for(i = 1; i < n - 1; i++)
    {
        if (altura[i] < altura[i - 1] && altura[i] < altura[i + 1])
        {
            bol = 1;
            break;
        }
    }

    if (bol == 1)
    {
        printf("N");
    }
    else
    {
        printf("S");
    }

    return 0;
}

