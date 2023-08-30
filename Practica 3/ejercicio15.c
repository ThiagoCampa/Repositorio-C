//Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
//Mostrar el promedio por alumno y el promedio general.

#include <stdio.h>

int main() {
    int alumnos = 5;
    int calificaciones = 3;

    float sumaTotal = 0;
    float promedioGeneral = 0;

    for (int i = 1; i <= alumnos; i++) {
        float sumaAlumno = 0;
        float promedioAlumno = 0;

        printf("Ingrese las calificaciones del alumno %d:\n", i);

        for (int j = 1; j <= calificaciones; j++) {
            float calificacion;
            printf("Calificación %d: ", j);
            scanf("%f", &calificacion);
            sumaAlumno += calificacion;
            sumaTotal += calificacion;
        }

        promedioAlumno = sumaAlumno / calificaciones;
        printf("Promedio del alumno %d: %.2f\n", i, promedioAlumno);
        printf("\n");
    }

    promedioGeneral = sumaTotal / (alumnos * calificaciones);
    printf("Promedio general: %.2f\n", promedioGeneral);

    return 0;
}