//La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
//dependen de:
//● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
//● Número de pasajeros que lleve
//● Tipo horario del día:
//Horario A: horas de “Alta” congestión:
//● Los automóviles con tres pasajeros o más no pagan peaje
//● Los camiones pagan $300
//● Las motos pagan $100
//Horario B: horas de “Baja” congestión:
//● Los automóviles pagan $150
//● Los camiones pagan $200
//● Las motos no pagan peaje
//En este horario la tarifa es independientemente del número de pasajeros.
//Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
//y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
//de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.

#include <stdio.h>

int main() {
    char tipoVehiculo;
    char tipoHorario;
    int numPasajeros;
    float tarifa = 0;

    printf("Tipo de vehículo (C: Camión, A: Automóvil, M: Moto): ");
    scanf(" %c", &tipoVehiculo);

    printf("Tipo de horario (A: Alta congestión, B: Baja congestión): ");
    scanf(" %c", &tipoHorario);

    if (tipoVehiculo == 'C' || tipoVehiculo == 'A' || tipoVehiculo == 'M') {
        if (tipoHorario == 'A') {
            if (tipoVehiculo == 'A' && numPasajeros >= 3) {
                tarifa = 0;
            } else if (tipoVehiculo == 'C') {
                tarifa = 300;
            } else if (tipoVehiculo == 'M') {
                tarifa = 100;
            }
        } else if (tipoHorario == 'B') {
            if (tipoVehiculo == 'A') {
                tarifa = 150;
            } else if (tipoVehiculo == 'C') {
                tarifa = 200;
            } else if (tipoVehiculo == 'M') {
                tarifa = 0;
            }
        }

        if (tipoVehiculo == 'A' && numPasajeros > 5) {
            printf("El número de pasajeros no puede ser mayor a 5 para un automóvil.\n");
        } else {
            printf("Tarifa a cobrar: %.2f\n", tarifa);
        }
    } else {
        printf("Tipo de vehículo inválido.\n");
    }

    return 0;
}