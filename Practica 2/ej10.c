//Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
//dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
//consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
//if y luego estructura switch).

#include <stdio.h>
int main(){

    int dia;

    printf("ingrese un numero de 1 al 12(el numero representa un mes del año): ");
    scanf("%d", &dia);

    switch (dia)
    {
        case 1:
           printf("este numero corresponde a ENERO");
           break;
        case 2:
           printf("este numero corresponde a FEBRERO");
           break;
        case 3:
           printf("este numero corresponde a MARZO");
           break;
        case 4:
           printf("este numero corresponde a ABRIL");
           break;
        case 5:
           printf("este numero corresponde a MAYO");
           break;
        case 6:
           printf("este numero corresponde a JUNIO");
           break;
        case 7:
           printf("este numero corresponde a JULIO");
           break;
        case 8:
           printf("este numero corresponde a AGOSTO");
           break;
        case 9:
           printf("este numero corresponde a SEPTIEMBRE");
           break;
        case 10:
           printf("este numero corresponde a OCTUBRE");
           break;
        case 11:
           printf("este numero corresponde a NOVIEMBRE");
           break;
        case 12:
           printf("este numero corresponde a DICIEMBRE");
           break;
        default:
            printf("elija una opcion valida.");
            break;
    }

    return 0;

}
