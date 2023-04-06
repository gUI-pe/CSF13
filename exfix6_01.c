#include<stdio.h>

#define N 10

int main (void)
{
    int i;

    for(i = 0; i < N; i++)
    {
        printf("%i \n", i + 1);
    }

    i = 0;

    while(i < 10)
    {
        printf("%i \n", i + 1);
        i++;
    }
}

