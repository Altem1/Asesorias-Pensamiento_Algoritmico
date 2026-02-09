/*Realiza un programa en lenguaje C que reciba un carácter y, si está entre A y M, 
imprima 1, si está entre N y Z, imprima 2, y si no es una letra, imprima 3. */

#include <stdio.h> 

#include <ctype.h> 

int main() { 

    char caracter; 

    printf("Ingrese un caracter: "); 

    scanf("%c", &caracter); 

    // Convertir a mayúscula para facilitar la comparación 

    char mayuscula = toupper(caracter); 

    if (mayuscula >= 'A' && mayuscula <= 'M') { 

        printf("1\n"); 

    } 

    else if (mayuscula >= 'N' && mayuscula <= 'Z') { 

        printf("2\n"); 

    } 

    else { 

        printf("3\n"); 

    } 

    return 0; 

} 