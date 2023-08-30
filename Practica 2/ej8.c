//Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
//sea mayor o igual que el importe a retirar.

#include <stdio.h>
int main(){
    float saldo, importe, restoSaldo;

    printf("ingrese su saldo: ");
    scanf("%f", &saldo);
    
    printf("ingrese el importe que desea retirar: ");
    scanf("%f", &importe);

    if (saldo >= importe) {
        saldo -= importe;
        printf("esto queda en su cuenta de banco: %.2f", saldo);
    } else {
        printf("saldo insuficiente. no se puede llevar a cabo al accion.");
    }

    return 0;
}