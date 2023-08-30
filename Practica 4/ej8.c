//Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
//calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
//no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
//por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
//Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
//mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
//el 2,5% de la suma de sus ventas.

#include <stdio.h>

int main() {
    char vendedor = 'A';
    float importe, comision, totalVentas;

    while (vendedor <= 'E') {
        printf("Ingrese las ventas del vendedor %c (ingrese 0 para finalizar): \n", vendedor);
        
        totalVentas = 0;
        
        do {
            printf("Importe de venta: ");
            scanf("%f", &importe);
            
            totalVentas += importe;
        } while (importe != 0);
        
        comision = totalVentas * 0.025;
        
        printf("Vendedor: %c\n", vendedor);
        printf("Comisión: %.2f\n", comision);
        
        vendedor++;
    }

    return 0;
}