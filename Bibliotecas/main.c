#include <stdio.h>
#include <stdlib.h>
#include "f_funciones.h"

int main()
{
    /**
        Creo una variable para guardar el numero que me trae la funcón y luego lo muestro.
     */


    float auxiliar;

    auxiliar = getFloat("Ingrese un numero: ");

    printf("EL numero es: %.2f",auxiliar);

    return 0;
}
