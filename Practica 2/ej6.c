//Leer una nota de un alumno por consola e informar la condición del mismo. (menor
//que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
//que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
//inválida”.

#include <stdio.h>
int main(){

    int nota;

    printf("ingrese la nota del alumno: ");
    scanf("%d", &nota);

    if (nota >=0 && nota <=10){
        if (nota <4){
            printf("el alumno esta reprobado.");
        }else if (nota >4 && nota <6){
            printf("el alumno es regualar.");
        }else if(nota >=6){
            printf("el alumno esta promocionado.");
        }
    } else{
        printf("la nota es invalida.");
    }
  
    return 0;
}