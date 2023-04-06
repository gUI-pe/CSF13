#include<stdio.h>
#define N 6
int main (void)
{
    float number[N];
    int i, j;
    float a;
    float soma = 0;
    for(i = 0; i < 6; i++)
    {
        printf("Digite sua nota: \n");
        scanf("%f", &number[i]);
    }

    for (i = 0; i < N; ++i)
        {

            for (j = i + 1; j < N; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

       for(i=1; i < 5; i++)
       {
           soma += number[i];
       }

       float media = soma/4;
       printf("A média é %.2f", media);
       return 0;
}
