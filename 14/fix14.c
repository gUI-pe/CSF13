#include <stdio.h>
#include <string.h>

int ehPalindromo (char* s);

int main (void)
{
    char v[4] = "OVO";

    int r = ehPalindromo(v);

    printf("%i", r);
}

int ehPalindromo (char* s)
{
    int i = 0;
    int n;
    for(i = 0, n = strlen(s); i <= (n / 2); i++)
    {
        if(s[i] != s[n - i])
            return -1;
    }

    return 1;
}
