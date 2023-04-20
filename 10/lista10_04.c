#include <stdio.h>
#include <math.h>

unsigned long long potencia (unsigned int base, unsigned int expoente);

unsigned long long potencia (unsigned int base, unsigned int expoente)
{
    int i;
    unsigned int b = base;

    for(i = 0; i < expoente; i++)
    {
        b *= base;
    }

    return(b);
}
