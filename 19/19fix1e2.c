#include<stdio.h>
#include <stdlib.h>

int** geraTrianguloDePascal (int grau);
int** criaMatriz (int nl, int nc);
void imprimeMatriz (int** matriz, int nl, int nc);
void liberaMatriz (int** matriz, int nl, int nc);
int** randomizaMatriz (int** matriz, int nl, int nc);


int main (void)
{
    int grau = 8;

    int** matrizPascal = geraTrianguloDePascal (grau);

    imprimeMatriz (matrizPascal, grau, grau);

    liberaMatriz (matrizPascal, grau, grau);

    return 0;
}

int** criaMatriz (int nl, int nc)
{
    int** matriz;

    matriz = (int**) malloc (nl * sizeof(int*));

    for (int i = 0; i < nl; i++)
    {
        matriz[i] = (int*) malloc (nc * sizeof(int));
    }

    return matriz;
}

int** geraTrianguloDePascal (int grau)
{
    int** matriz = criaMatriz(grau, grau);

    for(int i = 0; i < grau; i++)
    {
        for(int j = 0; j < grau; j++)
        {
            if(j == 0 || j == i)
                matriz[i][j] = 1;
            else if(j < i)
                matriz[i][j] = matriz[i - 1][j] + matriz[i - 1][j - 1];
            else
                matriz[i][j] = 0;
        }
    }

    return matriz;
}


void imprimeMatriz (int** matriz, int nl, int nc)
{
    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < nc; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}

void liberaMatriz (int** matriz, int nl, int nc)
{
    for(int i = 0; i < nl; i++)
        free(matriz[i]);

    free(matriz);
}

int** randomizaMatriz (int** matriz, int nl, int nc)
{
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
            matriz[i][j] = rand() % 10;
}
