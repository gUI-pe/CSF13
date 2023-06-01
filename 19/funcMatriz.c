#include<stdio.h>
#include <stdlib.h>

int** criaMatriz (int nl, int nc);
void imprimeMatriz (int** matriz, int nl, int nc);
void liberaMatriz (int** matriz, int nl, int nc);
int** randomizaMatriz (int** matriz, int nl, int nc);

int main void()
{

}

int** criaMatriz (int nl, int nc)
{
    int** matriz;

    matriz = (int**) malloc (nl * sizeof(int*));

    for (int i = 0; i < nl; i++)
    {
        matriz[i] = (int*) malloc (nc * sizeof(int));
    }
}

void ImprimeMatriz (int** matriz, int nl, int nc)
{
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
            printf("%d", matriz[i][j]);
}

void LiberaMatriz (int** matriz, int nl, int nc)
{
    for(int i = 0; i < nl; i++)
        free(matriz[i]);

    free(matriz);
}

int** randomizaMatriz (int** matriz, int nl, int nc);
{
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
            matriz[i][j] = rand() % 10;
}
