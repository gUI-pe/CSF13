#include<stdio.h>
#define N 4
#define BUFLEN 128

int main(void)
{
    char strings[N][BUFLEN];

    int i;
    for(i = 0; i < N; i++)
    {
        fgets(strings[i], BUFLEN, stdin);
    }

    for(i = N - 1; i >= 0; i--)
    {
        printf("%s", strings[i]);
    }
    return 0;
}
