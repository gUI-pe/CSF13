
#include<stdio.h>
#include<math.h>

int main(void)
{
    float um, dois, tres, quatro, cinco;

    printf("Digite um número: \n");
    scanf("%f", &um);

    printf("Digite um número: \n");
    scanf("%f", &dois);

    printf("Digite um número: \n");
    scanf("%f", &tres);

    printf("Digite um número: \n");
    scanf("%f", &quatro);

    printf("Digite um número: \n");
    scanf("%f", &cinco);

    float media;

    media = (um + dois) /2;
    printf("%f\n", media);

    media = (um + dois + tres) /3;
    printf("%f\n", media);

    media =(um + dois+ tres + quatro) /4;
    printf("%f\n", media);

    media = (um + dois + tres + quatro + cinco) /5;
    printf("%f\n", media);
}
