#include<stdio.h>
#include <stdlib.h>
#define N 1024

int main (void)
{
    int max;

    scanf("%i", &max);

    int num[N];

    int i;

    for(i = 0; i < max; i++)
    {
        num[i] = rand();
    }

    for(i = max - 1; i >= 0; i--)
    {
        printf("%d \n", num[i]);
    }

    return 0;
}
