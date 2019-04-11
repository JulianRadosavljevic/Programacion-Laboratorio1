#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "f_get.h"
#include "f_validacion.h"

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];

    getString(mensaje,aux);

    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];

    getString(mensaje,aux);

    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/** INCOMPLETO **/

int getString(  char* pResultado, char* mensaje, char* mensajeError,
                int minimo, int maximo, int reintentos)
{

    char bufferStr[4096];

    fgets(bufferStr, sizeof(bufferStr), stdin);
    bufferStr[strlen(bufferStr) - 1] = '\0';

    return 0;
}
