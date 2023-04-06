#include<stdio.h>

int main (void)
{
    int i, numeros, lastTwo_digit, two_digit, i2;
    numeros = 0;

    for (i = 0; i < 10000; i++)
    {
        i2 = i;
        while(i2 > 0)
        {
            if (i2 < 9999 && i2 > 999)
            {
                lastTwo_digit = i2 % 100;
            }
            if (i2 > 10 && i2 < 100)
            {
                two_digit = i2;
            }
        i2 /= 10;
        }

        if( (two_digit + lastTwo_digit) * (two_digit + lastTwo_digit) == i)
        {
            printf("%i \n", i);
        }
    }
    return 0;
}
