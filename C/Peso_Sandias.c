/*Al pesar una sandía del lote, Don Paco obtuvo una medida de YYkg. 
Don Paco quiere saber cuántas sandías puede llevar, si el manual de su camioneta dice que puede 
cargar hasta X kg sin dañar la suspensión, y él pesa 70 kg. 
Realiza un programa en C para obtener la respuesta. */

#include <stdio.h> 

int main() { 

    float Y, X; 

    int sandias_peso; 

    float peso_don_paco = 70.0; 

    printf("Peso de una sandia (Y kg): "); 

    scanf("%f", &Y); 

    printf("Capacidad maxima de carga (X kg): "); 

    scanf("%f", &X); 

    // Calcular peso disponible para sandías 

    float peso_disponible = X - peso_don_paco; 

    // Calcular cuántas sandías puede llevar por peso 

    sandias_peso = (int)(peso_disponible / Y); 

    printf("Puede cargar %d sandías.\n", sandias_peso); 

    return 0; 

} 