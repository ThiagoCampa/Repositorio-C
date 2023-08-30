//Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
//positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
//(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
//usuario la suma de los 10 números ingresados.

#include <stdio.h>

int main() {
    float numero;
    float suma = 0;
    int contador = 0;

    printf("Ingrese 10 números reales positivos:\n");

    while (contador < 10) {
        printf("Número %d: ", contador + 1);
        scanf("%f", &numero);

        // Validar que el número sea positivo
        while (numero <= 0) {
            printf("Error: el número debe ser positivo. Reingrese el número %d: ", contador + 1);
            scanf("%f", &numero);
        }

        suma += numero;
        contador++;
    }

    printf("La suma de los 10 números ingresados es: %.2f\n", suma);

    return 0;
}