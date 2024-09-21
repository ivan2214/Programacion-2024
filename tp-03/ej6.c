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

    printf("Introduce la categoria: ");
    printf("\nM: Maestranza");
    printf("\nA: Administrativo");
    printf("\nG: Gerencial\n");
    fflush(stdin);
    scanf("%c", &categoria); 

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
    default:
        printf("La categoria introducida no es correcta\n");
        return 0;
    }

    
    printf("Introduce la antiguedad en años: ");
    scanf("%d", &antiguedad);

    
    int pagoPorAntiguedad = sueldoBasico * 0.02 * antiguedad;

    
    sueldoAPagar = sueldoBasico + pagoPorAntiguedad;

    
    if (categoria == 'A' || categoria == 'G')
    {
        int pagoPorTituloUniversitario = sueldoBasico * 0.25;
        sueldoAPagar += pagoPorTituloUniversitario;
    }

    
    if (categoria == 'M')
    {
        int pagoPorRopaDeTrabajo = sueldoBasico * 0.15;
        sueldoAPagar += pagoPorRopaDeTrabajo;
    }

    
    int descuentosArtYObraSocial = sueldoAPagar * 0.12;
    sueldoAPagar -= descuentosArtYObraSocial;

    
    printf("El sueldo a pagar es: %d\n", sueldoAPagar);

    
    totalGastadoEnSueldos += sueldoAPagar;

    
    printf("El total gastado en sueldos hasta ahora es: %d\n", totalGastadoEnSueldos);

    return 0;
}
