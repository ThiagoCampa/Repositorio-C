//Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
//sueldo e imprimirlo

#include <stdio.h>
int main(){
    float valorHora, tiempoTrabajado, sueldo;

    printf("ingrese la el valor de su hora: ");
    scanf("%f", &valorHora);
    
    printf("ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &tiempoTrabajado);

    sueldo = valorHora * tiempoTrabajado;
    
    printf("su sueldo es de: %.2f\n $", sueldo);

    return 0;

}
