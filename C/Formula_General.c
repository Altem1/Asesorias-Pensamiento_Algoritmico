/*Implementar la fórmula cuadrática general en un programa en C. */

#include <stdio.h> 

#include <math.h> 

int main() { 

    float a, b, c; 

    float discriminante, x1, x2; 

    printf("Coeficientes de la ecuacion cuadratica (a b c): "); 

    scanf("%f %f %f", &a, &b, &c); 

    if (a == 0) { 

        printf("No es una ecuacion cuadratica (a no puede ser 0).\n"); 

        return 1; 

    } 

    discriminante = b * b - 4 * a * c; 

    if (discriminante > 0) { 

        x1 = (-b + sqrt(discriminante)) / (2 * a); 

        x2 = (-b - sqrt(discriminante)) / (2 * a); 

        printf("Dos soluciones reales:\n"); 

        printf("x1 = %.2f\n", x1); 

        printf("x2 = %.2f\n", x2); 

    }  

    else if (discriminante == 0) { 

        x1 = -b / (2 * a); 

        printf("Una solucion real (raiz doble):\n"); 

        printf("x = %.2f\n", x1); 

    } 

    else { 

        float real = -b / (2 * a); 

        float imaginaria = sqrt(-discriminante) / (2 * a); 

        printf("Dos soluciones complejas:\n"); 

        printf("x1 = %.2f + %.2fi\n", real, imaginaria); 

        printf("x2 = %.2f - %.2fi\n", real, imaginaria); 

    }    

    return 0; 

} 