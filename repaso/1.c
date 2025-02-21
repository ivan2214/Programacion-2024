#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    Escribe un programa en c que solicite al usuario ingresar una frase que termina en un punto
    El programa debe contar la cantidad de espacios en blanco y mostrar el resultado final
     */

    int cantidadEspacios = 0;
    char cc;

    printf("Ingrese una frase que termine con un punto: ");
    fflush(stdin);
    scanf("%c", &cc);

    while (cc != '.')
    {

        if (cc == ' ')
        {
            cantidadEspacios += 1;
        }
        scanf("%c", &cc);
    }

    printf("La cantidad de espacios es: %d \n", cantidadEspacios);

    return 0;
}
