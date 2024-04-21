#include <stdio.h>
#include <string.h>

//solo funciona cuando son palabras de la misma longitud (solucionar)

int main() 
{
    char palabras[5][50];
    char vec_aux[50];
    int x;
    int y=0;
    char cadena_larga[50];

    for (x = 0; x < 5; x++) 
	{
        printf("Por favor, ingresa la palabra %d: ", x + 1);
        scanf("%s", palabras[x]);
    }

    for (x=0;x<5;x++)
	{
    	for(y=0;y<strlen(palabras[x]);y++)
		{
    		if(x==0)
			{
    			strcpy(vec_aux,palabras[x]);
			}
			else
			{
				if(palabras[x][y]!=vec_aux[y])
				{
					strcpy(&vec_aux[y], &vec_aux[y + 1]);
				}
			}
		}
	}
	
	printf("%s",vec_aux);

    return 0;
}
