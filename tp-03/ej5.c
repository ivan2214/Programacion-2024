#include <stdio.h>

int main()
{
    char oracion;
    char marcaFinal = '.';
    char letraUsuario;
    int cantidadEspacios = 0;
    int cantidadPalabrasConLetraUsuario = 0;
    int esPalabra = 0; // para indicar si estamos en una palabra

    printf("\nIntroduce una letra: ");
    scanf("%c", &letraUsuario);

    // limpiamos el buffer de entrada para no tener problemas luego de introducir la letra y guardarla en una variable
    fflush(stdin);

    printf("\nIntroduce una frase: ");
    scanf("%c", &oracion);

    while (oracion != marcaFinal)
    {
        if (oracion == ' ')
        {                       // si encontramos un espacio
            cantidadEspacios++; // incrementamos el contador de espacios
            esPalabra = 0;      // indicamos que no estamos en una palabra
        }
        else
        { // si encontramos un carácter que no es espacio
            if (esPalabra == 0)
            {                  // si no estábamos en una palabra antes
                esPalabra = 1; // indicamos que comenzamos una nueva palabra
                // verificamos si la palabra comienza con la letra ingresada por el usuario
                if (oracion == letraUsuario)
                {
                    cantidadPalabrasConLetraUsuario++; // incrementamos el contador de palabras
                }
            }
        }
        scanf("%c", &oracion);
    }
    printf("\nCantidad de espacios en blanco: %d\n", cantidadEspacios);
    printf("Cantidad de palabras que comienzan con '%c': %d\n", letraUsuario, cantidadPalabrasConLetraUsuario);

    return 0;
}
