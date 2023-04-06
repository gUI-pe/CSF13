#include <stdio.h>
#include <math.h>

int main (void)
{
    int num1, num2, num3;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite um numero: ");
    scanf("%i", &num2);

    printf("Digite um numero: ");
    scanf("%i", &num3);

    if(num1 > num2)
    {
        if (num3 > num1)
        {
            printf("%i é o maior número", num3);
            return 0;
        }
        else
        {
            printf("%i é o maior número", num1);
            return 0;
        }
    }
    else if (num2 > num3)
    {
        printf("%i é o maior número", num2);
        return 0;
    }
    else
    {
        printf("%i é o maior número", num3);
        return 0;
    }
    return 1;
}
