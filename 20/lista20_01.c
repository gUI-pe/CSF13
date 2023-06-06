#include <stdio.h>

typedef struct{
    float maior;
    float medio;
    float menor;
} MaMeMe;

void classifica (MaMeMe* valores);
void troca(float *a, float *b);

int main (void)
{
    MaMeMe resposta;
    resposta.maior = 1.4;
    resposta.medio = 0.6;
    resposta.menor = 3.8;

    classifica (&resposta);

    printf("%f \n", resposta.maior);
    printf("%f \n", resposta.medio);
    printf("%f \n", resposta.menor);
}

void classifica (MaMeMe* valores)
{
    if(valores->medio > valores->maior)
        troca(&valores->medio , &valores->maior);

    if(valores->menor > valores->medio)
        troca(&valores->menor , &valores->medio);

    if(valores->medio > valores->maior)
        troca(&valores->medio , &valores->maior);

}

void troca(float *a, float *b)
{
    float aux = *a;
    *a = *b;
    *b = aux;
}
