#include<stdio.h>

int main(void)
{
    int num, i, boolean;
    int digito;
    boolean = 0;

    printf("Digite um numero positivo: ");
    scanf("%i", &num);

    printf("Digite um digito: ");
    scanf("%i", &digito);

    while(num > 0)
    {
        if (digito == (num % 10))
        {
            boolean = 1;
        }

        num /= 10;
    }

    if (boolean == 1)
    {
        printf("O digito esta contido no numero");
        return 0;
    }
    else
    {
        printf("O digito nao esta contido no numero");
        return 0;
    }

}
