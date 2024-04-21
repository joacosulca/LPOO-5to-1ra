#include <stdio.h>
#include <string.h>

int main() 
{
    char cadena1[100];
	char cadena2[100];
    int longitud1;
	int longitud2;
	int x;
	int i;
	int esAnagrama;

    printf("Por favor, ingresa la primera cadena de caracteres: ");
    scanf("%s", cadena1);

    printf("Por favor, ingresa la segunda cadena de caracteres: ");
    scanf("%s", cadena2);

    longitud1 = strlen(cadena1);
    longitud2 = strlen(cadena2);

    if (longitud1 != longitud2) 
	{
        printf("Las cadenas no son anagramas.\n");
        return 0;
    }

    esAnagrama = 1;

    for (x = 0; x < longitud1; x++) 
	{
        for (i = 0; i < longitud2; i++) 
		{
            if (cadena1[x] == cadena2[i]) 
			{
                cadena2[i] = ' ';
                break;
            }
        }
        if (j == longitud2) 
		{
            esAnagrama = 0;
            break;
        }
    }

    if (esAnagrama) 
	{
        printf("Las cadenas son anagramas.\n");
    }
	else 
	{
        printf("Las cadenas no son anagramas.\n");
    }

    return 0;
} 

