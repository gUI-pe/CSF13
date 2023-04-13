#include<stdio.h>

int main (void)
{
    int num, n;
    int resto = 0;
    int reverse = 0;

    scanf("%i", &n);
    num = n;

    while (num != 0)
    {
        resto = num % 10;
        reverse = reverse * 10 + resto;
        num /= 10;
    }

    if(n == reverse)
    {
        printf("O numero eh palindromo");
        return 0;
    }
    else
    {
        printf("O numero nao eh palindromo");
        return 0;
    }

}
