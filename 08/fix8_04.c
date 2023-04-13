#include<stdio.h>
#include<math.h>

int main (void)
{
    int c, comprimento, fim;

    printf("Digite c: \n");
    scanf("%i", &c);

    printf("Digite o comprimento: \n");
    scanf("%i", &comprimento);

    fim = c % comprimento;

    printf("O ponto de termino sera %i", fim);
    return 0;
}
