/*
Creador: Ing. Flores Garc�a Diana Laura.
Fecha de creaci�n: 16/09/18 20:33 hrs.
Programa 4: Input & Output.
*/

#include <stdio.h>

int main(){
	//Regresa el primer caracter ingresado.
	/*char a = getchar();
	printf("You entered: ");
	putchar(a);*/

	//Regresa los 100 primeros caracteres ingresados.
	/*char a[100];
	gets(a);
	printf("You entered: ");
	puts(a);*/
	
	//Regresa todos los n�meros enteros ingresados.
	/*int a;
	scanf("%d", &a);
	printf("You entered: %d", a);*/
	
	//Pide dos n�meros muestra el resutado de la suma entre los dos.
	int a, b;
	printf("Ingresa dos n�meros: ");
	scanf("%d %d", &a, &b);
	printf("\nSuma: %d", a + b);
	
	return 0;
}
