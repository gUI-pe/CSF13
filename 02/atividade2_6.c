
#include<stdio.h>
#include<math.h>

int main(void)
{
    int segundos;

    printf("Segundos: ");
    scanf("%d", &segundos);

    printf("%d segundos correspondem a %d dia, %d horas, %d minutos e %d segundos", segundos, segundos / 86400, segundos % 86400 / 3600, segundos % 86400 % 3600 / 60, segundos % 86400 % 3600 % 60);
}
