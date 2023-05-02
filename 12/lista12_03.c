#include<stdio.h>

int Alternante(int* k, int n);

int main(void)
{
    int k = 1;
    int n;

    scanf("%i", &n);
    int eh_Alternante = Alternante(&k, n);

    if(eh_Alternante)
        printf("%i-alternante", k);
}

int Alternante(int* k, int n)
{
    int num, i, par, impar;
    par = 0;
    impar = 0;
    int kdefinido = 0;
    int seq = 1;

    for(i = 0; i < n; i++)
    {
        scanf("%i", &num);

        if (kdefinido == 0)
        {
            if(i == 0)
            {
                if(num % 2 == 0)
                    par = 1;
                else
                    impar = 1;
            }
            else if(par)
            {
                if(num % 2 == 0)
                    (*k)++;
                else
                {
                    impar = 1;
                    par = 0;
                    kdefinido = 1;
                }
            }
            else
            {
                if(num % 2 != 0)
                    (*k)++;
                else
                {
                    impar = 0;
                    par = 1;
                    kdefinido = 1;
                }
            }

        }
        else
        {
            if(i == 0)
            {
                if(num % 2 == 0)
                    par = 1;
                else
                    impar = 1;
            }
            else if(par)
            {
                if(num % 2 == 0)
                    seq++;
                else
                {
                    if(seq != *k)
                        {
                            return 0;
                        }
                    impar = 1;
                    par = 0;
                    seq = 1;
                }
            }
            else
            {
                if(seq > *k)
                    return 0;
                if(num % 2 != 0)
                    seq++;
                else
                {
                    if(seq != *k)
                    {
                        return 0;
                    }
                    impar = 0;
                    par = 1;
                    seq = 1;
                }
            }

        }

        if(i == n - 1)
        {
            if(seq != *k)
                    {
                        return 0;
                    }
        }
    }

}
