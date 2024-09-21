#include <stdio.h>

_

#include <math.h>

void mostrarMenuFiguras();
void calcularCuadrado();
void calcularRectangulo();
void calcularCirculo();
void calcularTrianguloEquilatero();

int main()
{
  char continua;
  int figura;

  do
  {
    mostrarMenuFiguras();

    scanf("%d", &figura);

    switch (figura)
    {
    case 1:
      calcularCuadrado();
      break;

    case 2:
      calcularRectangulo();
      break;

    case 3:
      calcularCirculo();
      break;

    case 4:
      calcularTrianguloEquilatero();
      break;

    default:
      printf("Figura geometrica no valida.\n");
      break;
    }

    getchar();
    printf("Desea continuar (s/n)? ");
    scanf("%c", &continua);
  } while (continua == 's' || continua == 'S');

  return 0;
}

void mostrarMenuFiguras()
{
  printf("\nSeleccione la figura geometrica:\n");
  printf("1. Cuadrado\n");
  printf("2. Rectangulo\n");
  printf("3. Circulo\n");
  printf("4. Triangulo equilatero\n");
}

void calcularCuadrado()
{
  int lado;
  printf("Ingrese el valor del lado: ");
  scanf("%d", &lado);
  printf("El area del cuadrado es: %d\n", pow(lado, 2));
  printf("El perimetro del cuadrado es: %d\n", 4 * lado);
}

void calcularRectangulo()
{
  int base, altura;
  printf("\nIngrese el valor de la base: \n");
  scanf("%d", &base);
  printf("\nIngrese el valor de la altura: \n");
  scanf("%d", &altura);
  printf("\nEl area del rectangulo es: %d\n", base * altura);
  printf("\nEl perimetro del rectangulo es: %d\n", 2 * (base + altura));
}

void calcularCirculo()
{
  int radio;

  printf("\nIngrese el valor del radio: \n");
  scanf("%d", &radio);

  printf("\nEl area del circulo es: %d\n", M_PI * pow(radio, 2));
  printf("\nEl perimetro del circulo es: %d\n", 2 * M_PI * radio);
}

void calcularTrianguloEquilatero()
{
  int lado;

  printf("\nIngrese el valor del lado: \n");
  scanf("%d", &lado);

  printf("\nEl area del triangulo es: %d\n", (sqrt(3) / 4) * pow(lado, 2));
  printf("\nEl perimetro del triangulo es: %d\n", 3 * lado);
}