#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
#include <stdio.h>

char pontoRolo1 ();
void rolaTecido ();

void main ()
{
    int i, j;
    int a = 1;
    char c;
    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        c = pontoRolo1(a);

        for(i = 1; i <= LARGURA_FAIXA; i++)
        {
            while(i--)
            {
                printf("%c", c);
            }
        }

        rolaTecido();

        if(a == 1)
            a = 0;
        else
            a = 1;
    }
}

char pontoRolo1 (int a)
{
    if(a == 1)
        return('a');
    else
        return('v');
}

void rolaTecido ()
{
    printf("\n");
}
