#include <stdio.h>
#include <math.h>

int main(void)
{
    int valor;
    int cem, cinquenta, vinte, dez, cinco, dois, um;
    cem = 0;
    cinquenta = 0;
    vinte = 0;
    dez = 0;
    cinco = 0;
    dois = 0;
    um = 0;

    // prompting for input
    do
    {
        printf("Valor: \n");
        scanf("%i", &valor);
    }
    while (valor <= 0);

    // checking and subtracting
    while (valor >= 100)
    {
        valor -= 100;
        cem++;
    }
    while (valor >= 50)
    {
        valor -= 50;
        cinquenta++;
    }
    while (valor >= 20)
    {
        valor -= 20;
        vinte++;
    }
    while (valor >= 10)
    {
        valor -= 10;
        dez++;
    }
    while (valor >= 5)
    {
        valor -= 5;
        cinco++;
    }
    while (valor >= 2)
    {
        valor -= 2;
        dois++;
    }
    while(valor >= 1)
    {
        valor -= 1;
        um++;
    }

    // printing
    printf("%i cédula(s) de 100, %i cédula(s) de 50, %i cédula(s) de 20, %i cédula(s) de 10, %i cédula(s) de 5, %i cédula(s) de 2 e %i cédula(s) de 1\n", cem, cinquenta, vinte, dez, cinco, dois, um);
    return 0;
}
