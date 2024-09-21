#include <stdio.h>

int main()
{
  char caracterActual;
  char marcaFinal = '.';
  int contadorLetrasPalabraActual = 0;
  int maximoLetrasPalabra = 0;
  int minimoLetrasPalabra = 100;

  printf("Introduce una frase: ");

  scanf("%c", &caracterActual);

  while (caracterActual != marcaFinal)
  {
    // ingresa me gusta programar en c.

    // primer caracter: 'm'
    // Es una letra, se incrementa el contador de letras osea pasa al else
    // contadorLetrasPalabraActual = 1
    // si es un espacio en blanco o eelfinal de la frase, se van actualizando los valores de maximo y minimo
    if (caracterActual == ' ' || caracterActual == marcaFinal)
    {
      if (contadorLetrasPalabraActual > 0)
      {
        if (contadorLetrasPalabraActual > maximoLetrasPalabra)
        {
          maximoLetrasPalabra = contadorLetrasPalabraActual;
        }
        if (contadorLetrasPalabraActual < minimoLetrasPalabra)
        {
          minimoLetrasPalabra = contadorLetrasPalabraActual;
        }
      }
      contadorLetrasPalabraActual = 0; // Reinicia el contador para la siguiente palabra ( letra o espacio )
    }
    else
    {
      contadorLetrasPalabraActual++; // contar la letra de la palabra actual ( si es una letra se incrementa )
    }

    scanf("%c", &caracterActual);
  }

  
  printf("Palabra más larga tiene %d letras\n", maximoLetrasPalabra);
  printf("Palabra más corta tiene %d letras\n", minimoLetrasPalabra);

  return 0;
}
