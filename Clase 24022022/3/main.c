#include <stdio.h>
#include <stdlib.h>
#define IVA .16
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	

		float SubTotal, Iva, Total;
		printf("\n-----Calculo del total de mi compra-----");
		
		printf("\n\n- Total a pagar del Cliente: ");
			scanf("%f",&SubTotal);
			
		//calculo del IVA
		Iva = SubTotal *IVA;
		Total= Iva+SubTotal;
		
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		printf("\n --");
		
		printf("\nSub total: %f",SubTotal);
		printf("\n Iva fijo : %f",IVA);
		printf("\nSub total: %f",SubTotal);	
		printf("\n Impuesto de la compra: %f",Iva);
		printf("\n TOTAL A PAGAR : %.2f",Total);
	
	return 0;
}
