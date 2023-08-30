//Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y
//visualice la siguiente salida

#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ int i, j, n; 
do { 
    printf("valor de n >0\n"); 
    scanf("%d", &n); } 
while (n <= 0); // termina la lectura de n 
    for (i = n; i >= 1; i--) //para cada una de las filas descendentemente 
    { for (j = 1;j <= i; j++) // para cada una de las columnas 
    { 
        printf("%2d", j);
     } 
    printf("\n"); // salto de línea 
    } 
    system("pause"); 
    }