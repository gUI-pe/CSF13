#include<stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);
    int respostas[n];


    int i, pos, pulo, j;

    for(i = 0; i < n; i++)
    {
        respostas[i] = 0;
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &pos, &pulo);

        respostas[pos] = 1;

        for(j = pos; j + pulo <= n - 1; j = j)
        {
            j = j + pulo;
            respostas[j] = 1;
        }

        for(j = pos; j - pulo >= 0; j = j)
        {
            j -= pulo;
            respostas[j] = 1;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(respostas[i] == 1)
            printf("1");
        else
            printf("0");
    }

}
