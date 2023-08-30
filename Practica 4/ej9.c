//Realizar un programa que permita ver información a un cliente de un banco. Para ello
//el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
//validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
//ingreso de contraseña. Al loguarse correctamente presentar un menú con las
//siguientes opciones:
//1- Consultar saldo
//2- Consultar CBU
//3- Salir

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main()
{

    //.........................................//
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    //.........................................//

    int opcion;
    opcion = 0;

    while (intentos <= 3)
    {

        printf("Ingrese su DNI: \n");
        scanf("%d", &dniIngresado);
        printf("Ingrese su contraseña : \n");
        scanf("%d", &passIngresado);

        if (dniIngresado == dni && passIngresado == pass) 
        {
            ingresaCorrectamente = 1;
            break;
        } else
        {
            printf("Los datos ingresados son incorrectos. Intento %d de 3.\n", intentos);
            intentos++;
        }
    }
if (ingresaCorrectamente)
    {
       while ( opcion != 3)
       {
            printf("\nBienvenido al banco\n");
            printf("1 -> Consultar saldo\n");
            printf("2 -> Consultar CBU\n");
            printf("3 -> Salir\n");
            printf("Ingrese una opción: \n");
            scanf("%d",&opcion);

            switch (opcion)
            {
            case 1:
                    printf(" Su saldo es de :%d\n", saldo);

                break;
            case 2:
                    printf(" Su CBU es :%d\n", cbu);

                break;
            case 3:
                    printf("Hasta luego.\n");

                break;
            default:
                    printf("Dato invalido");
                break;
            }
       }
    }
    else
    {
        printf("Ha alcanzado el máximo de intentos permitidos. Vuelva a intentarlo más tarde.\n");
    }

    system("pause"); 
    return 0;
}