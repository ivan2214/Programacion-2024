#include <stdio.h>

int main()
{
    char frase;
    int cantidadDePalabrasTerminadasEnOn = 0;
    char palabraAnterior = ' ';
    char palabraActual;

    printf("Ingresa una frase (termina con un punto '.'): ");
    scanf("%c", &frase); // lee el primer caracter

    while (frase != '.')
    {
        // guarda el caracter actual
        palabraActual = frase;

        // lee el siguiente caracter
        scanf("%c", &frase);

        if (palabraAnterior == 'o' && palabraActual == 'n')
        {
            //  el siguiente caracter es un espacio o un punto ?
            if (frase == ' ' || frase == '.')
            {
                cantidadDePalabrasTerminadasEnOn++;
            }
        }

        // actualizar la palabra anterior para la proxima iteracion
        palabraAnterior = palabraActual;
    }

    printf("Cantidad de palabras terminadas en 'on': %d\n", cantidadDePalabrasTerminadasEnOn);

    return 0;
}
