#include <stdio.h>

int main()
{
    char frase;
    int cantPalabrasRe = 0;
    int cantPalabras = 0;
    char mf = '.';
    char anterior = ' ';
    int esRe = 0;

    printf("Ingrese una frase que termine con un punto: ");
    fflush(stdin);
    scanf("%c", &frase);

    while (frase != mf)
    {
        if (anterior == ' ' && frase != ' ')
        { // si el anterior es un espacio y la frase no es un espacio ni un punto entonces estamos leyendo una palabra
            cantPalabras++;
            // Reseteamos el contador de 're' al comenzar una nueva palabra
            esRe = 0;
        }

        // Verificamos si estamos en una palabra que contiene "re"
        if (anterior == 'r' && frase == 'e')
        {
            esRe = 1; // Marcamos que encontramos "re"
        }
        else if (esRe && frase == ' ')
        { // Al encontrar un espacio después de "re", confirmamos la palabra
            cantPalabrasRe++;
            esRe = 0; // Reiniciamos para evitar contar nuevamente
        }

        anterior = frase;
        scanf("%c", &frase);
    }

    // Verificamos si la última palabra contiene "re"
    if (esRe)
    {
        cantPalabrasRe++;
    }

    printf("La cantidad de palabras es: %d \n", cantPalabras);
    printf("La cantidad de palabras con 're' es: %d \n", cantPalabrasRe);

    return 0;
}
