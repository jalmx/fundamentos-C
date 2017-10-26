#include <stdio.h>
#include "lib.h" //importo mi libreria
#include "mi_libreria.h"//en clase

int main(int argc, char *argv[]) {
	
	double valorA = 4.3, valorB = 3.8;
	
	double sum = suma(valorA, valorB);
	double res = resta(valorA, valorB);
	double mul = multiplicacion(valorA, valorB);
	double div = division(valorA, valorB);
	
	printf("Operacion realizada desde una libreria externa\n");
	printf("suma %.2f\n", sum);
	printf("resta %.2f\n", res);
	printf("multiplicacion %.2f\n", mul);
	printf("division %.2f\n", div);

	gatitos();
	return 0;
}

