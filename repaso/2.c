#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*
    Diseñar un algoritmo que recorra una secuencia de caracteres con marca final y cuente
    cuántas palabras contienen dos vocales consecutivas (por ejemplo: "aa", "ee", "oo",
    etc.). Además, debe calcular y mostrar la cantidad de caracteres de la palabra con
    mayor longitud dentro de las encontradas con doble vocal.
    Nota: No usar notación de arreglos para recorrer la cadena
    Ejemplo: Si la frase ingresada es: "El trabajo aeróbico al aire libre es bueno.", el
    programa debe mostrar:
    - Cantidad de palabras con doble vocal: 3 (aeróbico, aire, bueno).
    - Cantidad de caracteres de la palabra con mayor longitud: 8 (aeróbico).
 */

    char mf = '.';
    char caracter;
    char anterior = ' ';
    int doblesVocales = 0;
    int longPalabra = 0;
    int maxLong = 0;

    printf("Ingrese una frase que termine con un punto: ");
    fflush(stdin);
    scanf("%c", &caracter);

    // logica para contar la cantidad de palabras con doble vocal
    // ejemplo El trabajo aeróbico al aire libre es bueno.
    while (caracter != mf)
    {
        if (caracter != ' ' && caracter != mf)
        {
            longPalabra += 1;
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
            {
                if (anterior == 'a' || anterior == 'e' || anterior == 'i' || anterior == 'o' || anterior == 'u')
                {
                    doblesVocales += 1;
                }
            }
        }
        else
        {
            if (longPalabra > maxLong)
            {
                maxLong = longPalabra;
            }
            longPalabra = 0;
        }

        anterior = caracter;
        scanf("%c", &caracter);
    }

    printf("Cantidad de palabras con doble vocal: %d \n", doblesVocales);
    printf("Cantidad de caracteres de la palabra con mayor longitud: %d \n", maxLong);

    return 0;
}
