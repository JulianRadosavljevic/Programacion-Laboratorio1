#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "autor.h" //cambiar por nombre entidad
#include "libro.h"
#include "socio.h"
#include "prestamo.h"


#define QTY_TIPO 5

int main()
{
    int opcion;
    int contadorIdautor=0;                   //cambiar
    int contadorIdlibro=0;

    Autor arrayAutor[QTY_TIPO];                   //cambiar
    autor_Inicializar(arrayAutor,QTY_TIPO);                   //cambiar
    Libro arrayLibro[QTY_TIPO];                   //cambiar
    libro_Inicializar(arrayLibro,QTY_TIPO);

    do
    {
        utn_getUnsignedInt("\n\n1) Alta Autor \n2) Modificar Autor \n3) Baja Autor \n4) Listar Autor\n5) Ordenar Autor\n\n6) Alta Libro \n7) Modificar Libro \n8) Baja Libro \n9) Listar Libro\n10) Ordenar Libro \n\n11) Salir\n\nIngrese una opción: ",                   //cambiar
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

            case 6: //Alta
                libro_alta(arrayLibro,QTY_TIPO,&contadorIdlibro);                   //cambiar
                break;

            case 7: //Modificar
                libro_modificar(arrayLibro,QTY_TIPO);                   //cambiar
                break;

            case 8: //Baja
                libro_baja(arrayLibro,QTY_TIPO);                   //cambiar
                break;

            case 9://Listar
                libro_listar(arrayLibro,QTY_TIPO);                   //cambiar
                break;

            case 10://Ordenar
                libro_ordenarPorString(arrayLibro,QTY_TIPO);                   //cambiar
                break;


            case 11://Salir
                break;
            default:
                printf("\nOpcion no valida");
        }
    }
    while(opcion!=11);
    return 0;
}
