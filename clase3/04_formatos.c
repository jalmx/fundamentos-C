#include <stdio.h>

int main(void) {
	
	//formato para valores con punto decimal
	
	float valor1, valor2;
	
	printf("Dar primer valor para la division\n");
	scanf("%f", &valor1);
	
	printf("Dar segundo valor a dividir\n");
	scanf("%f", &valor2);
	
	float div = valor1/valor2;
	
	printf("Resultado de la division %f (sin formato)\n", div);
	printf("Resultado de la division %.2f (con formato)\n", div);
	
	return 0;
}

