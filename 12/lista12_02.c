#include<stdio.h>

void removeExtremos (int *n, int *pri, int *ult);

int main(void)
{
    int pri, ult, n;
    n = 1;
    int palindromo = 1;
    while(n >= 10)
    {
        removeExtremos(&n, &pri, &ult);

        if(pri != ult)
        {
            palindromo = 0;
            break;
        }
    }

    if(palindromo)
        printf("eh palindromo");
}

void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}
