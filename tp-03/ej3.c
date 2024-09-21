

/*
a) PRIMOS: Dada una secuencia de 10 números enteros, determine si cada uno de ellos
es número primo y muestre un mensaje. Además, calcule el total de primos de la secuencia y la
suma de los mismos.

Números primos entre 1 y 100: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67,
71, 73, 79, 83, 89 y 97.

 */

#include <stdio.h>

int main()
{
  int num;             // Variable para almacenar el número ingresado
  int totalPrimos = 0; // Contador de números primos
  int sumaPrimos = 0;  // Suma de los números primos

  // Bucle para ingresar 10 números
  for (int i = 0; i < 10; i++)
  {
    printf("Ingrese un numero entero: ");
    scanf("%d", &num); // Leer un número entero

    // Verificar si el número es primo
    int esPrimo = 1; // Suponemos que el número es primo

    if (num < 2)
    {
      esPrimo = 0; // 0 y 1 no son primos
    }
    else
    {
      // Verificar si hay divisores desde 2 hasta num-1
      for (int j = 2; j < num; j++)
      {
        if (num % j == 0)
        {
          esPrimo = 0; // No es primo si es divisible por j
          break;       // Salimos del bucle si encontramos un divisor
        }
      }
    }

    // Mostrar resultado
    if (esPrimo)
    {
      printf("%d es un número primo.\n", num);
      totalPrimos++;     // Aumentamos el contador de primos
      sumaPrimos += num; // Sumamos el número primo
    }
    else
    {
      printf("%d no es un número primo.\n", num);
    }
  }

  // Mostrar totales
  printf("Total de números primos: %d\n", totalPrimos);
  printf("Suma de números primos: %d\n", sumaPrimos);

  return 0; // Fin del programa
}
