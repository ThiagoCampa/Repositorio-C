//Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
//usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
//almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
//usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.


int main()
{
    int dni = 38632584;
    float nota = 7;

    int dniIngresado = 0;
    int intentos = 1;

    do
    {
        printf("Ingrese el dni del alumno:\n");
        scanf("%i", &dniIngresado);

        if (dniIngresado == dni)
        {
            printf("La nota del alumno es: %f\n", nota);
        }
        else
        {
            printf("El dni es incorrecto.\n");
            intentos = intentos + 1;
        }

    } while (dniIngresado != dni && intentos <= 3);

    if (intentos > 3)
    {
        printf("Nro de intentoa superado...\n");
    }

    return 0;
}