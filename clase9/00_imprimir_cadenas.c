#include <stdio.h>

int main() {
	/** Diferentes formas de definir cadenas de caracteres*/
	
	char string[5] = {'H','O','L','A','\0'};//declaro mi cadena de caracteres
	char texto[] = "fundamentos"; //declaro mi cadena de caracteres
	char *mensaje = "programacion"; //declaro mi cadena de caracteres
	
	printf("%s \n", string); //imprimo string
	printf("%s \n", texto); //imprimo string
	printf("%s", mensaje); //imprimo texto
	
	return 0;
}

