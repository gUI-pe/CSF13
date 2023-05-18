#include<stdio.h>

int contador (char* string);

int main(void)
{
    char txt[27] = "A banana! chorou, na ,cama";

    int palavras = contador(txt);
    printf("%i", palavras);
}

int contador (char* string)
{
    int tam = 0;
    int i;
    int count = 0;
    // Acha o tamanho.
    tam = 0;
    while (string [tam] != '\0')
        tam++;

    for (i = 0; i < tam; i++)
    {
        if(string[i] < 'a' || string[i] > 'z')
        {
            if(string[i] < 'Z' && string[i] > 'A')
            {

            }
            else
            {
                if((string[i + 1] > 'a' && string[i + 1] < 'z') || (string[i + 1] > 'A' && string[i + 1] < 'Z'))
                    count++;
            }

        }

    }

    return count + 1;

}
