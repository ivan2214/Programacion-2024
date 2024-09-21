#include <stdio.h>

// contar vocales abiertas y cantidad por cada una de ellas (a,e,o)

int main()
{
  char c;
  char marcaFinal = '.';

  int total = 0, cantA = 0, cantE = 0, cantO = 0;

  printf("Introduce una frase: ");
  fflush(stdin);
  scanf("%c", &c);

  while (c != marcaFinal)
  {

    if (c == 'a' || c == 'e' || c == 'o')
    {
      if (c == 'a')
        cantA++;
      if (c == 'e')
        cantE++;
      if (c == 'o')
        cantO++;
      total++;
    }

    scanf("%c", &c);
  }

  printf("Total de vocales: %d\n", total);
  printf("Vocales 'a': %d\n", cantA);
  printf("Vocales 'e': %d\n", cantE);
  printf("Vocales 'o': %d\n", cantO);

  return 0;
}
