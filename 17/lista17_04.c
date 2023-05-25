#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6
#define M 5

int main(void)
{
    srand(time());

    int matriz1 [M][N];
    int matriz2 [N][M];

    int i, j;

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; i++)
        {
            matriz1[i][j] = rand() % 10;
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; i++)
        {
            matriz2[i][j] = rand() % 10;
        }
    }

    int matriz3 [M][M];

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; i++)
        {

        }
    }
}

for(i = 0; i < M; i++)
{
    soma += matriz1[i][j] * matriz2[i][j]
}
