#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int i;
    int max = 0;
    int min = 0;

    for(i=0;i<4;i++)
    {
        if(getMaxMin(&max, &min, i) == 0)
        {
            break;
        }
    }

    printf("Numero maximo %i \n",max);
    printf("Numero minimo %i \n",min);

    return 0;
}
