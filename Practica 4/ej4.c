//Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
//Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
//parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
//alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
//mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
//nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
//calculando y por último, el promedio general del curso.

#include <stdio.h>

int main() {
    int cantidadAlumnos, cantidadParciales;
    float nota, sumaNotas, promedioAlumno, promedioGeneral;

    printf("Ingrese la cantidad de alumnos del curso: ");
    scanf("%d", &cantidadAlumnos);

    printf("Ingrese la cantidad de parciales tomados: ");
    scanf("%d", &cantidadParciales);

    promedioGeneral = 0;

    for (int i = 1; i <= cantidadAlumnos; i++) {
        printf("\nIngrese las notas del alumno %d:\n", i);

        sumaNotas = 0;

        int contador = 0;
        while (contador < cantidadParciales) {
            printf("Nota del parcial %d: ", contador + 1);
            scanf("%f", &nota);

            // Validar que la nota sea mayor que 0 y menor que 10
            while (nota <= 0 || nota >= 10) {
                printf("Error: la nota debe ser mayor que 0 y menor que 10. Reingrese la nota del parcial %d: ", contador + 1);
                scanf("%f", &nota);
            }

            sumaNotas += nota;
            contador++;
        }

        promedioAlumno = sumaNotas / cantidadParciales;
        printf("El promedio del alumno %d es: %.2f\n", i, promedioAlumno);

        promedioGeneral += promedioAlumno;
    }

    promedioGeneral /= cantidadAlumnos;
    printf("\nEl promedio general del curso es: %.2f\n", promedioGeneral);

    return 0;
}