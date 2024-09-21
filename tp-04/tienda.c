#include <stdio.h>
//  constantes para los precios de los productos
#define PRECIO_HELADERA 850000
#define PRECIO_LAVARROPAS 759000
#define PRECIO_MICROONDAS 520000
#define PRECIO_LAPTOP 1500000
#define PRECIO_TABLET 755000
#define PRECIO_SMARTPHONE 539000

void mostrarMenuCategorias();
void mostrarMenuFormasDePago();
float calcularPrecioProducto(int categoria, int producto);
float calcularPrecioFinal(float precioBase, int formaDePago);

int main()
{
  int categoria, producto, formaDePago;
  float precioBase, precioFinal;
  char continuar;

  float totalRecaudado = 0.0;

  do
  {
    mostrarMenuCategorias();
    scanf("%d", &categoria);

    if (categoria == 1)
    {
      printf("Seleccione el producto:\n");
      printf("1. Heladera ($850.000)\n");
      printf("2. Lavarropas ($759.000)\n");
      printf("3. Microondas ($520.000)\n");
      scanf("%d", &producto);
    }
    else if (categoria == 2)
    {
      printf("Seleccione el producto:\n");
      printf("1. Laptop ($1.500.000)\n");
      printf("2. Tablet ($755.000)\n");
      printf("3. Smartphone ($539.000)\n");
      scanf("%d", &producto);
    }
    else
    {
      printf("Categoria no válida. Intente nuevamente.\n");
      mostrarMenuCategorias();
      scanf("%d", &categoria);
    }

    precioBase = calcularPrecioProducto(categoria, producto);

    mostrarMenuFormasDePago();
    scanf("%d", &formaDePago);

    precioFinal = calcularPrecioFinal(precioBase, formaDePago);

    printf("El precio final a pagar es: $%.2f\n", precioFinal);

    totalRecaudado += precioFinal;

    printf("Desea ingresar otra venta? (s/n): \n");
    scanf("%c", &continuar);

  } while (continuar == 's' || continuar == 'S');

  printf("Total recaudado en el dia: $%.2f\n", totalRecaudado);

  return 0;
}

void mostrarMenuCategorias()
{
  printf("Seleccione la categoria\n");
  printf("1. Electrodomesticos\n");
  printf("2. Informatica\n");
}

void mostrarMenuFormasDePago()
{
  printf("Seleccione la forma de pago: \n");
  printf("1. Efectivo (10%% de descuento)\n");
  printf("2. Tarjeta de credito 1 cuota (sin recargo)\n");
  printf("3. Tarjeta de credito 3 cuotas (15%% de recargo)\n");
  printf("4. Tarjeta de credito 6 cuotas (25%% de recargo)\n");
}

float calcularPrecioProducto(int categoria, int producto)
{

  if (categoria == 1)
  {
    if (producto == 1)
    {
      return PRECIO_HELADERA;
    }
    else if (producto == 2)
    {
      return PRECIO_LAVARROPAS;
    }
    else if (producto == 3)
    {
      return PRECIO_MICROONDAS;
    }
    else
    {
      return 0.0;
    }
  }
  else if (categoria == 2)
  {
    if (producto == 1)
    {
      return PRECIO_LAPTOP;
    }
    else if (producto == 2)
    {
      return PRECIO_TABLET;
    }
    else if (producto == 3)
    {
      return PRECIO_SMARTPHONE;
    }
    else
    {
      return 0.0;
    }
  }
}
float calcularPrecioFinal(float precioBase, int formaDePago)
{
  switch (formaDePago)
  {
  case 1:
    return precioBase * 0.9;
    break;
  case 2:
    return precioBase;
    break;
  case 3:
    return precioBase * 1.15; // 15% de recargo
    break;
  case 4:
    return precioBase * 1.25; // 25% de recargo
    break;
  default:
    return precioBase;
    break;
  }
}