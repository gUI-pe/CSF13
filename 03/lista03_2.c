#include <stdio.h>
#include <math.h>

int main (void)
{
    int num = 638;
    int resto = 0;
    int reverse = 0;

    while (num != 0)
    {
        resto = num % 10;
        reverse = reverse * 10 + resto;
        num /= 10;
    }

    printf("%i", reverse);

    return 0;
}
