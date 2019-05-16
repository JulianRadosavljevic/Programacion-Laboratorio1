#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "fantasma.h" //cambiar por nombre entidad

#define QTY_TIPO 5

int main()
{
    int opcion;
    int contadorIdfantasma=0;//cambiar

    Fantasma arrayFantasma[QTY_TIPO];//cambiar
    fantasma_Inicializar(arrayFantasma,QTY_TIPO);

    do
    {
        utn_getInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n\nIngrese una opcion: ",                   //cambiar
                      "\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1: //Alta
                fantasma_alta(arrayFantasma,QTY_TIPO,&contadorIdfantasma);                   //cambiar
                break;

            case 2: //Modificar
                fantasma_modificar(arrayFantasma,QTY_TIPO);                   //cambiar
                break;

            case 3: //Baja
                fantasma_baja(arrayFantasma,QTY_TIPO);                   //cambiar
                break;

            case 4://Listar
                fantasma_listar(arrayFantasma,QTY_TIPO);                   //cambiar
                break;

            case 5://Ordenar
                fantasma_ordenarPorString(arrayFantasma,QTY_TIPO);                   //cambiar
                break;

            case 6://Salir
                break;
            default:
                printf("\nOpcion no valida");
        }
    }
    while(opcion!=6);
    return 0;
}
