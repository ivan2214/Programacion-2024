#include <stdio.h>
#include <ctype.h>

int main()
{
  char pass;
  int hasUpper = 0, hasLower = 0, hasNum = 0, hasSpecial = 0, length = 0;

  printf("Ingrese una contrasenia: ");
  scanf("%c", &pass);
  // Leer la contrasenia caracter por caracter hasta que el usuario presione Enter
  while (pass != '\n' && pass != '.' && pass != ' ')
  {
    length++; // Aumenta la longitud de la contrasenia

    if (isupper(pass)) // Verifica si es mayuscula
    {

      hasUpper = 1;
    }
    else if (islower(pass)) // Verifica si es minuscula
    {
      hasLower = 1;
    }
    else if (isdigit(pass)) // Verifica si es numero
    {
      hasNum = 1;
    }
    else if ((pass >= 33 && pass <= 47) || (pass >= 58 && pass <= 64) ||
             (pass >= 91 && pass <= 96) || (pass >= 123 && pass <= 126)) // Verifica si es un caracter especial
    {
      hasSpecial = 1;
    }

    scanf("%c", &pass);
  }

  // Validaciones de los requisitos de la contrasenia
  if (length < 8)
    printf("La contrasenia debe tener al menos 8 caracteres.\n");
  if (!hasUpper)
    printf("Debe contener al menos una letra mayúscula.\n");
  if (!hasLower)
    printf("Debe contener al menos una letra minúscula.\n");
  if (!hasNum)
    printf("Debe contener al menos un número.\n");
  if (!hasSpecial)
    printf("Debe contener al menos un carácter especial.\n");

  // Validación final
  if (length >= 8 && hasUpper && hasLower && hasNum && hasSpecial)
    printf("La contrasenia es válida.\n");
  else
    printf("La contrasenia no es válida.\n");

  return 0;
}
