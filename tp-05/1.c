#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 15

void cargarArreglo(int arreglo[], int tama, int inicio, int fin);
void mostrarArreglo(int arreglo[], int tama);
int buscarMayor(int arreglo[], int tama);
void mostrarPromedio(int arreglo[], int tama);
void remplazarCadaNumero(int arreglo[], int tama, int numRemplazo);
void incrementarImpares(int arreglo[], int tama);

int main()
{
    srand(time(NULL));
    // punto1

    int enteros[TAMA];
    // f
    int inicio, fin;

    int numRemplazo;

    printf("Ingrese el numero de inicio para los valores aleatorios \n");
    scanf("%d", &inicio);

    printf("Ingrese el numero de fin para los valores aleatorios \n");
    scanf("%d", &fin);

    cargarArreglo(enteros, TAMA, inicio, fin);

    // a
    mostrarArreglo(enteros, TAMA);

    // b
    buscarMayor(enteros, TAMA);

    // c
    mostrarPromedio(enteros, TAMA);

    // d
    printf("Ingrese el numero para el remplazo de los mayores a 300\n");
    scanf("%d", &numRemplazo);
    remplazarCadaNumero(enteros, TAMA, numRemplazo);

    // e
    incrementarImpares(enteros, TAMA);

    return 0;
}

void cargarArreglo(int arreglo[], int tama, int inicio, int fin)
{
    for (int i = 0; i < tama; i++)
    {
        arreglo[i] = inicio + rand() % (fin - inicio + 1);
    }
}

void mostrarArreglo(int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("arreglo[%d]=%d \n", i, arreglo[i]);
    }
}

int buscarMayor(int arreglo[], int tama)
{
    int numMasGrande;

    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i] > numMasGrande)
        {
            numMasGrande = arreglo[i];
        }
    }
    return numMasGrande;
}
void mostrarPromedio(int arreglo[], int tama)
{
    int promedio = 0;
    int sumPosicionesImpares = 0;
    int cantPosicionImpares = 0;

    for (int i = 1; i < tama; i += 2)
    {
        cantPosicionImpares++;
        sumPosicionesImpares += arreglo[i];
    }

    promedio = sumPosicionesImpares / cantPosicionImpares;

    printf("El promedio es: %d", promedio);
}

void remplazarCadaNumero(int arreglo[], int tama, int numRemplazo)
{
    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i] > 300)
        {
            arreglo[i] = numRemplazo;
        }
    }
    printf("\nArreglo despues de reemplazar cada numero mayor a 300:\n");
    mostrarArreglo(arreglo, tama);
}

void incrementarImpares(int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i] % 2 != 0)
        {
            arreglo[i]++;
        }
    }
    printf("\nArreglo despues del incremento a impares:\n");
    mostrarArreglo(arreglo, tama);
}