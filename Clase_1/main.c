#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;
    int i;
    int cantidad_positivo;
    int cantidad_negativo;

    cantidad_positivo=0;
    cantidad_negativo=0;

    for(i=0;i<2;i++)
        {
            printf("Ingrese un numero \n");
            scanf("%d",&numero);

            if(numero>=0)
                {
                    cantidad_positivo++;
                }

            if(numero<0)
                {
                    cantidad_negativo++;
                }
        }

    printf("Cantidad de positivos %d \n",cantidad_positivo);
    printf("Cantidad de negativos %d \n",cantidad_negativo);

}
