#include <stdio.h>
#include "f_general.h"

int main(int argc, char *argv[]) {
	double a = 1.0, b = 4.0, c =1.0;
	
	double x1 = primerRaiz(a, b, c);
	double x2 = segundaRaiz(a, b, c);
	
	printf("El valor de x1: %.2f\n", x1);
	printf("El valor de x2: %.2f\n", x2);
	
	return 0;
}

