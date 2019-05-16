#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "autor.h"


/** \brief  To indicate that all position in the array are empty,
*          this function put the flag (isEmpty) in TRUE in all
*          position of the array
* \param array autor Array of autor
* \param size int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int autor_Inicializar(Autor array[], int size)                                    //cambiar autor
{
    int li_salida=-1;
    if(array!= NULL && size>0)
    {
        for(;size>0;size--)
        {
            array[size-1].isEmpty=1;
        }
        li_salida=0;
    }
    return li_salida;
}

//*****************************************
//Buscar
//Int
/** \brief Busca el primer lugar vacio en un array
* \param array autor Array de autor
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra un lugar vacio o Error [Invalid length or NULL pointer] - (0) si encuentra una posicion vacia
*
*/
int autor_buscarEmpty(Autor array[], int size, int* posicion)                    //cambiar autor
{
    int li_salida=-1;
    int i;
    if(array!= NULL && size>=0 && posicion!=NULL)
    {
        for(i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
            {
                li_salida=0;
                *posicion=i;
                break;
            }
        }
    }
    return li_salida;
}

/** \brief Busca un ID en un array y devuelve la posicion en que se encuentra
* \param array autor Array de autor
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int autor_buscarID(Autor array[], int size, int valorBuscado, int* posicion)                    //cambiar autor
{
    int li_salida=-1;
    int i;
    if(array!= NULL && size>=0)
    {
        for(i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(array[i].idAutor==valorBuscado)                                                   //cambiar campo ID
            {
                li_salida=0;
                *posicion=i;
                break;
            }
        }
    }
    return li_salida;
}
/** \brief Busca un int en un array y devuelve la posicion en que se encuentra
* \param array autor Array de autor
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int autor_buscarInt(Autor array[], int size, int valorBuscado, int* posicion)                    //cambiar autor
{
    int li_salida=-1;
    int i;
    if(array!= NULL && size>=0)
    {
        for(i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(array[i].varInt==valorBuscado)                                                   //cambiar campo varInt
            {
                li_salida=0;
                *posicion=i;
                break;
            }
        }
    }
    return li_salida;
}

//String
/** \brief Busca un string en un array
* \param array autor Array de autor
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int autor_buscarString(Autor array[], int size, char* valorBuscado, int* indice)                    //cambiar autor
{
    int li_salida=-1;
    int i;
    if(array!=NULL && size>=0)
    {
        for(i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(strcmp(array[i].nombre,valorBuscado)==0)                                        //cambiar campo nombre
            {
                *indice=i;
                li_salida=0;
                break;
            }
        }
    }
    return li_salida;
}

//*****************************************
//Alta
/** \brief Solicita los datos para completar la primer posicion vacia de un array
* \param array autor Array de autor
* \param size int Tamaño del array
* \param contadorID int* Puntero al ID unico que se va a asignar al nuevo elemento
* \return int Return (-1) si Error [largo no valido o NULL pointer o no hay posiciones vacias] - (0) si se agrega un nuevo elemento exitosamente
*
*/
int autor_alta(Autor array[], int size, int* contadorID)                          //cambiar autor
{
    int li_salida=-1;
    int posicion;
    if(array!=NULL && size>0 && contadorID!=NULL)
    {
        if(autor_buscarEmpty(array,size,&posicion)==-1)                          //cambiar autor
        {
            printf("\nNo hay lugares vacios");
        }
        else
        {
            (*contadorID)++;
            array[posicion].idAutor=*contadorID;                                                       //campo ID
            array[posicion].isEmpty=0;
            //utn_getInt("\ngetUnsignedInt: ","\nError",1,sizeof(int),1,1,1,&array[posicion].varInt);           //mensaje + cambiar campo varInt
//            utn_getFloat("\ngetFloat: ","\nError",1,1000000,1,sizeof(float),1,&array[posicion].varFloat);             //mensaje + cambiar campo varFloat
            utn_getNombre("Nombre: ","\nError",1,TEXT_SIZE,1,array[posicion].nombre);                      //mensaje + cambiar campo nombre
            utn_getTexto("Apellido: ","\nError",1,TEXT_SIZE,1,array[posicion].apellido);                 //mensaje + cambiar campo apellido
            printf("\n Posicion: %d\n ID: %d\n nombre: %s\n apellido: %s",
                   posicion, array[posicion].idAutor,array[posicion].nombre,array[posicion].apellido);
            li_salida=0;
        }
    }
    return li_salida;
}

//*****************************************
//Baja valor unico
/** \brief Borra un elemento del array por ID
* \param array autor Array de autor
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se elimina el elemento exitosamente
*
*/
int autor_baja(Autor array[], int sizeArray)
{
    int li_salida=-1;
    int posicion;
    int id;
    if(array!=NULL && sizeArray>0)
    {
        utn_getInt("\nID a eliminar: ","\nError",1,sizeof(int),1,sizeArray,1,&id);
        if(autor_buscarID(array,sizeArray,id,&posicion)==-1)
        {
            printf("\nNo existe este ID");
        }
        else
        {
            array[posicion].isEmpty=1;
            array[posicion].idAutor=0;
            array[posicion].varInt=0;
//            array[posicion].varFloat=0;
            strcpy(array[posicion].nombre,"");
            strcpy(array[posicion].apellido,"");
            printf("Autor eliminado!");
            li_salida=0;
        }
    }
    return li_salida;
}

//Baja valor repetido
/** \brief Borra todos los elemento del array que contengan el valor buscado
* \param array autor Array de autor
* \param size int Tamaño del array
* \param valorBuscado int Valor a buscar en el array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se elimina el elemento exitosamente
*
*/
int autor_bajaValorRepetidoInt(Autor array[], int sizeArray, int valorBuscado) //cuando hay que dar de baja todas las posiciones en las que se encuentra ese int
{
    int li_salida=-1;
    int i;
    if(array!=NULL && sizeArray>0)
    {
        for(i=0;i<sizeArray;i++)
        {
            if(array[i].idAutor==valorBuscado)                                                        //cambiar si no se busca por ID
            {
                array[i].isEmpty=1;
                array[i].idAutor=0;                                                                   //cambiar campo id
                array[i].varInt=0;                                                               //cambiar campo varInt
//                array[i].varFloat=0;                                                             //cambiar campo varFloat
                strcpy(array[i].nombre,"");                                                   //cambiar campo nombre
                strcpy(array[i].apellido,"");                                               //cambiar campo apellido
            }
        }
        li_salida=0;
    }
    return li_salida;
}

//*****************************************
//Modificar
/** \brief Busca un elemento por ID y modifica sus campos
* \param array autor Array de autor
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se modifica el elemento exitosamente
*
*/
int autor_modificar(Autor array[], int sizeArray)                                //cambiar autor
{
    int li_salida=-1;
    int posicion;
    int id;                                                                                         //cambiar si no se busca por ID
    char opcion;
    if(array!=NULL && sizeArray>0)
    {
        utn_getInt("\nID a modificar: ","\nError",1,sizeof(int),1,sizeArray,1,&id);         //cambiar si no se busca por ID
        if(autor_buscarID(array,sizeArray,id,&posicion)==-1)                                   //cambiar si no se busca por ID
        {
            printf("\nNo existe este ID");                                                          //cambiar si no se busca por ID
        }
        else
        {
            do
            {
                printf("\n Posicion: %d\n ID: %d\n varInt: %d\n nombre: %s\n apellido: %s",
                       posicion, array[posicion].idAutor,array[posicion].varInt,array[posicion].nombre,array[posicion].apellido);
                utn_getTexto("\nModificar: A(Id) B(Nombre) C(Apellido) D(salir): ","\nError",'A','Z',1,&opcion);
                switch(opcion)
                {
                    case 'A':
                        utn_getInt("\n: ","\nError",1,sizeof(int),1,1,1,&array[posicion].idAutor);
                        break;
                    case 'B':
                        utn_getNombre("\n: ","\nError",1,TEXT_SIZE,1,array[posicion].nombre);
                        break;
                    case 'C':
                        utn_getTexto("\n: ","\nError",1,TEXT_SIZE,1,array[posicion].apellido);
                        break;
                    case 'D':
                        break;
                    default:
                        printf("\nOpcion no valida");
                }
            }while(opcion!=4);
            li_salida=0;
        }
    }
    return li_salida;
}

//*****************************************
//Ordenar
/** \brief Ordena por campo XXXXX los elementos de un array
* \param array autor Array de autor
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se ordena exitosamente
*
*/
int autor_ordenarPorString(Autor array[],int size)                              //cambiar autor
{
    int li_salida=-1;
    int i, j;
    char bufferString[TEXT_SIZE];                               //cambiar campo nombre
    int bufferId;
    int bufferIsEmpty;

    int bufferInt;                                              //cambiar buffer int
//    float bufferFloat;                                          //cambiar buffer varFloat
    char bufferLongString[TEXT_SIZE];                           //cambiar campo apellido

    if(array!=NULL && size>=0)
    {
        for (i = 1; i < size; i++)
        {
            strcpy(bufferString,array[i].nombre);                      //cambiar campo nombre
            bufferId=array[i].idAutor;                                   //cambiar campo id
            bufferIsEmpty=array[i].isEmpty;

            bufferInt=array[i].varInt;                                //cambiar campo varInt
//            bufferFloat=array[i].varFloat;                            //cambiar campo varFloat
            strcpy(bufferLongString,array[i].apellido);          //cambiar campo apellido


            j = i - 1;
            while ((j >= 0) && strcmp(bufferString,array[j].nombre)<0)         //cambiar campo nombre                 //Si tiene mas de un criterio se lo agrego, Ej. bufferInt<array[j].varInt
            {                                                                                                               //buffer < campo ascendente   buffer > campo descendente
                strcpy(array[j + 1].nombre,array[j].nombre);          //cambiar campo nombre
                array[j + 1].idAutor=array[j].idAutor;                                //cambiar campo id
                array[j + 1].isEmpty=array[j].isEmpty;

                array[j + 1].varInt=array[j].varInt;                        //cambiar campo varInt
//                array[j + 1].varFloat=array[j].varFloat;                    //cambiar campo varFloat
                strcpy(array[j + 1].apellido,array[j].apellido);  //cambiar campo apellido

                j--;
            }
            strcpy(array[j + 1].nombre,bufferString);                     //cambiar campo nombre
            array[j + 1].idAutor=bufferId;                                        //cambiar campo id
            array[j + 1].isEmpty=bufferIsEmpty;

            array[j + 1].varInt=bufferInt;                                                        //cambiar campo varInt
//            array[j + 1].varFloat=bufferFloat;                                                    //cambiar campo varFloat
            strcpy(array[j + 1].apellido,bufferLongString);                                  //cambiar campo apellido
        }
        li_salida=0;
    }
    return li_salida;
}

//*****************************************
//Listar
/** \brief Lista los elementos de un array
* \param array autor Array de autor
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se lista exitosamente
*
*/
int autor_listar(Autor array[], int size)                      //cambiar autor
{
    int li_salida=-1;
    int i;
    if(array!=NULL && size>=0)
    {
        for(i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else
                printf("\n ID: %d\n varInt: %d\n nombre: %s\n apellido: %s",
                       array[i].idAutor,array[i].varInt,array[i].nombre,array[i].apellido);      //cambiar todos
        }
        li_salida=0;
    }
    return li_salida;
}


