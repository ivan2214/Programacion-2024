

#include <stdio.h>

/*
Dada una frase que finaliza con un punto, se requiere calcular y mostrar la cantidad de letras que
tiene la palabra más larga y la cantidad de letras que tiene la palabra más corta de la frase.

Ejemplo: "Asistir a las clases de teoría y llevar los tp al día será clave para un buen desempeño"

Palabra más larga: 9 (desempeño) Palabra más corta: 1 (a/y)

 */

int main()
{
  char c;
  char marcaFinal = '.'; // Punto que marca el final de la frase

  int longitudActual = 0;
  int palabraMasLarga = 0;
  int palabraMasCorta = 0;
  int primeraPalabra = 1; // Para identificar la primera palabra y definir palabra más corta

  printf("Introduce una frase: ");

  // Leer el primer carácter
  scanf("%c", &c);

  while (c != marcaFinal)
  {
    if (c != ' ')
    { // Mientras no sea un espacio, contamos las letras de la palabra
      longitudActual++;
    }
    else if (longitudActual > 0)
    { // Fin de una palabra cuando encontramos un espacio
      // Actualizamos palabra más larga
      if (longitudActual > palabraMasLarga)
      {
        palabraMasLarga = longitudActual;
      }
      // Actualizamos palabra más corta
      if (primeraPalabra || longitudActual < palabraMasCorta)
      {
        palabraMasCorta = longitudActual;
        primeraPalabra = 0; // Ya no estamos en la primera palabra
      }
      // Reiniciar el contador para la siguiente palabra
      longitudActual = 0;
    }

    // Leer el siguiente carácter
    scanf("%c", &c);
  }

  // Revisamos la última palabra (si la frase no termina con un espacio)
  if (longitudActual > 0)
  {
    if (longitudActual > palabraMasLarga)
    {
      palabraMasLarga = longitudActual;
    }
    if (primeraPalabra || longitudActual < palabraMasCorta)
    {
      palabraMasCorta = longitudActual;
    }
  }

  // Mostrar los resultados
  printf("Palabra mas larga: %d\n", palabraMasLarga);
  printf("Palabra mas corta: %d\n", palabraMasCorta);

  return 0;
}