#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int convertCharToInt(char num[])
{
    int salida = 0;
    int i = 0;

    while(num[i] != '\0')
    {
        salida = salida * 10;
        if (num[0] == '-')
        {
            if (i != 0)
            {
              salida = salida - ((int)num[i] - 48);
            }
        }
        else
        {
            salida = salida + ((int)num[i] - 48);
        }
       i++;
    }

    return salida;
}

int validNumber(char num[])
{
    int i = 0;
    int cantdec = 0;

    while(num[i] != '\0')
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            i++;
        }
        else if ( num[i] == '-' && i == 0)
        {
            i++;
        }
        else if ( num[i] == ',' && cantdec == 0)
        {
            cantdec = 1;
            i++;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}
