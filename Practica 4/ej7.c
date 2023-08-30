//Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
//datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman

#include <stdio.h>

int main() {
    float numero;
    int contador = 0;

    printf("Ingrese un conjunto de números reales distintos de cero (ingrese 0 para finalizar):\n");

    while (1) {
        printf("Número %d: ", contador + 1);
        scanf("%f", &numero);

        if (numero == 0) {
            break;
        }

        contador++;
    }

    printf("\nLa cantidad de números ingresados es: %d\n", contador);

    return 0;
}