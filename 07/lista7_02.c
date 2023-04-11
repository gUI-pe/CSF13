#include<stdio.h>

int main(void)
{
    int n, num, aux, i;
    int crescente = 1;
    int decrescente = 1;

    printf("n: ");
    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
        printf("numero: ");
        scanf("%i", &num);

        if(i==0)
        {
            aux = num;
        }
        else
        {
            if(num < aux)
            {
                crescente = 0;
                aux = num;
            }
            else if(num > aux)
            {
                decrescente = 0;
                aux = num;
            }
            else
            {
                aux = num;
            }
        }
    }

    if(crescente == 1)
    {
        printf("sequencia crescente");
        return 0;
    }
    else if(decrescente == 1)
    {
        printf("sequencia decrescente");
        return 0;
    }
    else
    {
        printf("nenhum dos casos");
        return 0;
    }
}
