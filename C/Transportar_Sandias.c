/*Sabiendo que Don Paco cosechó Z sandías iguales, 
diseña un programa en C que combine los dos problemas anteriores, 
añadiendo una condición para que Don Paco sepa si puede llevar todas las sandías en un viaje; 
y de no ser así, especifica si no puede por el peso o las dimensiones. */

#include <stdio.h> 

#include <math.h> 

int main() { 

    float A, B, C, L, Y, X, Z; 

    float peso_don_paco = 70.0; 

    int capacidad_sandias, sandias_peso; 

    printf("Dimensiones de la cajuela (A B C en metros): "); 

    scanf("%f %f %f", &A, &B, &C); 

    printf("Lado de cada sandia (L en cm): "); 

    scanf("%f", &L);     

    printf("Peso de una sandia (Y kg): "); 

    scanf("%f", &Y); 

    printf("Capacidad maxima de carga (X kg): "); 

    scanf("%f", &X); 

    printf("Sandias cosechadas (Z): "); 

    scanf("%f", &Z); 

    // Convertir cm a metros 

    L = L / 100; 

    // Calcular volumen de la cajuela 

    float v_cajuela = A*B*C; 

    // Calcular volumen de las sandías 

    float v_sandia = L*L*L; 

    // Calcular cuántas sandías caben 

    capacidad_sandias = v_cajuela / v_sandia;   
    
    int sandias_dimension = capacidad_sandias;

    // Calcular por peso 

    float peso_disponible = X - peso_don_paco; 

    sandias_peso = peso_disponible / Y; 

    printf("\n--- RESULTADOS ---\n"); 

    printf("Sandias por dimensiones: %d\n", sandias_dimension); 

    printf("Sandias por peso: %d\n", sandias_peso); 

    printf("Sandias cosechadas: %.0f\n", Z); 

    // Determinar si puede llevar todas 

    int capacidad_maxima = (sandias_dimension < sandias_peso) ? sandias_dimension : sandias_peso; 

    if (Z <= capacidad_maxima) { 

        printf("Puede llevar todas las sandias en un viaje.\n"); 

    } else { 

        printf("NO puede llevar todas las sandias en un viaje.\n"); 

        if (Z > sandias_dimension && Z > sandias_peso) { 

            printf("Razon: Excede tanto dimensiones como peso.\n"); 

        } else if (Z > sandias_dimension) { 

            printf("Razon: Excede las dimensiones de la cajuela.\n"); 

        } else { 

            printf("Razon: Excede la capacidad de peso.\n"); 

        } 

    }    

    return 0; 

} 