#include<stdio.h>

int main(void)
{
    float num;
    int i = 0;
    int numvalidos = 0;
    float soma = 0;

    while(i < 10)
    {
            printf("Digite um número: \n");
            scanf("%f", &num);
            i++;
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

