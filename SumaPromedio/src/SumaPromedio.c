/*
 ============================================================================
 Name        : SumaPromedio.c
 Author      : santiago
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero1;
	float promedio=0;
	int acumulador=0;
	int contador=0;
	int i;

	printf("Dime cuantos numeros quieres sumar, por favor");
	scanf("%d",&i);


	for(i;i>0;i--)
		{

		printf("Dime un numero por favor: ");
		scanf("%d",&numero1);
		contador++;

		acumulador=acumulador+numero1;
		}

	promedio=acumulador/contador;
	printf("El promedio es igual a: %f", promedio);

	return 0;
}
