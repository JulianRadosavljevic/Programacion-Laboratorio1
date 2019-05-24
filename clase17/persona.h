#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#define TEXT_SIZE 20

typedef struct
{
    int idPersona;
    int isEmpty;
    //-----------------
    char nombre[TEXT_SIZE];
    int edad;
    float varFloat;
    char varChar;
    char apellido[TEXT_SIZE];

}Persona;


#endif // PERSONA_H_INCLUDED

int persona_Inicializar(Persona array[], int size);
int persona_buscarEmpty(Persona array[], int size, int* posicion);
int persona_buscarID(Persona array[], int size, int valorBuscado, int* posicion);
int persona_buscarInt(Persona array[], int size, int valorBuscado, int* posicion);
int persona_buscarString(Persona array[], int size, char* valorBuscado, int* indice);
int persona_alta(Persona array[], int size, int* contadorID);
int persona_baja(Persona array[], int sizeArray);
int persona_bajaValorRepetidoInt(Persona array[], int sizeArray, int valorBuscado);
int persona_modificar(Persona array[], int sizeArray);
int persona_ordenarPorString(Persona array[],int size);
int persona_listar(Persona array[], int size);

Persona* persona_new();
Persona* persona_newParametros(int id,char* nombre,char* apellido);
int persona_delete(Persona* this);

int persona_setNombre(Persona* this, char* value);
int persona_setApellido(Persona* this, char* value);

int persona_getNombre(Persona* this, char* value);
int persona_getApellido(Persona* this, char* value);
