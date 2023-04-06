#include<stdio.h>
#include<math.h>

int main (void)
{
    int num1, num2, num3;

    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite um número: ");
    scanf("%i", &num2);

    printf("Digite um número: ");
    scanf("%i", &num3);

    if(num1 < num2 && num1 < num3)
    {
        if(num2 < num3)
        {
            printf("%i %i %i", num1, num2, num3);
            return 0;
        }
        else
        {
            printf("%i %i %i", num1, num3, num2);
            return 0;
        }
    }
    else if(num2 < num1 && num2 < num3)
    {
        if(num1 < num3)
        {
            printf("%i %i %i", num2, num1, num3);
            return 0;
        }
        else
        {
            printf("%i %i %i", num2, num3, num1);
            return 0;
        }
    }
    else
    {
        if(num2 < num1)
        {
            printf("%i %i %i", num3, num2, num1);
            return 0;
        }
        else
        {
            printf("%i %i %i", num3, num1, num2);
            return 0;
        }
    }
    return 1;
}
