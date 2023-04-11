#include<stdio.h>

int main(void)
{
    int num, i, aux, crescente, maiorcrescente;
    crescente = 1;
    maiorcrescente = 1;
    i = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%i", &num);

        if(i == 0)
        {
            aux = num;
        }
        else
        {
            if(num > aux)
            {
                if(crescente > maiorcrescente)
                {
                    maiorcrescente = crescente;
                }

                crescente = 1;

                aux = num;
            }
            else
            {
                crescente++;

                if(crescente > maiorcrescente)
                {
                    maiorcrescente = crescente;
                }

                aux = num;
            }
        }
        i++;
    }while(num > 0);

    printf("A maior sequencia crescente observada tem %i numero(s)", maiorcrescente);
    return 0;
}
