#include <stdio.h>
#include <math.h>

int main(void)
{
    int corrente, ndup, resto;
    int reverse = 0;
    int uni, dezena, centena, sum2, verificador;

    printf("Conta corrente de 3 dígitos: \n");
    scanf("%i", &corrente);

    ndup = corrente;

    while (corrente != 0)
    {
        resto = corrente % 10;
        reverse = reverse * 10 + resto;
        corrente /= 10;
    }

    int sum = ndup + reverse;

    if (sum >= 1000)
    {
        sum /= 10;
    }

    while(sum > 0)
    {
        if (sum < 10)
        {
            centena = sum;
        }
        if (sum > 10 && sum < 100)
        {
            dezena = sum % 10;
        }
        if (sum > 100 && sum < 1000)
        {
            uni = sum % 10;
        }
        sum /= 10;
    }

    sum2 = centena + (dezena * 2) + (uni * 3);

    verificador = sum2 % 10;

    printf("O dígito verificador é: %i", verificador);
}
