#include<stdio.h>
#include<math.h>

int main (void)
{
    int n, i, ingresso, vencedor;

    printf("Digite n: \n");
    scanf("%i", &n);

    for (i = 1; i < n + 1; i++)
    {
        printf("Digite o numero do ingresso: \n");
        scanf("%i", &ingresso);

        if (ingresso == i)
        {
            vencedor = ingresso;
            break;
        }
    }

    printf("O vencedor eh o dono do ingresso %i", vencedor);
    return 0;
}
