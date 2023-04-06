#include<stdio.h>

int main (void)
{
    int num, i, soma;
    soma = 0;

    printf("Digite um numero: \n");
    scanf("%i", &num);

    for(i = 1; i <= num/2; i++)
    {
        if(num % i  == 0)
        {
            soma += i;
        }
    }

    if(soma == num)
    {
        printf("O número é perfeito");
    }
    else
    {
        printf("O número não é perfeito");
    }
}
