#include <stdio.h>

int main(void) {
	int edad;
	
	printf("ingresa tu edad\n");
	scanf("%d",&edad);
	
	if(edad >= 18)
		printf("eres mayor de edad\n");	
	else
		printf("eres menor de edad\n");	
	return 0;
}

