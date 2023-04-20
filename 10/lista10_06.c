#include <stdio.h>

int testaTipoChar (char c);

int testaTipoChar (char c)
{
    if(c >= 'a' && c <= 'z')
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return(2);
        }
        else
        {
            return(4);
        }

    }
    else if(c >= 'A' && c <= 'Z')
    {
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return(1);
        }
        else
        {
            return(3);
        }
    }
    else if(c >= 0 && c <= 9)
    {
        return(5);
    }
    else
    {
        return(0);
    }
}
