#include<stdio.h>

int main(void)
{
    float num;
    int i;
    int numvalidos = 0;
    float soma = 0;

    for(i = 0; i < 10; i++)
    {
            printf("Digite um número: \n");
            scanf("%f", &num);

            if(num < 20)
            {
                numvalidos++;
                soma += num;
            }
    }

    float media = soma / numvalidos;

    printf("A média dos números válidos é %.2f", media);
    return 0;
}
