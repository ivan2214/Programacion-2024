#include <stdio.h>

int main(int argc, char const *argv[])
{
    float agua, carbon;
    int distancia_total;
    int km = 0;
    int puedeRecorrer = 1;

    printf("Ingrese la cantidad inicial de agua (en litros): ");
    scanf("%f", &agua);

    printf("Ingrese la cantidad inicial de carbon (en kilos): ");
    scanf("%f", &carbon);

    printf("Ingrese la distancia total del viaje (en kilometros): ");
    scanf("%d", &distancia_total);

    float consumoAguaPorKm = 5.0 / 15.0;   // 5 litros cada 15 km
    float consumoCarbonPorKm = 2.0 / 10.0; // 2 kilos cada 10 km

    while (puedeRecorrer != 0 && km < distancia_total && agua > 0 && carbon > 0)
    {
        km++;
        agua -= consumoAguaPorKm;
        carbon -= consumoCarbonPorKm;

        printf("Kilometro %d: Agua restante = %.2f litros, Carbon restante = %.2f kilos\n", km, agua, carbon);

        if (agua <= 0)
        {
            printf("El tren se quedo sin agua en el kilometro %d. No llego al destino.\n", km);
            puedeRecorrer = 0; // terminar el bucle si se queda sin agua
        }

        if (carbon <= 0)
        {
            printf("El tren se quedo sin carbon en el kilometro %d. No llego al destino.\n", km);
            puedeRecorrer = 0; // terminar el bucle si se queda sin carbon
        }
    }

    if (km == distancia_total)
    {
        printf("El tren llego a su destino con %.2f litros de agua y %.2f kilos de carbon restantes.\n", agua, carbon);
    }

    return 0;
}
