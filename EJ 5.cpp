#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char palabra[30];
	char reemplazo;
	char nuevo;
	int x;
	int aux = 0;
	
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s", &palabra);
	
	printf("\nIngrese el caracter que desea cambiar: ");
	scanf(" %c", &reemplazo);
	
	printf("\nIngrese el nuevo caracter: ");
	scanf(" %c", &nuevo);
	
	for(x=0; x<30; x++)
	{
		if(palabra[x] == reemplazo)
		{
			aux = palabra[x];
			palabra[x] = nuevo;
		}
	}
	
	printf("%s", palabra);
}
