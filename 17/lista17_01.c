#include<stdio.h>
#define N_LINHAS 4
#define N_COLUNAS 1


int main(void)
{
    int campo [N_LINHAS][N_COLUNAS] = {{100},
{110},
{0},
{100}};

    int maisMinhocas = 0;
    int soma = 0;
    int i, j;

    for(i = 0; i < N_LINHAS; i++)
    {
        for(j = 0; j < N_COLUNAS; j++)
        {
            soma += campo[i][j];
            if(maisMinhocas < soma)
                maisMinhocas = soma;
        }
        soma = 0;
    }

    for(j = 0; j < N_COLUNAS; j++)
    {
        for(i = 0; i < N_LINHAS; i++)
        {
            soma += campo[i][j];
            if(maisMinhocas < soma)
                maisMinhocas = soma;
        }
        soma = 0;
    }

    printf("%i", maisMinhocas);

    return 0;
}
