#include<stdio.h>

int main (void)
{
    int i, j;

    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            printf("%d, %d\n", j, i);

            if(j != i)
                printf("%d, %d\n", i, j);
        }
    }
    return 0;

}
