#include <stdio.h>
#include <stdlib.h>
#include "Programa1.h"

void programa1() {
    printf("\n\tPROGRAMA1: SUMA DE DOS NÚMEROS.\n");
    int numero1 = 10, numero2 = 5;
    int suma = 0;
    char opcion;
    printf("\nNúmero 1: ");
    scanf("%d", &numero1);
    printf("Número 2: ");
    scanf("%d", &numero2);
    suma = numero1 + numero2;
    printf("\nLa suma de %d + %d = %d", numero1, numero2, suma);
}