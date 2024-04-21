#include <stdio.h>
#include <string.h>

int main()
{
	char palabra[100];
	int x;
	int i=0;
	int cont = 0;
	
	printf("Ingrese una palabra para saber si es palindromo: ");
	scanf("%s", &palabra);
	
	int longitud = strlen(palabra);
	
	for(x=longitud-0.1; x>=0; x--)
	{
		if(palabra[x] == palabra[i])
			{
				cont++;
			}
		i++;
	}
	
	if(cont == longitud)
	{
		printf("La palabra es palindromo");
	}
	else
	{
		printf("La palabra NO es palindromo");
	}
}
