#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAMA 30

int isValid(char pass[]);

int main()
{

    char pass[TAMA];
    char repeatPass[TAMA];

    do
    {
        printf("Ingrese su contrasenia: ");
        gets(pass);

        printf("Confirme su contrasenia: ");
        gets(repeatPass);

        if (strcmp(pass, repeatPass) == 0)
        {
            printf("Coinciden pa\n");
        }
        else
        {
            printf("Deben coincidir wachin\n");
        }

        // Validación final
        if (isValid(pass) != 0)
        {
            printf("La contraseña es valida\n");
        }
        else
            printf("La contrasenia no es valida.\n");
    } while (strcmp(pass, repeatPass) != 0 || isValid(pass) == 0);

    return 0;
}

int isValid(char pass[])
{
    int hasUpper = 0, hasLower = 0, hasNum = 0, length = 0;
    for (int i = 0; i < strlen(pass); i++)
    {
        length++; // Aumenta la longitud de la contrasenia

        if (isupper(pass[i])) // Verifica si es mayuscula
        {

            hasUpper = 1;
        }
        else if (islower(pass[i])) // Verifica si es minuscula
        {
            hasLower = 1;
        }
        else if (isdigit(pass[i])) // Verifica si es numero
        {
            hasNum = 1;
        }
    }

    if (length > 29)
        printf("La contrasenia debe tener como maximo 29 caracteres.\n");
    if (length < 8)
        printf("La contrasenia debe tener al menos 8 caracteres.\n");
    if (!hasUpper)
        printf("Debe contener al menos una letra mayúscula.\n");
    if (!hasLower)
        printf("Debe contener al menos una letra minúscula.\n");
    if (!hasNum)
        printf("Debe contener al menos un número.\n");

    if (length >= 8 && hasUpper && hasLower && hasNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}