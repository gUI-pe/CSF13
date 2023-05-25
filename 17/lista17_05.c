#include<stdio.h>

int main(void)
{
    int resposta_sudoku [9][9] =
                            {{9, 5, 4, 8, 1, 6, 3, 7, 2},
                            {7, 8, 6, 2, 5, 3, 1, 4, 9},
                            {1, 2, 3, 7, 9, 4, 6, 5, 8},
                            {3, 1, 8, 9, 7, 2, 4, 6, 5},
                            {2, 7, 9, 4, 6, 5, 8, 1, 3},
                            {4, 6, 5, 3, 8, 1, 9, 2, 7},
                            {8, 4, 7, 1, 2, 9, 5, 3, 6},
                            {5, 3, 2, 6, 4, 8, 7, 9, 1},
                            {6, 9, 1, 5, 3, 7, 2, 8, 4}};

    int i, j;
    int validez = 1;
    int count[9];

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            count[resposta_sudoku[i][j]]++;
            if(count[resposta_sudoku[i][j]] > 1)
            {
                validez = 0;
                return 1;
            }

            if((i + 1) % 3 == 0)
            {
                if(resposta_sudoku[i][j] == resposta_sudoku[i][j -1] || resposta_sudoku[i][j] == resposta_sudoku[i][j - 2])
                {
                    validez = 0;
                    printf("Inválido");
                    return 1;
                }
            }
        }
        for(int z = 0; z < 9; z++)
        {
            count[i] = 0;
        }
    }

    if(validez)
        printf("Válido");

    return 0;
}
