#include<stdio.h>
#include<math.h>

int main (void)
{
    float x, y;

    printf("Cordenadas x y: ");
    scanf("%f %f", &x, &y);

    if(x == 0 || y == 0)
    {
        if(x == 0 && y == 0)
        {
            printf("Origem");
            return 0;
        }
        else if (x == 0)
        {
            printf("Eixo x");
            return 0;
        }
        else
        {
            printf("Eixo y");
            return 0;
        }
    }

    if(x > 0)
    {
        if(y > 0)
        {
            printf("Q1");
            return 0;
        }
        else
        {
            printf("Q4");
            return 0;
        }
    }

    if(x < 0)
    {
        if(y > 0)
        {
            printf("Q2");
            return 0;
        }
        else
        {
            printf("Q3");
            return 0;
        }
    }

    return 1;
}
