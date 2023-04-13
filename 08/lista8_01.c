#include<stdio.h>

int main (void)
{
    int a, passos;
    passos = 1;

    printf("Digite o primeiro elemento da sequência de Collatz \n");
    scanf("%i", &a);

    printf("%i \n", a);

    while(a != 1)
    {
        if(a % 2 == 0)
        {
            a = a/2;
        }
        else
        {
            a = 3 * a + 1;
        }

        passos++;
        printf("%i \n", a);
    }

    printf("O programa gerou %i elementos \n", passos);
    return 0;
}
