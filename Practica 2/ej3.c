//Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.

#include <stdio.h>
int main(){
    int num;

    printf("ingrese un numero: ");
    scanf("%d", &num);

    if (num > 0){
        printf("el numero es positivo");
    } else if (num < 0) {
        printf("el numero es negativo");
    } else {
        printf("el numero es nulo");
    }
    
}