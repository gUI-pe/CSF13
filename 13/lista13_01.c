#include<stdio.h>
#include <stdlib.h>
#define N 20
#define MAX 40
#define MIN -40
#include <time.h>

int main (void)
{
    float num[N];
    srand(time(NULL));
    int i;
    float sum = 0;
    int pos = 0;

    for(i = 0; i < N; i++)
    {
        float a = (rand()  /(float) RAND_MAX) * (MAX - MIN) + MIN;

        if(a > 0)
        {
            num[pos] = a;
            sum += num[pos];
            pos++;
        }
    }

    sum /= pos;

    printf("%f \n", sum);
    int Amedia = 0;
    int Bmedia = 0;

    for(i = 0; i < pos; i++)
    {
        if (num[i] > 0)
        {
            if(num[i] > sum)
            {
                printf("%f eh maior que a media \n", num[i]);
                Amedia++;
            }
            else if(num[i] < sum)
            {
                printf("%f eh menor que a media \n", num[i]);
                Bmedia++;
            }
            else
            {
                printf("%f eh igual que a media \n", num[i]);
            }
        }

    }

    printf("%i acima da media \n", Amedia);
    printf("%i abaixo da media \n", Bmedia);

    return 0;
}

