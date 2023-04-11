#include<stdio.h>
#include<math.h>

int main(void)
{
    int num, min, max, n_intervalo, maior, menor;
    n_intervalo = 0;
    maior = 0;
    menor = 0;

    printf("Digite o min: ");
    scanf("%i", &min);

    printf("Digite o max: ");
    scanf("%i", &max);

    do
    {
        printf("Digite um numero: ");
        scanf("%i", &num);

        if(num >= min && num <= max)
        {
            n_intervalo ++;

            if(n_intervalo == 1)
            {
                maior = num;
                menor = num;
            }

            if (num > maior)
            {
                maior = num;
            }

            if (num < menor)
            {
                menor = num;
            }
        }

    }while(num >= 0);

    printf("%i numeros no intervalo \n", n_intervalo);

    if (n_intervalo == 0)
    {
        printf("Erro ao calcular maior e menor numero\n");
    }
    else
    {
        printf("%i eh o maior numero e %i eh o menor numero\n", maior, menor);
    }
    return 0;
}
