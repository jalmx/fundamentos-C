#include <stdio.h>
#include <math.h> //importamos la libreria que tiene las funciones matematicas

int main(void) {
	
	int valorAbsolutoEntero = fabs(-18); // retorna el valor absulo del argumento
	float valorAbsolutoFlotante = fabs(-4.7); // retorna el valor absulo del argumento
		
	printf("%d\n", valorAbsolutoEntero);
	printf("%f\n", valorAbsolutoFlotante);
	
	int x = 3;
	float exponente = exp(x);
	printf("e elevado a la %d: %f \n",x, exponente);
	
	float valor = 16.6;
	float raiz = sqrt(valor); //sqrt calcula la raiz cuadra del argumento
	
	printf("La raiz cuadrada de %f es: %f\n", valor, raiz);
	
	int base = 2;
	int pot = 3;
	int potencia = pow(base, pot); //x^y el primer valor es la base y el segundo es la potencia
	printf("La potencia de %d elevado a la %d es: %d",base, pot, potencia);
	
	return 0;
}

