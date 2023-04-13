#include<stdio.h>
#define MIN_TERMO 0.2

int main (void)
{
    float termo;
    int i = 0;
    float soma = 0;

    for (i = 1; 1 ; i++)
    {
        termo = 1.0/i;
        if (termo < MIN_TERMO)
        {
            break;
        }

        soma += termo;

        printf("%f     %f \n", termo, soma);
    }

    return 0;
}
