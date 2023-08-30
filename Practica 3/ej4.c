//Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.

#include <stdio.h>
int main() {
    int suma = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 != 0) { // Verificar si el número es impar
            suma += i; // Sumar el número a la suma total
        }
    }

    printf("La suma de los números impares entre 1 y 10 es: %d\n", suma);

    return 0;
}
