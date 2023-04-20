#include <stdio.h>

double casasDecimais (double x);

double casasDecimais (double x)
{
    int n;
    n = (int)x;

    if(x > 0)
    {
        return(x - n);
    }
    else if(x < 0)
    {
        return(x - n);
    }

}
