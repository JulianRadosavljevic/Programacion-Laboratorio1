#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "persona.h"

#define QTY_TIPO 5

int main()
{
    int opcion;
    int contadorIdpersona=0;

    Persona arrayPersona[QTY_TIPO];
    persona_Inicializar(arrayPersona,QTY_TIPO);

    do
    {
        utn_getUnsignedInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Salir\n\nIngrese una opción: ",
                      "\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1: //Alta
                persona_alta(arrayPersona,QTY_TIPO,&contadorIdpersona);
                break;

            case 2: //Modificar
                persona_modificar(arrayPersona,QTY_TIPO);
                break;

            case 3: //Baja
                persona_baja(arrayPersona,QTY_TIPO);
                break;

            case 4://Salir
                break;
            default:
                printf("\nOpcion no valida");
        }
    }
    while(opcion!=4);
    return 0;
}
