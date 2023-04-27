#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
#include <stdio.h>

void pontoRolo1 ();
void pontoRolo2 ();
void rolaTecido ();

void main ()
{
    int n_pontos = LARGURA_FAIXA;
    int i, j;
    int k = 0;
    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
            if(i < n_pontos)
                pontoRolo2 ();
            else
                pontoRolo1 ();
        }
        if(n_pontos >= LARGURA_FAIXA)
            n_pontos = 0;
        else
            n_pontos++;

        rolaTecido ();
    }
}

void pontoRolo1 ()
{
    printf("v");
}

void pontoRolo2 ()
{
    printf("a");
}

void rolaTecido ()
{
    printf("\n");
}
