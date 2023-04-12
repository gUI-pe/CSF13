#include<stdio.h>
#define N 400

int divide(nmax);

int main (void)
{
    int answer = 0;
    int passos = 0;
    int nmax, nmin;
    nmax = N;
    nmin = 0;

    while(answer != 2)
    {
       answer = divide(nmin, nmax);

       if (answer == 2)
       {

       }
       else if (answer == 1)
       {
           nmax = (nmax + nmin)/2;
       }
       else
       {
           nmin = (nmax + nmin)/2;
       }

       passos++;
    }
    printf("O programa precisou de %i passo(s)", passos);
    return 0;
}

int divide(nmin, nmax)
{
    int answer = 0;

    printf("O seu numero eh %i? \n", ((nmax + nmin)/ 2));
    scanf("%i", &answer);

    return answer;
}
