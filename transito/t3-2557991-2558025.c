#include "trabalho3.h"

int contaVeiculos (Imagem3C* img, Imagem3C* bg,
                   int contagem [N_TIPOS_DE_VEICULOS]);

void zeraBackGround(Imagem3C* img, Imagem3C* bg);

int contaVeiculos (Imagem3C* img, Imagem3C* bg, int contagem [N_TIPOS_DE_VEICULOS])
{
    zeraBackGround(*img, *bg);

    return 1;
}

void zeraBackGround(Imagem3C img, Imagem3C bg)
{
    int i, j;

    int altura = img.altura;
    int largura = img.largura;

    for(i = 0; i < altura; i++)
    {
        for(j = 0; j < largura; j++)
        {
            if(img.dados[i] == bg.dados[i] || img->dados[i * largura + j][0] == bg->dados[i * largura + j][0] || img->dados[i * largura + j][0] == bg->dados[i * largura + j][0])
            {
                img->dados[i * largura + j][0] = 255;
                img->dados[i * largura + j][0] = 255;
                img->dados[i * largura + j][0] = 255;
            }
        }
    }
}
