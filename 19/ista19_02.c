int avaliaDado (int* rolagens, int n);

int avaliaDado (int* rolagens, int n)
{
    int usados[6] = {0};
    int rejeitado = 0;
    int i;

    for(i = 0; i < n; i++)
        usados[(rolagens[i] - 1)]++;

    for(i = 0; i < 6; i++)
    {
        if(usados[i] < 15 || usados[i] > 18)
            rejeitado = 1;
    }

    if(rejeitado)
        return 0;
    else
        return 1;
}

int analisa (int*** in, int largura, int altura, int** out);

int analisa (int*** in, int largura, int altura, int** out)
{
    int i, j, cont = 0;
    int* coluna;

    //malloc do vetor com largura * sizeof int e depois dar free

    for(i = 0; i < altura; i++)
    {
        for(j = 0; j < largura; j++)
        {
            out[i][j] = avaliaDado (in[i][j], 100);
            if(!out[i][j])
            {
                cont++;
                coluna[j]++;
            }
        }
        if(cont >= coluna/2)
            return 1;
        cont = 0;
    }

    for(i = 0; i < largura; i++)
    {
        if(coluna[i] >= altura/2)
            return 1;
    }
    return 0;
}
