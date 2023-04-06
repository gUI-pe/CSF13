#include<stdio.h>
#include<math.h>

int main(void)
{
    int raio;

    printf("Digite o valor do raio: \n");
    scanf("%d", &raio);

    float volume =((raio * raio * raio) * M_PI) * 4/3;
    printf("%f\n", volume);
}
