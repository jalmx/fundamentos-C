#include <stdio.h>

int main(int argc, char *argv[]) {

	char nombre[10] = {'\0'};
	
	printf("Ingrese su nombre?\n");
	scanf("%s", nombre);
	
	printf("Hola %s, Es un gusto conocerte", nombre);
	
	return 0;
}

