#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función que genera N números aleatorios impares en el rango [min, max]
void generarImpares(int min, int max, int N, int impares[])
{
    // Variable para contar cuántos números impares hemos generado
    int count = 0;

    // Variable para almacenar el número aleatorio generado
    int numero;

    // Asegurarse de que min sea menor que max, si no, intercambiar los valores
    if (min > max)
    {
        int temp = min; // Usar una variable temporal para el intercambio
        min = max;
        max = temp;
    }

    // Inicializar la semilla para la generación de números aleatorios
    // Usamos time(NULL) para asegurar que se generen números diferentes cada vez que se ejecute el programa
    srand(time(NULL));

    // Bucle que se ejecuta mientras no se hayan generado los N números impares
    while (count < N)
    {
        // Generar un número aleatorio en el rango [min, max]
        // rand() % (max - min + 1) genera un número entre 0 y (max - min)
        // Luego se suma 'min' para trasladarlo al rango deseado
        numero = (rand() % (max - min + 1)) + min;

        // Verificar si el número generado es impar
        // Un número es impar si el residuo de la división por 2 es diferente de 0
        if (numero % 2 != 0)
        {
            // Si el número es impar, se guarda en el arreglo 'impares' en la posición 'count'
            impares[count] = numero;

            // Incrementar el contador para almacenar el siguiente número en la siguiente posición del arreglo
            count++;
        }
    }
}

// Programa principal para probar la función
int main()
{
    int min = 3, max = 20, N = 4;
    int impares[N];

    // Generar los números impares
    generarImpares(min, max, N, impares);

    // Mostrar los resultados
    printf("Los primeros %d números impares generados entre %d y %d son:\n", N, min, max);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
