#include <stdio.h>
#include <ctype.h> //libreria para manipulacion de caracteres

int main(void) {
	//multiples case
	char eleccion;
	
	printf("Da una letra\n");
	scanf("%c", &eleccion );
	
	switch(tolower(eleccion)){
	case 'a': 
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("Es vocal");
		break;
	case 'b': case 'c': case 'd': case 'f': case 'g':
	case 'h': case 'j': case 'k': case 'l': case 'm':
	case 'n': case 'p': case 'q': case 'r': case 's':
	case 't': case 'v': case 'w': case 'x': case 'y': 
	case 'z':
		printf("Es consonante");
		break;
	default:
		printf("No es un letra minuscula");
	}
	
	return 0;
}

