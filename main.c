/* 
 * File:   main.c
 * Author: YOO
 * Created on 9 de enero de 2018, 01:41 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include "Programa1.h"
#include "Programa2.h"

int main(int argc, char** argv) {
    int opcion = 0;
    printf("\t\t***** BIENVENIDO AL CURSO DE C *****");
    printf("\n\t PROGRAMAS:\n\n");
    printf("1. Suma de dos números.\n2. Datos de usuario.\n3. ¿Positivo o negativo?.\n4.¿Pares o impares?.\n5. Conversión.\n"
           "6. Calificaciones.\n7. Calculadora.\n8. Uso del FOR.\n9. Fómula general.\n10. Tablas de multiplicar.\n11. Arreglos.\n"
           "12. Conexión a Base de Datos (MySQL).\n13. Salir.\n\n\tEliga una opción [1-13]: ");
    scanf("%d",&opcion);
    switch(opcion){
    case 1:
        programa1();
        break;
    case 2:
        programa2();
        break;
    case 13:
        printf("\nSaliendo...");
        return 0;
    default:
        printf("\nOpción Inválida.");
        break;
    }
    return (EXIT_SUCCESS);
}

