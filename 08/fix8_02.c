#include<stdio.h>

int main (void)
{
    int apostaGols1, apostaGols2, jogoGols1, jogoGols2, score;
    score = 0;

    printf("Digite o placar apostado no formato 1x1\n");
    scanf("%dx%d", &apostaGols1, &apostaGols2);

    printf("Digite o placar do jogo no formato 1x1\n");
    scanf("%dx%d", &jogoGols1, &jogoGols2);

    if (apostaGols1 > apostaGols2)
    {
        if (jogoGols1 > jogoGols2)
        {
            score += 10;
        }
    }
    else if (apostaGols1 < apostaGols2)
    {
        if (jogoGols1 < jogoGols2)
        {
            score += 10;
        }
    }
    else
    {
        if (jogoGols1 == jogoGols2)
        {
            score += 10;
        }
    }

    if (apostaGols1 == jogoGols1)
    {
        score+= 5;
    }

    if (apostaGols2 == jogoGols2)
    {
        score+= 5;
    }

    printf(" %i pontos", score);
    return 0;

}
