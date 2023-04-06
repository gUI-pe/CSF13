#include<stdio.h>

int main (void)
{
    int i;
    float soma = 0;
    float soma2 = 0;
    for(i = 1; i < 1000001;i++)
    {
        if((i  - 1) % 2 == 0)
        {
            soma += 1.0/i;
        }
        else
        {
            soma -= 1.0/i;
        }
    }

    for(i = 1000000; i > 0;i--)
    {
        if((i  - 1) % 2 == 0)
        {
            soma2 += 1.0/i;
        }
        else
        {
            soma2 -= 1.0/i;
        }
    }

    printf("%.20f\n", soma);
    printf("%.20f\n", soma2);
    return 0;
}
