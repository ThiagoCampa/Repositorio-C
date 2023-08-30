//Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
//dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
//consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
//if y luego estructura switch).

#include <stdio.h>
int main(){

    int mes;

    printf("ingrese un numero de 1 hasta 12: ");
    scanf("%d", &mes);

    if (mes = 1){
        printf("el mes corresponde a ENERO\n");
    } else if (mes == 2){
        printf("el mes corresponde a FEBRERO\n");
    } else if (mes == 3){
        printf("el mes corresponde a MARZO\n");
    } else if (mes == 4){
        printf("el mes corresponde a ABRIL\n");
    } else if (mes == 5){
        printf("el mes corresponde a MAYO\n");
    } else if (mes == 6){
        printf("el mes corresponde a JUNIO\n");
    } else if (mes == 7){
        printf("el mes corresponde a JULIO\n");
    }else if (mes == 8){
        printf("el mes corresponde a AGOSTO\n");
    } else if (mes == 9){
        printf("el mes corresponde a SEPTIEMBRE\n");
    } else if (mes == 10){
        printf("el mes corresponde a OCTUBRE\n");
    } else if (mes == 11){
        printf("el mes corresponde a NOVIEMBRE\n");
    } else if (mes == 12){
        printf("el mes corresponde a DICIEMBRE\n");
    } else{
        printf("opcion invalida.");
    }

    return 0;
}











