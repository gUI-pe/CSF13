#include<stdio.h>
#include <stdlib.h>
#define N 20

int main (void)
{
    int num[N];

    int i;
    float sum = 0;

    for(i = 0; i < N; i++)
    {
        num[i] = rand() % 61 + 20;
        sum += num[i];
    }

    sum /= N;

    printf("%f \n", sum);

    for(i = 0; i < N; i++)
    {
        if(num[i] > sum)
        {
            printf("%i eh maior que a media \n", num[i]);
        }
        else if(num[i] < sum)
        {
            printf("%i eh menor que a media \n", num[i]);
        }
        else
        {
            printf("%i eh igual que a media \n", num[i]);
        }
    }

    return 0;
}
