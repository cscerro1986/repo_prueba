//============================================================================
// Name        : Prueba.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <math.h>
#include <iostream>
using namespace std;


int main() {

	float pago;

	printf("dime el pago total");
	scanf("%f",&pago);

	int cantidadCheques;
	int resultado;

	printf("Ingrese cantidad de cheques: ");
	scanf("%d",&cantidadCheques);

	for(int i=cantidadCheques;i<1;i--){

		float ch1,ch2,ch3,ch4,ch5;
		float num1=floor(pago/cantidadCheques);

		printf("el importe del cheque es: %f",num1);

	}

	return 0;
}


int dimeNumero(float &cheques,int cantidad){




}

