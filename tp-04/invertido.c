#include <stdio.h>

void invertirNumeroCuentaImpares(int numero);

// -------
int main()
{
  int num;

  printf("Ingrese un numero entero: ");
  scanf("%d", &num);
  invertirNumeroCuentaImpares(num);

  return 0;
}

// -------
void invertirNumeroCuentaImpares(int numero)
{
  int ultimoNumero, cantImpares = 0, numeroInvertido = 0;
  do
  {
    ultimoNumero = numero % 10; // obtengo el ult num
    if ((ultimoNumero % 2) != 0)
    {
      cantImpares++;
    }
    numero /= 10;                                          // quito el ult num
    numeroInvertido = numeroInvertido * 10 + ultimoNumero; // invierto el numero en cada iteracion
  } while (numero > 0);
  printf("\nNumero invertido: %d. Cantidad de impares %d", numeroInvertido, cantImpares); // muestro
}