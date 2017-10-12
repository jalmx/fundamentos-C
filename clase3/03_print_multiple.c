#include <stdio.h>

int main(void) {

	int valor1 = 4;
	int valor2 = 8;
	int valor3 = 12;
	float valor4 = 4.3;
	float valor5 = 6.3;
	float valor6 = 34.94;
	
	printf("Imprimiendo varios valores enteros: %d %d %d \n", 
		   valor1, valor2, valor3);
	
	printf("Imprimiendo varios valores flotantes: %f %f %f \n", 
		   valor4, valor5, valor6);
	
	printf("Imprimiendo varios valores combinados: %d %f %d %f \n", 
		   valor2, valor5, valor3, valor6);
	
	return 0;
}

