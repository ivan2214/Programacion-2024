#include <stdio.h>
#include <string.h>

#define TAMA 50

int main()
{
    char palabra[TAMA];
    int vidas = 3;

    printf("Ingresa una palabra: ");
    gets(palabra);

    int longPalabra = strlen(palabra);
    char palabraEscondida[TAMA];

    for (int i = 0; i < longPalabra; i++)
    {
        palabraEscondida[i] = '_';
    }

    while (vidas > 0 || strcmp(palabra, palabraEscondida) != 0)
    {
        printf("Ingresa una letra: ");
        char letra;
        scanf("%c", &letra);

        for (int i = 0; i < longPalabra; i++)
        {
            if (palabra[i] == letra)
            {
                palabraEscondida[i] = letra;
            }
            else
            {
                vidas--;
            }
        }

        printf("Palabra escondida: ");
        puts(palabraEscondida);

        if (vidas == 0)
        {
            printf("Perdiste!\n");
        }
        else if (strcmp(palabra, palabraEscondida) == 0)
        {
            printf("Ganaste!\n");
        }
    }

    return 0;
}
