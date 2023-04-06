#include <stdio.h>
#include <math.h>

int main (void)
{
    float alcoolPreco, gasPreco = 0;
    int gasKm, alcoolKm = 0;

    printf("Preco do litro do alcool: ");
    scanf("%f", &alcoolPreco);

    printf("Preco do litro da gasolina: ");
    scanf("%f", &gasPreco);

    printf("Kilometros por litro com alcool: ");
    scanf("%i", &alcoolKm);

    printf("Kilometros por litro com gasolina: ");
    scanf("%i", &gasKm);

    float autonomiaAlcool = alcoolKm / alcoolPreco;

    float autonomiaGas = gasKm / gasPreco;

    if(autonomiaAlcool > autonomiaGas)
    {
        printf("É mais econômico abastecer o carro com alcool");
    }
    else if(autonomiaAlcool < autonomiaGas)
    {
        printf("É mais econômico abastecer o carro com gasolina");
    }
    else
    {
        printf("É mais preferível abastecer o carro com gasolina");
    }
}
