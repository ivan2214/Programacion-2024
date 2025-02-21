#include <stdio.h>

int main()
{
    char caracter;
    char vocales[43];        // Arreglo para almacenar las vocales
    int frecuencia[5] = {0}; // Frecuencias de a, e, i, o, u
    int totalVocales = 0;

    // Leer la cadena de caracteres hasta encontrar un punto
    printf("Ingrese una cadena (termina con '.'): ");
    scanf("%c", &caracter);

    while (caracter != '.')
    {
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' ||
            caracter == 'o' || caracter == 'u')
        {
            vocales[totalVocales] = caracter; // Almacenar la vocal
            totalVocales++;

            // Contar frecuencia
            if (caracter == 'a')
                frecuencia[0]++;
            else if (caracter == 'e')
                frecuencia[1]++;
            else if (caracter == 'i')
                frecuencia[2]++;
            else if (caracter == 'o')
                frecuencia[3]++;
            else if (caracter == 'u')
                frecuencia[4]++;
        }
        scanf("%c", &caracter); // Leer el siguiente caracter
    }

    // Mostrar resultados
    printf("Arreglo de vocales: [");
    for (int i = 0; i < totalVocales; i++)
    {
        printf("%c", vocales[i]);
        if (i < totalVocales - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Cantidad total de vocales: %d\n", totalVocales);
    printf("Cantidad de a: %d\n", frecuencia[0]);
    printf("Cantidad de e: %d\n", frecuencia[1]);
    printf("Cantidad de i: %d\n", frecuencia[2]);
    printf("Cantidad de o: %d\n", frecuencia[3]);
    printf("Cantidad de u: %d\n", frecuencia[4]);

    return 0;
}
