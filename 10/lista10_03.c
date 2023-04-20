#include <stdio.h>

int proxFibonacci (int n);

int proxFibonacci (int n)
{
    int x = 0;
    int a, ant;

    a = 1;
    ant = x;

    while(n > x)
    {
        x = a + ant;
        ant = a;
        a = x;
    }

    return x;
}
