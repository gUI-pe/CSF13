#include<stdio.h>

int main(void)
{
    int n1 , quociente, n2;
    n1 = 38;
    n2 = 3;

    while(n1 > n2)
    {
        n1 -= n2;
        quociente++;
    }

    printf("O quociente eh %i e o resto eh %i", quociente, n1);
    return 0;
}
