#include<stdio.h>
#define N 200

int main (void)
{
    int i;
    float soma = 1;

    for(i = 0; i < N; i++)
    {
        if(i % 2 == 0)
        {
            soma -= 1.0/(3 + 2*i);
        }
        else
        {
            soma += 1.0/(3 + 2*i);
        }
    }
    printf("%lf", soma*4);
}
