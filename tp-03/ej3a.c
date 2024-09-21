#include <stdio.h>

int main()
{
  int totalPrimos = 0; // contador de numeros primos
  int sumaPrimos = 0;  // suma de los numeros primos

  
  for (int i = 1; i <= 10; i++) // este bucle verifica todos los numeros del 1 al 10 para ver si son primos
  {
    int contadores = 0; // reinicia el contador de divisores para cada numero

    // Verifica si i es primo
    for (int j = 1; j <= i; j++)
     // este bucle verifica todos los divisores de i ossea los anteriores a i (numero a determinar si es primo)
     // supongamos que i=5 este bucle recorrera todos los divisores de 1 a 5 osea j=1,2,3,4,5 verificando cuantos de esos valores dividen a 5, como solo 1 y 5 dividen a 5 entonces el contador de divisores es 2 entonces i es primo

    {
      if (i % j == 0)
      {
        contadores++; // incrementa el contador de divisores
      }
    }

    // Si tiene exactamente 2 divisores (1 y el propio numero), es primo
    if (contadores == 2)
    {
      totalPrimos++;                         // incrementa el contador de numeros primos
      sumaPrimos += i;                       // ssuma el numero primo
      printf("El numero %d es primo.\n", i); // muestra el numero primo
    }
    else
    {
      printf("El numero %d no es primo.\n", i); // muestra si no es primo
    }
  }

  printf("Total de numeros primos: %d\n", totalPrimos);
  printf("Suma de numeros primos: %d\n", sumaPrimos);

  return 0;
}