//Suma de los 10 primeros números múltiplos de tres.  con FOR

#include <stdio.h>

int main() {
    int suma = 0;
    int numero = 3;

    for (int contador = 0; contador < 10; contador++) {
        suma += numero;
        numero += 3;
    }

    printf("La suma de los 10 primeros números múltiplos de tres es: %d\n", suma);

    return 0;
}