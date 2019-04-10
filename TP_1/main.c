#include <stdio.h>
#include <stdlib.h>
#include "f_math.h"
#include "f_validacion.h"

int main()
{
    int opcion;

    printf("\n\t\t----C A L C U L A D O R A----\n\n");
    printf("Opcion suma ------> 1\n");
    printf("Opcion resta -----> 2\n");
    printf("Opcion multi. ----> 3\n");
    printf("Opcion division --> 4\n");
    printf("Opcion factoreo --> 5\n");
    printf("Opcion salida ----> 0\n");

    do
        {
            printf("\n\nElija una opcion: ");
            scanf("%i", &opcion);

            switch(opcion)
            {
            case 1:
                {
                    printf("\n<<Usted eligio la operacion suma>>\n\n");
                    getSuma();
                    break;
                }
            case 2:
                {
                    printf("\n<<Usted eligio la operacion resta>>\n\n");
                    getResta();
                    break;
                }
            case 3:
                {
                    printf("\n<<Usted eligio la operacion multiplicacion>>\n\n");
                    getMultiplicacion();
                    break;
                }
            case 4:
                {
                    printf("\n<<Usted eligio la operacion division>>\n\n");
                    getDivision();
                    break;
                }
            case 5:
                {
                    printf("\n<<Usted eligio la operacion factorizacion>>\n\n");
                    getFactoreal();
                    break;
                }
            default:
                {
                    printf("\n<<Cancelar>>\n\n");
                    return 0;
                }
            }

        }while(opcion!=6);

    return 0;
}
