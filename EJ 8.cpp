
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void may(char vec[])
{
    int x;
    for(x=0;x<strlen(vec);x++)
	{
        if(vec[x]>=97&&vec[x]<=122)
		{
            vec[x] = vec[x] - 32;
        }
    }
}

void min(char vec[])
{
    int x;
    for(x=0;x<strlen(vec);x++)
	{
        
        if(vec[x]>=65&&vec[x]<=90)
		{
            vec[x] = vec[x] + 32;
        }
    }
}

void altern(char vec[])
{
    int x,count;
    for(x=0,count=0;x<strlen(vec);x++)
	{

        if(vec[x]!=' ')
		{
            if(count%2==0)
			{
                if(vec[x]>=97&&vec[x]<=122)
				{
        	    	vec[x] = vec[x] - 32;
        		}
            }
            if(count%2!=0)
			{
                if(vec[x]>=65&&vec[x]<=90)
				{
            		vec[x] = vec[x] + 32;
        		}
            }
            count++;
        }

    }
}

void inicio_oracion(char vec[])
{
    int x;

    for(x=0;x<strlen(vec);x++)
	{
        if(x==0)
		{
            if(vec[x]>=97&&vec[x]<=122)
			{
				vec[x] = vec[x] - 32;
        	}
        }
        if(vec[x]==' '&&vec[x+1]!=' ')
		{
            if(vec[x+1]>=97&&vec[x+1]<=122)
			{
                vec[x+1] = vec[x+1] - 32;
            }
        }
    }

}

void pause()
{
    getch();
    system("cls");
}

int main()
{
    int operacion;
    char frase[50];
    char aux;

    do {
    	system("cls");
        aux='1';

        printf("\n\n\t\t --- Cambia Las palabras a la opcion que desees ---");

        printf("\n\n\t\t[1] MAYUSCULA"); 
		printf("\n\t\t[2] minuscula");  
		printf("\n\t\t[3] AlTeRnAdO");     
		printf("\n\t\t[4] Mayuscula Al Inicio De Las Oraciones \n");

	    printf("\n\n\t\t Ingrese la operacion que quiera realizar: ");
		
		scanf("%d", &operacion);
		fflush(stdin);

		if(operacion==1||operacion==2||operacion==3||operacion==4)
		{
			
	        printf("\n\n\t\t\t Ingrese la frase que quiere pasar: ");
	        fflush(stdin);
			gets(frase);
	        fflush(stdin);
	
		}
        switch (operacion) 
		{
            case 1:
                may(frase);
                break;
            case 2:
                min(frase);
                break;
            case 3:
                altern(frase);
                break;
            case 4:
                inicio_oracion(frase);
                break;
            default:
                printf("\n\t\t\t Error: Ingrese una operacion válida. ");
                aux='0';
                pause();
                break;
        }

		printf("\n\n\t\t\t La palabra quedo así: %s", frase);
		
        if(aux!='0')
		{
            printf("\n\n\n\n\t\t Si quiere ejecutar nuevamente el programa ingrese el '0': ");
            aux = getch();
        }

    }while(aux=='0');

	system("cls");


}

