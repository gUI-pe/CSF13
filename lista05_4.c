#include<stdio.h>
#include<math.h>

int main()
{
    int num;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num);//038

    //if(num << 31 == 0)
    if(num & 1)
    {
        printf("impar");
    }
    else
    {
        printf("par");

    }
    return 0;
}
