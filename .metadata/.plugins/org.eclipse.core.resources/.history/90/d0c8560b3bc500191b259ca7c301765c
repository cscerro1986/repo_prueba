/*
 ============================================================================
 Name        : Proyecto2.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
 * a la funcion dimeNumero se le pasa la direccion de memoria donde quiero alojar el
 * resultado.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int dimeNumero(int *num);

int main() {
	int numero;

	dimeNumero(&numero);// en el main le paso la direccion de memoria con el &
	printf("%d",numero);
	return 0;
}

int dimeNumero(int *num){


	int numero1;
	printf("Dime un numero");
	scanf("%d",&numero1);
	*num = numero1;



	return 0;
}
