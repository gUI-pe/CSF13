#include <stdio.h>


typedef struct
{
    int largura;
    int altura;
    unsigned char** dados;
} GSImage;

void destroiGSImage (GSImage* img);

GSImage* reduzPelaMetade (GSImage* img);

GSImage* criaGSImage (int largura, int altura);

int main (void)
{
    GSImage *pixel;
    pixel = criaGSImage (440, 220);
    destroiGSImage (pixel);


}

GSImage* criaGSImage (int largura, int altura)
{
    GSImage *buffer;

    buffer = (GSImage*) malloc (sizeof(GSImage));

    buffer->largura = largura;
    buffer->altura = altura;
    buffer->dados = (unsigned char**) malloc (altura * sizeof(unsigned char*));

    for(int i = 0; i < altura; i++)
    {
        buffer->dados[i] = (unsigned char*) malloc (largura * sizeof(unsigned char));
    }

    return buffer;
}

GSImage* reduzPelaMetade (GSImage* img)
{

}

void destroiGSImage (GSImage* img)
{
    int i;
    for (i = 0; i < img->altura; i++)
        free (img->dados [i]);
    free (img->dados);
    free (img);
}
