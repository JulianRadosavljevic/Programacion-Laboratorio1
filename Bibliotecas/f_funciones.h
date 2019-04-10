#ifndef F_FUNCIONES_H_INCLUDED
#define F_FUNCIONES_H_INCLUDED

float getFloat(char mensaje[]);
int getInt(char mensaje[]);
char getChar(char mensaje[]);
char getNumeroAleatorio(int desde , int hasta, int iniciar);

int esNumerico(char str[]);
int esSoloLetras(char str[]);
int esAlfaNumerico(char str[]);
int esTelefono(char str[]);



#endif // F_FUNCIONES_H_INCLUDED
