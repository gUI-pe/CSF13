#include<stdio.h>
#include<math.h>

int main (void)
{
    int D;

    printf("Distância do arremesso: \n");
    scanf("%i", &D);

    if(D > 800)
    {
        if(D >1400)
        {
            printf("o lançamento foi de 3 pontos!");
            return 0;
        }
        else
        {
            printf("o lançamento foi de 2 pontos!");
            return 0;
        }
    }
    else
    {
        printf("o lançamento foi de 1 ponto!");
        return 0;
    }
    return 1;
}
