//Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
//Luego presentar el siguiente menú:
// 1-Informar su suma
// 2-Informar su resta
// 3-Informar su multiplicación
// 4-Informar su división
// 5-Salir
//Seleccione una operación:
//Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
//programa debe terminar.

#include <stdio.h>
int main(){

    int opcion;
    float num1, num2;
    float resultado;

    printf("escriba el primer numero: ");
    scanf("%d", &num1);
    printf("escriba el segundo numero: ");
    scanf("%d", &num2);

    do{
        printf("\n1. mostrar suma\n");
        printf("2. mostrar resta\n");
        printf("3. mostrar multiplicacion\n");
        printf("4. mostrar division\n");
        printf("5. salir\n");

        printf("\nSeleccione una opcion: ");
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
                    printf("No se puede dividir entre 0\n");
                }
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida\n");
                break;
        }
    } while (opcion != 5);

    return 0;
 
}    


