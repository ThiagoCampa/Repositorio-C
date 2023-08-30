//Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
//que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
//cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
//cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
//Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
//fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
//- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
//12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
//y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
//es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
//venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
//actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
//DNI: 38.456.123
//Medio de pago: Tarjeta de crédito
//Tarjeta: Cabal
//Cuotas: 3
//Total: $4784
//Al finalizar el registro, mostrar la suma total de las ventas ingresadas.

#include <stdio.h>

int main() {
    float num1, num2;
    int opcion, contador = 0;
    float resultado;

    do {
        printf("Ingrese el primer número: ");
        scanf("%f", &num1);

        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);

        printf("\n1. Informar su suma\n");
        printf("2. Informar su resta\n");
        printf("3. Informar su multiplicación\n");
        printf("4. Informar su división\n");
        printf("5. Informar cantidad de operaciones realizadas\n");
        printf("6. Salir\n");
        printf("Seleccione una operación: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("La suma es: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("La resta es: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("La multiplicación es: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("La división es: %.2f\n", resultado);
                } else {
                    printf("No se puede dividir por cero\n");
                }
                break;
            case 5:
                printf("Cantidad de operaciones realizadas: %d\n", contador);
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida\n");
                break;
        }

        contador++;
        printf("\n");
    } while (opcion != 6);

    return 0;
}