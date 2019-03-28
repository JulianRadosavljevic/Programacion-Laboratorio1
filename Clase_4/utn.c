#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    fflush(stdin);
    //fpurge para otro sistema operativo que no sea windows

    return auxiliar;
}

int getInt(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    fflush(stdin);
    //fpurge para otro sistema operativo que no sea windows

    return auxiliar;
}

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    //fpurge para otro sistema operativo que no sea windows
    scanf("%c",&auxiliar);

    return auxiliar;
}

char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));

    return desde + (rand() % (hasta + 1 - desde));
}
