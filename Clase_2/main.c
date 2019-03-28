#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;
    int i;
    int max = 0;
    int min = 0;

    for(i=0;i<2;i++)
        {
            printf("Ingrese un numero \n");
            scanf("%d",&numero);

            if(i == 0 || numero > max)
                {
                    max = numero;
                }
            if(i == 0 || numero < min)
                {
                    min = numero;
                }
        }

    printf("Numero maximo %i \n",max);
    printf("Numero minimo %i \n",min);

}
