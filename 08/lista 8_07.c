#include<stdio.h>

int main (void)
{
    int n, i, j;

    printf("n: ");
    scanf("%i", &n);

    int sorteio[n];
    int seq[n];
    int maiorSeq = 1;

    for(i = 0; i < n; i++)
    {
        scanf("%i", &sorteio[i]);
    }

    for(i = 0; i < n; i++)
    {
        seq[i] = 1;
        j = i;

        while(sorteio[i] == sorteio[j + 1] && j < n)
        {
            seq[i] += 1;
            j++;
        }

        if (seq[i] > maiorSeq)
        {
            maiorSeq = seq[i];
        }

    }

    printf("%i", maiorSeq);
}
