
	#include <stdio.h>
	
	int main() {
    int dias, horas, minutos;
    int horas_extra, dias_extra;
	
    // Pedimos los datos al usuario
    printf("Ingresa los dias: ");
    scanf("%d", &dias);
    printf("Ingresa las horas: ");
    scanf("%d", &horas);
    printf("Ingresa los minutos: ");
    scanf("%d", &minutos);
    horas_extra = minutos / 60; 
    minutos = minutos % 60;     
    horas = horas + horas_extra;
    dias_extra = horas / 24;
    horas = horas % 24;
    dias = dias + dias_extra;
    printf("Salida: %d dias %d horas %d minutos\n", dias, horas, minutos);
    return 0;
}
