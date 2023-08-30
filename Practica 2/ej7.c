//Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
//un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
//dicha situación.

#include <stdio.h>
int main(){
    float venta, descuento;

    printf("ingrese el valor de la venta: ");
    scanf("%f", &venta);


    if (venta > 0) {
        if (venta >= 100000) {
        descuento = venta * 0.15;
    } else {
        descuento = venta * 0.10;
    } 

    float total = venta - descuento;
    
    printf("total a pagar con descuento : %.2f\n", total);
    } else {
        printf("venta invalida\n");
    }
    
    return 0;
}