#include <stdio.h>

int alCuadrado(int valor); //defino mi funcion vacia; es un prototipo

int alCubo(int valor); //defino mi funcion, es un prototipo

int main(void) {
	
	printf("4 al cuadrado es %d\n", alCuadrado(4));
	printf("4 al cubo es %d\n", alCubo(4));
	
	return 0;
}

int alCuadrado(int valor){
	return valor * valor;
}

int alCubo(int valor){
	return valor * valor * valor;
}
