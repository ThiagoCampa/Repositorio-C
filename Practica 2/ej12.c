//Realizar un programa que permita registrar los datos para una venta de $4600. Para
//ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
//que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
//medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
//una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
//Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
//pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
//6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
//caso contrario informar la situación y finalizar programa. Por último, presentar un
//resumen de la operación, por ejemplo:
//DNI: 38.456.123
//Medio de pago: Tarjeta de crédito
//Tarjeta: Cabal
//Cuotas: 3
//Total: $4784

#include <stdio.h>

int main() {
    int dni, medioPago, tarjeta, cuotas;
    float total;

    // Ingresar DNI
    printf("Ingrese su DNI: ");
    scanf("%d", &dni);

    // Validar DNI
    if (dni < 1000000 || dni > 99999999) {
        printf("El DNI ingresado no es válido.\n");
        return 0;
    }

    // Ingresar medio de pago
    printf("Seleccione el medio de pago:\n");
    printf("1 - Efectivo\n");
    printf("2 - Tarjeta de crédito\n");
    printf("Ingrese su opción: ");
    scanf("%d", &medioPago);

    // Validar medio de pago
    if (medioPago != 1 && medioPago != 2) {
        printf("Opción de medio de pago inválida.\n");
        return 0;
    }

    // Procesar medio de pago
    if (medioPago == 2) {
        // Ingresar tarjeta
        printf("Seleccione la tarjeta:\n");
        printf("1 - Visa\n");
        printf("2 - American Express\n");
        printf("3 - Mercado Pago\n");
        printf("4 - Cabal\n");
        printf("Ingrese su opción: ");
        scanf("%d", &tarjeta);

        // Validar tarjeta
        if (tarjeta < 1 || tarjeta > 4) {
            printf("Opción de tarjeta inválida.\n");
            return 0;
        }
    }

    // Ingresar cantidad de cuotas
    printf("Ingrese la cantidad de cuotas (1, 3, 6, o 12): ");
    scanf("%d", &cuotas);

    // Validar cantidad de cuotas
    if (cuotas != 1 && cuotas != 3 && cuotas != 6 && cuotas != 12) {
        printf("Cantidad de cuotas inválida.\n");
        return 0;
    }

    // Calcular total
    if (medioPago == 1 || cuotas == 1) {
        total = 4600;  // Sin interés
    } else if (cuotas == 3) {
        total = 4600 * 1.04;  // 4% de interés
    } else {
        total = 4600 * 1.08;  // 8% de interés
    }

    // Imprimir resumen de la operación
    printf("\nResumen de la operación:\n");
    printf("DNI: %d\n", dni);
    printf("Medio de pago: %s\n", (medioPago == 1) ? "Efectivo" : "Tarjeta de crédito");
    if (medioPago == 2) {
        printf("Tarjeta: ");
        switch (tarjeta) {
            case 1:
                printf("Visa\n");
                break;
            case 2:
                printf("American Express\n");
                break;
            case 3:
                printf("Mercado Pago\n");
                break;
            case 4:
                printf("Cabal\n");
                break;
        }
    }
    printf("Cuotas: %d\n", cuotas);
    printf("Total: $%.2f\n", total);

    return 0;
}