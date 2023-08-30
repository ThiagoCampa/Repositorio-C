//Diseñe un algoritmo que sume los 20 primeros números impares.

#include <stdio.h>

int main() {
    int suma = 0;
    int contador = 0;
    int numero = 1;

    while (contador < 20) {
        suma += numero;
        numero += 2;
        contador++;
    }

    printf("La suma de los primeros 20 números impares es: %d\n", suma);

    return 0;
}
