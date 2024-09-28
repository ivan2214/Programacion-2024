#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int esRectangulo(double a, double b, double c)
{
    double hipotenusa, lado1, lado2;

    // determinar cual es el lado más grande (posible hipotenusa)
    if (a > b && a > c)
    {
        hipotenusa = a;
        lado1 = b;
        lado2 = c;
    }
    else if (b > a && b > c)
    {
        hipotenusa = b;
        lado1 = a;
        lado2 = c;
    }
    else
    {
        hipotenusa = c;
        lado1 = a;
        lado2 = b;
    }

    // comparar si se cumple el teorema de Pitagoras: a^2 + b^2 = c^2
    if ((pow(lado1, 2) + pow(lado2, 2)) == pow(hipotenusa, 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double calcularAngulo(double a, double b, double c)
{
    // paso 1: calcular el numerador del teorema del coseno: a^2 - b^2 - c^2
    double numerador = pow(a, 2) - pow(b, 2) - pow(c, 2);

    // paso 2: calcular el denominador: 2 * b * c
    double denominador = -2 * b * c;

    // paso 3: calcular el coseno del angulo opuesto al lado "a" usando la ley del coseno
    double arcosenoAngulo = numerador / denominador;

    
    double anguloEnRadianes = acos(arcosenoAngulo);

    
    return anguloEnRadianes;
}

double radianesAGrados(double radianes)
{
    return radianes * 180.0 / M_PI;
}

int main()
{
    double a, b, c;
    int angulo;

    printf("Ingrese el valor de los lados a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (esRectangulo(a, b, c))
    {
        printf("Es un triangulo rectangulo. No se puede usar el teorema del coseno.\n");
        return 0;
    }

    printf("Cual angulo desea calcular? (1 para A, 2 para B, 3 para C): ");
    scanf("%d", &angulo);

    double radianes, grados;

    switch (angulo)
    {
    case 1:
        radianes = calcularAngulo(a, b, c);
        grados = radianesAGrados(radianes);
        printf("angulo A: %.2f Radianes | %.2f Grados\n", radianes, grados);
        break;
    case 2:
        radianes = calcularAngulo(b, a, c);
        grados = radianesAGrados(radianes);
        printf("angulo B: %.2f Radianes | %.2f Grados\n", radianes, grados);
        break;
    case 3:
        radianes = calcularAngulo(c, a, b);
        grados = radianesAGrados(radianes);
        printf("angulo C: %.2f Radianes | %.2f Grados\n", radianes, grados);
        break;
    default:
        printf("Opción no válida.\n");
        break;
    }

    return 0;
}
