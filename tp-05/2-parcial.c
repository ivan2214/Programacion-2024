#include <stdio.h>

int numerosTriangulares(int num1, int num2);

int main()
{

    int num1, num2;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    return 0;
}

/*
La sucesion de numeros triangulares seobtienen partiendo de un patron triangula sumando varios enteros onsecutivos a partir de 1. El primer triangulo tiene solo 1 punto. El segundo triangulo tiene otra fila con 2 puntos extra, dando un total de 1 + 2 =3, el tercer triangulo tiene otra fila con 3 puntos extra, dando un total de 1 + 2 + 3 = 6, el
cuarto tiene 1+2+3+4 = 10, y asi sucesivamente.
 */
int numerosTriangulares(int num1, int num2)
{
}