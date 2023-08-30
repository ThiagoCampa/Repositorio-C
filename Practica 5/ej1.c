//Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
//forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.


#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Orden ingresado:\n");
    for (i = 0; i < 5; i++) {
        printf("Índice: %d, Valor: %d\n", i, array[i]);
    }

    printf("\nOrden de atrás hacia adelante:\n");
    for (i = 4; i >= 0; i--) {
        printf("Índice: %d, Valor: %d\n", i, array[i]);
    }

    return 0;
}