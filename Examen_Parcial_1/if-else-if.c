if (opcion == 'A') {
resultado = num1 + num2;
printf("Resultado: %.2f\n", resultado);
} else if (opcion == 'B') {
resultado = num1 - num2;
printf("Resultado: %.2f\n", resultado);
} else if (opcion == 'C') {
resultado = num1 * num2;
printf("Resultado: %.2f\n", resultado);
} else if (opcion == 'D') {
if (num2 <> 0) {
resultado = num1 / num2;
printf("Resultado: %.2f\n", resultado);
} else {
printf("Error: No se puede dividir por cero\n");
}
} else {
printf("Opción invalida\n");
}