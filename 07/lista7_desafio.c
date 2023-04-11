#include<stdio.h>
#define N 400

int divide(nmax);

int main (void)
{
    int n = 141;
    int answer = 0;
    int passos = 0;
    int nmax, nmin;
    nmax = N;

    while(answer != 2)
    {
        if (divide(nmax) == 2)
        {
            passos++;
            answer = 2;
        }
        else if (divide(nmax) == 1)
        {
            nmax = nmax/2;
            passos++;
            answer = 1;
        }
        else if (divide(nmax) == 3)
        {
            passos++;
            nmin = nmax/2;
        }
    }

}

int divide(nmax)
{
    if (n == nmax/2)
        {
            answer = 2;
        }
        else if(n > nmax/2)
        {
            answer = 3;
        }
        else
        {
            answer = 1;
        }
    return answer;
}
