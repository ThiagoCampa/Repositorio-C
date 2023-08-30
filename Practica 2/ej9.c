//Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
//o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
//altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
//es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”

#include <stdio.h>
int main(){
    float altura;
    
    printf("ingrese su altura: ");
    scanf("%f", &altura);

    if (altura <= 1.50 ){
        printf("su altura esta por debajo de la media.");
    }else if (altura >1.50 && altura <= 1.70){
        printf("persona de altura media.");
    }else {
        printf("persona de altura por arriba de la media.");
    }

    return 0;

}
