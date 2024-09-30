
#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void cargarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
void imprimirMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);

int main(int argc, char const *argv[])
{
    int matriz1[FILAS][COLUMNAS];
    int matriz2[FILAS][COLUMNAS];

    printf("INGRESA MATRIZ 1\n");
    cargarMatriz(matriz1, FILAS, COLUMNAS);
    printf("INGRESA MATRIZ 2\n");
    cargarMatriz(matriz2, FILAS, COLUMNAS);

    printf("MATRIZ 1\n");
    imprimirMatriz(matriz1, FILAS, COLUMNAS);
    printf("MATRIZ 2\n");
    imprimirMatriz(matriz2, FILAS, COLUMNAS);

    int resultado[FILAS][COLUMNAS];

    sumamatrices(FILAS, COLUMNAS, matriz1, matriz2, resultado);
    printf("RESULTADO\n");
    imprimirMatriz(resultado, FILAS, COLUMNAS);

    return 0;
}

void cargarMatriz(int matriz[][COLUMNAS], int filas, int columnas)
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("INGRESA VALOR [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[][COLUMNAS], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumamatrices(int filas, int columnas, int matriz1[FILAS][COLUMNAS], int matriz2[FILAS][COLUMNAS], int resultado[FILAS][COLUMNAS])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}