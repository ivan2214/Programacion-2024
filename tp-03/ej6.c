#include <stdio.h>

#define SUELDO_BASICO_MAESTRANZA 100000
#define SUELDO_BASICO_ADMINISTRATIVO 250000
#define SUELDO_BASICO_GERENCIAL 350000

int main()
{
    char categoria;
    int sueldoBasico = 0;
    int sueldoAPagar = 0;
    int antiguedad = 0;
    int totalGastadoEnSueldos = 0;
    char continuar;
    int pagoPorAntiguedad = 0;
    int pagoPorTituloUniversitario = 0;
    int pagoPorRopaDeTrabajo = 0;

    do
    {
        // resetea los sueldos por cada emplelado
        sueldoBasico = 0;
        sueldoAPagar = 0;
        pagoPorAntiguedad = 0;
        pagoPorTituloUniversitario = 0;
        pagoPorRopaDeTrabajo = 0;

        printf("Introduce la categoria del empleado: ");
        printf("\nM: Maestranza");
        printf("\nA: Administrativo");
        printf("\nG: Gerencial\n");
        scanf(" %c", &categoria);

        switch (categoria)
        {
        case 'M':
            sueldoBasico = SUELDO_BASICO_MAESTRANZA;
            break;
        case 'A':
            sueldoBasico = SUELDO_BASICO_ADMINISTRATIVO;
            break;
        case 'G':
            sueldoBasico = SUELDO_BASICO_GERENCIAL;
            break;
        }

        printf("Introduce la antiguedad en años: ");
        scanf("%d", &antiguedad);

        int pagoPorAntiguedad = sueldoBasico * 0.02 * antiguedad;

        sueldoAPagar = sueldoBasico + pagoPorAntiguedad;

        if (categoria == 'A' || categoria == 'G')
        {
            pagoPorTituloUniversitario = sueldoBasico * 0.25;
            sueldoAPagar += pagoPorTituloUniversitario;
        }

        if (categoria == 'M')
        {
            pagoPorRopaDeTrabajo = sueldoBasico * 0.15;
            sueldoAPagar += pagoPorRopaDeTrabajo;
        }

        int descuentosArtYObraSocial = sueldoBasico * 0.12;
        sueldoAPagar -= descuentosArtYObraSocial;

        printf("\nCategoria: %c\n", categoria);
        printf("Antiguedad: %d\n", antiguedad);
        if (categoria == 'A' || categoria == 'G')
        {
            printf("Titulo: si");
        }
        else
        {
            printf("Titulo: no");
        }
        printf("\nValor Antiguedad: %d\n", pagoPorAntiguedad);
        printf("Valor Titulo: %d\n", pagoPorTituloUniversitario);
        printf("Valor Ropa: %d\n", pagoPorRopaDeTrabajo);
        printf("Valor OS y ART: %d\n", descuentosArtYObraSocial);
        printf("Sueldo Final: %d\n", sueldoAPagar);

        totalGastadoEnSueldos += sueldoAPagar;

        printf("¿Deseas ingresar otro empleado? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    // Mostrar el total gastado en sueldos al final
    printf("El total gastado en sueldos es: %d\n", totalGastadoEnSueldos);

    return 0;
}
