#include <stdio.h>
#include <math.h>

int main(void)
{
    int valor1,valor2,valor3;

    printf("Valor: \n");
    scanf("%i", &valor1);

    printf("Valor: \n");
    scanf("%i", &valor2);

    printf("Valor: \n");
    scanf("%i", &valor3);

    if(valor1 < 0 || valor2 < 0 || valor3 < 0)
    {
        printf("os valores não podem formar um triângulo");
        return 1;
    }
    else if (valor1 < valor2 + valor3 && valor2 < valor1 + valor3 && valor3 < valor1 + valor2)
    {
        if(valor1 == valor2 && valor2 == valor3)
        {
            printf("Triângulo equilátero");
            return 0;
        }
        else if(valor1 == valor2 || valor2 == valor3 || valor1 == valor3)
        {
            printf("Triângulo isósceles");
            return 0;
        }
        else
        {
            printf("Triângulo escaleno");
            return 0;
        }

    }
    printf("os valores não podem formar um triângulo");
    return 2;
}
