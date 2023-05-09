#include <stdio.h>
#define N 10

int ehParDeFoolano (unsigned int n1, unsigned int n2);

int main (void)
{
    unsigned int a = 1233;
    unsigned int b = 3321;

    int r;
    r = ehParDeFoolano(a,b);

    printf("%d", r);
}

int ehParDeFoolano (unsigned int n1, unsigned int n2)
{
    int count[N];

    int i;

    for(i = 0; i < N; i++)
    {
        count[i] = 0;
    }

    while(n1 > 0)
    {
        count[n1 % 10]++;
        n1 /= 10;
    }

    while(n2 > 0)
    {
        count[n2 % 10]--;
        n2 /= 10;
    }

    int sum;

    for(i = 0; i < N; i++)
    {
        sum += count[i];
    }

    if(sum == 0)
        return (1);
    else
        return (0);


}
