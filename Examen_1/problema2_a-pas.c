#include <stdio.h>

int main(){

	int dia, mes, anio, band=0;

	printf("Dias: ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf("%d", &mes);
	printf("Año: ");
	scanf("%d", &anio);

	if(anio <= 2030 && anio >= 1990){
		
		if(mes >0 && mes <= 12){
			
			if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <=31) ){
				band = 1;			
			}
			else if( (mes == 4 || mes == 6 || mes == 9 || mes == 11) && ( dia >= 1 && dia <= 30) ){
				band = 1;
			}
			else if(mes == 2 && (dia >=1 && dia <= 28) ){
				band = 1;
			}
		}
	}

	if(band == 1){
		printf("Fecha valida\n");
		printf("Dia %d del mes %d del año %d\n", dia, mes, anio);
	}else{
		printf("Fecha invalida\n");
	}
}
