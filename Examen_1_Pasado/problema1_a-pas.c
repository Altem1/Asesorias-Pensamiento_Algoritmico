#include <stdio.h>

int main(){
	
	int tipo, num, hojas, paginas;
	float subtotal, total, iva;

	printf("Tipo de impresion \n 1: Blanco y Negro $1.50 por hoja \n 2: Color $3.00 por hoja \n 3: Doble cara $2.00 por hoja \n Nota: cada hoja cuenta como 2 paginas \n Ingresa tu eleccion: ");
	scanf("%d", &tipo);
	printf("Numero de paginas: ");
	scanf("%d", &paginas);
	
	if(paginas % 2 != 0){
		hojas = paginas / 2 + 1;
	}else{
		hojas = paginas / 2;
	}

	switch(tipo){

		case 1: 
			//Blanco y negro:
		
			subtotal = 1.5 * hojas;
			iva = subtotal * .16;
			total = subtotal + iva;
			break;
		case 2: 
			//Color:
			subtotal = 3.00 * hojas;
			iva = subtotal * .16;
			total = subtotal + iva;
			break;
		case 3: 
			//Doble cara
			subtotal = 2.00 * hojas;
			iva = subtotal * .16;
			total = subtotal + iva;
			break;
		default: 
			//Opcion invalida
			printf("Error: haz seleccionado una opcion invalida");
			break;
	}

	printf("\tHojas: %d \n\tSubtotal: %.2f \n\tIva: %.2f \n\tTotal: %.2f \n", hojas, subtotal, iva, total);

}
