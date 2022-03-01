#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	arrays de char
	*/
	
	/*
	//Definimos la cadena de caracteres
	char texto [20]; //longitud de 20
	
	printf("Introduce tu nombre (no mayor a 20 letras): ");
		scanf("%s",texto);
	printf("\n El nombre escrito es: %s ", texto);
	*/
//-------------------------------	
	
/*
	// en C, este tipo de notacion no funciona
	char nombre [10];
	nombre = "aaron";
*/
	
	/*
	int numero;
	numero=10;
*/
	
	
	/*
	
	char nombre[]="Aaron";
	printf("Texto: %s \n",nombre);
		printf("Tamaño de la cadena: %i bytes \n",sizeof nombre);
	
	
	int longitud;
	longitud = strlen(nombre);
	
	printf("Mi cadena %s tiene %i caracteres.\n",nombre,longitud);
	*/
	
	/*
	//----------------------------
	//strcpy -> copiar el contenido de una cadena en otra cadena de caracteres
	//la cadena destino tenga el suficiente espacio para que quepan los datos
	
	char texto1[]="Materia de CYP";
	char destino[25];
	printf("Dato de cadena Destino: %s .\n",destino);
	strcpy(destino,texto1); 
	
	printf("Dato de cadena Destino: %s .\n",destino);
		
	
	
	//strlen -> Funciones lo que hace es que no devuelve el numero de los caracteres que tiene una cadena sin contar el '\0'
	
	*/
	
	
	
	
	/*sizeof -> tamaño  - numerico*/
	
	/*las cadenas de caracteres tienen un fin ese esta defino por -> '\0'  -> Significado: fin de la cadena*/
	
	
	/*
	char palabra[30]={'A','a','r','o','n','\0','V','e','l','a','s','c','o'};
	printf("Texto: %s \n",palabra);
	
	printf("Tamaño de la cadena: %i bytes \n",sizeof palabra);
	*/
	/*
	char nombre[20];
		scanf("%s",nombre);
		
	printf("%s",nombre);
	*/
	
	
	
	
	
	int a;
	int b;
	int resultado;
	
	printf("Dato 1: \n");
	scanf("%i",&a);
	
	printf("Dato 2: \n");
	scanf("%i",&b);
	
	resultado=a+b;
	
	printf("El resultado es: %i",resultado);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
