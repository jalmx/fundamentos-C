#include <stdio.h>

int main() {
//sentencia switch
	char eleccion;
	
	printf("Elegir postre:\n");
	printf("a)Pastel\nb)Cup cake\nc)Dulces\n");
	scanf("%c", &eleccion );
	
	switch(eleccion){
	case 'a':
		printf("Elegiste un sabroso pastel");
		break;
	case 'b':
		printf("Elegiste un riquisimo Cup cakes");
		break;
	case 'c':
		printf("Elegiste unos fabulosos dulces");
		break;
	default:
		printf("De ese postre no tenemos");
	}
	
	return 0;
}

