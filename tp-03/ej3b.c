#include <stdio.h>

int main()
{
  int num1, num2;
  int menor, mayor;
  int totalNumeros = 0, totalPares = 0, sumaImpares = 0;

  // Entrada de datos
  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  // verifica cual es el menor y cual es el mayor
  if (num1 < num2)
  {
    menor = num1;
    mayor = num2;
  }
  else
  {
    menor = num2;
    mayor = num1;
  }

  // contar el rango de numeros el total de pares y la suma de los impares

  for (int i = menor; i <= mayor; i++)
  {
    totalNumeros++;

    if (i % 2 == 0)
    {
      totalPares++;
    }
    if (i % 2 != 0)
    {
      sumaImpares += i;
    }
  }

  printf("Cantidad de numeros en el rango: %d\n", totalNumeros);
  printf("Cantidad de numeros pares: %d\n", totalPares);
  printf("Suma de los numeros impares: %d\n", sumaImpares);

  return 0;
}