#include <stdio.h>
#include <math.h>

unsigned int inverteNum (unsigned int n);

unsigned int inverteNum (unsigned int n)
{
    int resto = 0;
    int reverse = 0;

    while (n != 0)
    {
        resto = n % 10;
        reverse = reverse * 10 + resto;
        n /= 10;
    }

    return(reverse);

}
