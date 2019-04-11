#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "f_get.h"
//#include "f_getStrings.h"

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int utn_validaNumero(char str[]) /** FALTA VALIDAR QUE TOME NEGATIVOS **/
{
   int i=0;

   if(str[i] == '-')
   {
        i++;
   }

   for(;str[i]!='\0';i++)
   {
       if(str[i] < '0' || str[i] > '9')
       {
            return 0;
            break;
       }
   }

   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int utn_validaLetra(char str[]) /** VALIDAR QUE NO TOME NUMEROS **/
{
   int i=0;

   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }

   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */

int utn_validaAlfaNumerico(char str[]) /** FALTA VALIDAR NEGATIVOS **/
{
   int i=0;

   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
           return 0;
       i++;
   }

   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */

int utn_validaTelefono(char str[]) /** FALTA VALIDAR QUE EL PRIMER CARACTER SEA UN NUMERO**/
{
   int i=0;
   int contadorGuiones=0;

   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
       {
            return 0;
       }

       if(str[i] == '-')
       {
            contadorGuiones++;
            i++;
       }
   }

   if(contadorGuiones==1)
   {
        return 1;
   } // debe tener un guion

    return 0;
}
