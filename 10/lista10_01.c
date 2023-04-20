#include <stdio.h>
#include <math.h>

int arredonda (double x);

int arredonda (double x)
{
    x = round(x);
    printf("%f", x);
    return x;
}
