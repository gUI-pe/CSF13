#include <stdio.h>

int leProximoDado ();
void registraPadrao (int posicao, int tipo);

int main(void)
{
    while(1)
    {
        int i = 2;
        int a1, a2, a3;
        if(i == 2)
        {
            a1 = leProximoDado();
            a2 = leProximoDado();
            a3 = leProximoDado();
        }
        else
            a1 = a2;
            a2 = a3;
            a3 = leProximoDado();

        if(a3 == -1)
            break;

        if(a1 < a2 && a3 < a2)
            registraPadrao(i, PICO);
        else if(a2 < a1 && a2 > a3)
            registraPadrao(i, DESCIDA);
        else if(a2 < a1 && a2 < a3)
            registraPadrao(i, VALE);
        else if(a2 > a1 && a2 < a3)
            registraPadrao(i, SUBIDA);

        i += 1;
    }
}
