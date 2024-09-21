#include <stdio.h>

int sum(int a, int b);
int rest(int a, int b);
int prod(int a, int b);
int div(int dividendo, int divisor);
int pot(int base, int exponente);

int main()
{
  int a, b, op;

  do
  {
    printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia\n0. Salir\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      printf("Primer numero\n");
      scanf("%d", &a);
      printf("Segundo numero\n");
      scanf("%d", &b);
      printf("Resultado de %d + %d = %d\n", a, b, sum(a, b));
      break;
    case 2:
      printf("Primer numero\n");
      scanf("%d", &a);
      printf("Segundo numero\n");
      scanf("%d", &b);
      printf("Resultado de %d - %d = %d\n", a, b, rest(a, b));
      break;
    case 3:
      printf("Primer numero\n");
      scanf("%d", &a);
      printf("Segundo numero\n");
      scanf("%d", &b);
      printf("Resultado de %d * %d = %d\n", a, b, prod(a, b));
      break;
    case 4:
      printf("Dividendo\n");
      scanf("%d", &a);
      printf("Divisor\n");
      scanf("%d", &b);
      printf("Resultado de %d / %d = %d\n", a, b, div(a, b));
      break;
    case 5:
      printf("Base\n");
      scanf("%d", &a);
      printf("Exponente\n");
      scanf("%d", &b);
      printf("Resultado de %d ^ %d = %d\n", a, b, pot(a, b));
      break;
    case 0:
      break;
    default:
      printf("Opcion incorrecta\n");
      break;
    }

  } while (op != 0);

  return 0;
}

int sum(int a, int b)
{

  return a + b;
}

int rest(int a, int b)
{

  return a - b;
}

int prod(int a, int b)
{
  int result = 0;

  // Caso cuando b es positivo
  if (b > 0)
  {
    for (int i = 0; i < b; i++)
    {
      result = sum(result, a);
    }
  }
  // Caso cuando b es negativo
  else if (b < 0)
  {
    for (int i = 0; i < rest(0, b); i++)
    {
      result = rest(result, a);
    }
  }

  return result;
}

int div(int dividendo, int divisor)
{

  if (divisor == 0)
  {
    printf("No se puede dividir por cero\n");
    return 0;
  }

  int result = 0;
  int negativo = 0;

  // Verificar si alguno de los números es negativo para manejar el signo final
  if (dividendo < 0)
  {
    dividendo = rest(0, dividendo); // Convertir a a positivo
    negativo = !negativo;           // Invertir el signo
  }
  if (divisor < 0)
  {
    divisor = rest(0, divisor); // Convertir divisor a positivo
    negativo = !negativo;       // Invertir el signo
  }

  // Realizar la división usando restas sucesivas
  while (dividendo >= divisor)
  {
    dividendo = rest(dividendo, divisor); // Restamos el divisor del dividendo
    result = sum(result, 1);              // Aumentamos el contador del resultado
  }

  // Si el resultado debe ser negativo, invertimos el signo
  if (negativo)
  {
    result = rest(0, result);
  }

  return result;
}
int pot(int base, int exponente)
{
  int result = 1;
  int cont = 0;

  while (cont < exponente)
  {
    result = prod(result, base);
    cont = sum(cont, 1);
  }

  return result;
}