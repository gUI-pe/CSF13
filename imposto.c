#include<stdio.h>
#include<math.h>

int main()
{
    float rend, imposto;


    printf("Digite o rendimento: \n");
    scanf("%f", &rend);

    if(rend > 1200.25)
    {
        if(rend > 2300.51)
        {
            if(rend > 3500.76)
            {
                if(rend > 4000)
                {
                    imposto =((rend - 4000) /100 *27.5) + 82.518 + 180.036 + 112.329;

                }
                else
                {
                    imposto =((rend - 3500.76) /100 *22.5) + 82.518 + 180.036;
                }
            }
            else
            {
                imposto =((rend - 2300.51) /100 *15) + 82.518;
            }
        }
        else
        {
            imposto =(rend - 1200.26) /100 *7.5;
        }

    }
    else
    {
        printf("0");
    }

    printf("O imposto é de %.2f", imposto);
}
