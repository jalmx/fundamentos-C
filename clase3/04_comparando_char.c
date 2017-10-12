#include <stdio.h>

int main() {
	//recibiendo un caracter para compacion
	
	char caracter;
	
	printf("Dar primer valor para la division\n");
	scanf("%c", &caracter);
	
	if(caracter == 'a'){
		printf("Diste una %c", caracter);
	}else{
		printf("Diste otra letra %c", caracter);
	}
	
	return 0;
}

