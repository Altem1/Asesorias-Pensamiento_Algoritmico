/*En la tienda de Don Paco venden sandías extrañamente perfectas y uniformes que él mismo cultiva. 
Cada lote tiene sandías con el mismo peso y dimensiones exactas, en forma de cubos perfectos, 
lo que ayuda a don Paco a transportarlas y almacenarlas. 
Si Don Paco tiene una camioneta con una cajuela de (A∗B∗C) m2(A∗B∗C)m2 y cada sandía mide lo mismo, 
L cm x Lcm de alto, 
¿cuántas sandías puede cargar en su camioneta? Realiza un programa en C que resuelva su problema. */

#include <stdio.h> 
#include <math.h> 

int main() { 

    float A, B, C, L; 

    int capacidad_sandias; 

    printf("Dimensiones de la cajuela (A B C en metros): "); 

    scanf("%f %f %f", &A, &B, &C); 

    printf("Lado de cada sandia (L en cm): "); 

    scanf("%f", &L); 

    // Convertir cm a metros 

    L = L / 100; 

    // Calcular volumen de la cajuela 

    float v_cajuela = A*B*C; 

    // Calcular volumen de las sandías 

    float v_sandia = L*L*L; 

    // Calcular cuántas sandías caben 

    capacidad_sandias = v_cajuela / v_sandia; 

    printf("Caben %d sandías.\n", capacidad_sandias); 

    return 0; 

} 