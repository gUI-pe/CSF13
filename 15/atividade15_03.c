#include<stdio.h>
#define N 10

int copiadora (int* inteiros, int* int2, int* flag);

int presenteEm (int valor, int* v, int n_elementos);

int main(void)
{
    int inteiros[N] = {0, 1, 1, 1, 1, 2, 2, 3, 3, 4};
    int int2[N];
    int flag[10];

    int i;

    for(i = 0; i < N; i++)
    {
        int2[i] = -1;
    }

    int count = copiadora (inteiros, int2, flag);

    printf("%i", count);

}

int copiadora (int* inteiros, int* int2, int* flag)
{
    int i, j;
    j = 0;
    int count = 0;

    for(i = 0; i < N; i++)
    {
        if(!presenteEm(inteiros[i], int2, N))
        {
                int2[j] = inteiros[i];
                j++;
                count++;
        }

    }

    return count;
}

int presenteEm (int valor, int* v, int n_elementos)
{
    int i;
    for(i = 0; i < n_elementos; i++)
    {
        if(v[i] == valor)
            return 1;
    }

    return 0;
}
