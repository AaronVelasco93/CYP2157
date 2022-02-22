#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define PI 3.1416

int main(int argc, char *argv[]) {
	
	// Area de un circulo  = Pi * r ^2
	
	float radio;
	float area;
	printf("\n --- Area de una circulo----");
	printf("\n Area = PI * Radio ^2");
	
	printf("\nIngresa el radio del circulo: ");
		scanf("%f",&radio);
	area= PI*(radio*radio);
	
		
	printf("\nResultado= \n PI=%f \nRadio= %f \nArea= %f",PI,radio,area);
	
	
	
	
	return 0;
}
