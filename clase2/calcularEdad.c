#include <stdio.h>

int main(void) {
	/*
	como se puede nombrar una variable 
	(NO comenzar con numeros ni signos)
	*/
	int nacimiento = 1989; 
	int hoy =  2017;
	
	int edad = hoy - nacimiento;
	
	printf("Mi edad es %d", edad);
	return 0;
}

