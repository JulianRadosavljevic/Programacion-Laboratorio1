#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "autor.h"

#define QTY_TIPO 5

int main()
{
    int opcion;
    int contadorIdautor=0;//cambiar

    Autor arrayAutor[QTY_TIPO];//cambiar
    autor_Inicializar(arrayAutor,QTY_TIPO);

    do
    {
        utn_getInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n\nIngrese una opcion: ",                   //cambiar
                      "\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1: //Alta
                autor_alta(arrayAutor,QTY_TIPO,&contadorIdautor);                   //cambiar
                break;

            case 2: //Modificar
                autor_modificar(arrayAutor,QTY_TIPO);                   //cambiar
                break;

            case 3: //Baja
                autor_baja(arrayAutor,QTY_TIPO);                   //cambiar
                break;

            case 4://Listar
                autor_listar(arrayAutor,QTY_TIPO);                   //cambiar
                break;

            case 5://Ordenar
                autor_ordenarPorString(arrayAutor,QTY_TIPO);                   //cambiar
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
