#include<stdio.h>
#include<math.h>

int main (void)
{
    int dia,mes,ano;
    int idade = 0;
    int adia,ames,aano;

    printf("Digite sua data de nascimento no formato dd/mm/aaaa\n");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    printf("Digite a data atual no formato dd/mm/aaaa\n");
    scanf("%i/%i/%i", &adia, &ames, &aano);

    idade = aano - ano;

    if(mes > ames)
    {
        idade -= 1;
    }
    else if(mes == ames)
    {
        if(dia > adia)
        {
            idade -= 1;
        }
    }

    printf("Você tem %i anos", idade);
}
