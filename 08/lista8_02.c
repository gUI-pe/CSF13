#include<stdio.h>
#define META 1000000

int main (void)
{
    int n, i, soma, dias;
    soma = 0;
    dias = 0;

    scanf("%i", &n);

    int acessos[n];

    for (i = 0; i < n; i++)
    {
        scanf("%i", &acessos[i]);

        soma += acessos[i];
        dias++;

        if (soma >= META)
        {
            break;
        }
    }

    if (soma < META)
    {
        printf("-1");
        return 1;
    }
    else
    {
        printf("%i", dias);
        return 0;
    }
}
