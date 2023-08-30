//Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.

#include <stdio.h>

int main() {
    float nota, suma = 0;
    int contador = 0;
    char continuar;

    printf("Ingrese las notas (ingrese 's' para detener): \n");

    while (1) {
        printf("Nota %d: ", contador + 1);
        scanf("%f", &nota);

        suma += nota;
        contador++;

        printf("¿Desea ingresar otra nota? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }

    float promedio = suma / contador;

    printf("\nLa suma de las notas es: %.2f\n", suma);
    printf("El promedio de las notas es: %.2f\n", promedio);

    return 0;
}