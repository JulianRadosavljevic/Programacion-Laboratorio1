#include <stdio.h>
#include <stdlib.h>
#include "f_validacion.h"

int getSuma()
{
    int a;
    int b;
    int resultado;
    int li_salida = 1;
    char texto[] = "";

    printf("Ingrese el primer numero: ");
    scanf("%s", &texto[0]);

    if( validNumber(&texto[0]) )
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("Error");
        li_salida = 0;
    }

    if (li_salida == 1)
    {
        printf("Ingrese el segundo numero: ");
        scanf("%s", &texto[0]);

        if( validNumber(&texto[0]) )
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }

    }

    if (li_salida == 1)
    {
        resultado = a + b;
        printf("El resultado es: <<%i>>",resultado);
    }

    return 0;

}

int getResta()
{
    int a;
    int b;
    int li_salida = 1;
    int resultado;
    char texto[] = "";

    printf("Ingrese el primer numero: ");
    scanf("%s", &texto[0]);

    if( validNumber(&texto[0]) )
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("Error");
        li_salida = 0;
    }

    if (li_salida == 1)
    {
        printf("Ingrese el segundo numero: ");
        scanf("%s", &texto[0]);

        if( validNumber(&texto[0]) )
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }

    }

    if (li_salida == 1)
    {
        resultado = a - b;
        printf("El resultado es: << %d >>",resultado);
    }

    return 0;

}

int getMultiplicacion()
{
    int a;
    int b;
    int li_salida = 1;
    int resultado;
    char texto[] = "";

    printf("Ingrese el primer numero: ");
    scanf("%s", &texto[0]);

    if( validNumber(&texto[0]) )
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("Error");
        li_salida = 0;
    }

    if (li_salida == 1)
    {
        printf("Ingrese el segundo numero: ");
        scanf("%s", &texto[0]);

        if( validNumber(&texto[0]) )
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }

    }

    if (li_salida == 1)
    {
        resultado = a * b;
        printf("El resultado es: << %d >>",resultado);
    }

    return 0;

}

int getDivision()
{
    int a;
    int b;
    int li_salida = 1;
    int resultado;
    char texto[] = "";

    printf("Ingrese el primer numero: ");
    scanf("%s", &texto[0]);

    if( validNumber(&texto[0]) )
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("Error");
        li_salida = 0;
    }

    if (li_salida == 1)
    {
        printf("Ingrese el segundo numero: ");
        scanf("%s", &texto[0]);

        if( validNumber(&texto[0]) )
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }

        if(b == 0)
        {
            printf("ERROR, No se puede dividir por cero.\n");
            return 0;
        }

    }

    if (li_salida == 1)
    {
        resultado = a / b;
        printf("El resultado es: << %d >>",resultado);
    }

    return 0;

}

int getFactoreal()
{
    int fact;
    int n=0;
    int i=0;

    printf("Ingrese el primer numero: ");
    scanf("%i", &fact);

    for(i=1;i<n;i++)
    {
        fact = fact * 1;
    }

    printf("El resultado es: %i",fact);

    return 0;

}


