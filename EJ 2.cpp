#include <stdio.h>

int main()
{
	char caracteres[50];
	int x;
	int vocal = 0;
	
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s", &caracteres);
	
	for(x=0; x<50; x++)
	{
		if(caracteres[x] == 'a' || caracteres[x] == 'A' || caracteres[x] == 'e' || caracteres[x] == 'E'|| caracteres[x] == 'i' || caracteres[x] == 'I' ||caracteres[x] == 'o' || caracteres[x] == 'O' || caracteres[x] == 'u' || caracteres[x] == 'u')
		{
			vocal++;
		}
	}
	
	printf("La cantidad de vocales que tiene la palabra %s son: %d vocales", caracteres, vocal);
	
}
