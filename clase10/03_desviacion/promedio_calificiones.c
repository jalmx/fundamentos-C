#include <stdio.h>
#include "estadistica.h"

int main(int argc, char *argv[]) {

	int cantidad = 0;
	
	printf("Ingrese la cantidad parciales: ");
	scanf("%d", &cantidad);
	
	double parciales[cantidad];
	
	for(int i=0; i<cantidad; i++ ){
		printf("Ingrese el parcial %d: ", (i+1));	
		scanf("%lf", &parciales[i]);
	}
	
	double promedio = media(cantidad, parciales);
	
	printf("Tu calificacion final es: %lf", promedio);
	return 0;
}

