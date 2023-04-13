#include<stdio.h>

int main (void)
{
    int n, ant, ant2, a, i;
    ant = 1;
    ant2 = 0;

    printf("n: ");
    scanf("%i", &n);

    for(i = 2; i < n; i++)
    {
        if(i == 2)
        {
            printf("%d, %d, ",ant2, ant);
        }

        a = ant + ant2;

        printf("%d, ", a);

        ant2 = ant;
        ant = a;

    }
    return 0;
}
