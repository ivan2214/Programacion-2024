#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAMANIO 10
#define INTENTOS 5

void inicializarMapa(char mapa[TAMANIO][TAMANIO])
{
    for (int i = 0; i < TAMANIO; i++)
    {
        for (int j = 0; j < TAMANIO; j++)
        {
            mapa[i][j] = '.'; // Inicialmente todas las celdas están sin explorar
        }
    }
}

void mostrarMapa(char mapa[TAMANIO][TAMANIO])
{
    for (int i = 0; i < TAMANIO; i++)
    {
        for (int j = 0; j < TAMANIO; j++)
        {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}

int calcularDistancia(int x1, int y1, int x2, int y2)
{
    return abs(x2 - x1) + abs(y2 - y1);
}

int main()
{
    char mapa[TAMANIO][TAMANIO];
    int tesoroX, tesoroY;
    int intentoX, intentoY;
    int intentosRestantes = INTENTOS;

    srand(time(NULL));

    tesoroX = rand() % TAMANIO;
    tesoroY = rand() % TAMANIO;

    inicializarMapa(mapa);

    printf("Bienvenido al juego Cazador de Tesoros!\n");
    printf("El mapa tiene un tamanio de %dx%d.\n", TAMANIO, TAMANIO);
    printf("Tienes %d intentos para encontrar el tesoro.\n\n", INTENTOS);

    while (intentosRestantes > 0)
    {
        mostrarMapa(mapa);

        printf("\nIntentos restantes: %d\n", intentosRestantes);
        printf("Ingresa las coordenadas X Y (separadas por un espacio): ");
        scanf("%d %d", &intentoX, &intentoY);

        if (intentoX < 0 || intentoX >= TAMANIO || intentoY < 0 || intentoY >= TAMANIO)
        {
            printf("Coordenadas fuera de los límites. Intenta de nuevo.\n");
        }

        mapa[intentoX][intentoY] = 'O';

        if (intentoX == tesoroX && intentoY == tesoroY)
        {
            printf("\n¡Felicidades! Encontraste el tesoro en %d intentos.\n", INTENTOS - intentosRestantes + 1);
            break;
        }
        else
        {

            int distancia = calcularDistancia(intentoX, intentoY, tesoroX, tesoroY);
            printf("No encontraste el tesoro. Estas a %d celdas de distancia.\n", distancia);
        }

        intentosRestantes--;
    }

    if (intentosRestantes == 0)
    {
        printf("\nLo siento, has agotado tus intentos.\n");
        printf("El tesoro estaba en la posición (%d, %d).\n", tesoroX, tesoroY);
    }

    // Mostrar el mapa final con la ubicación del tesoro
    mapa[tesoroX][tesoroY] = 'X';
    printf("\nMapa final:\n");
    mostrarMapa(mapa);

    return 0;
}
