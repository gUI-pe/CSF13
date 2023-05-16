#include<stdio.h>
#define N 81

int main(void)
{
    int n;
    scanf("%d", &n);

    char gab[N];
    scanf("%s", gab);

    char prova[N];
    scanf("%s", prova);

    int i;
    int score = 0;
    for(i = 0; i < n; i++)
    {
        if(gab[i] == prova[i])
            score++;
    }

    printf("%i", score);
}
