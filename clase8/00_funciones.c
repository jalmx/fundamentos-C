#include <stdio.h>

void mensaje(){
		printf("Mensaje desde una funcion\n");
}

int suma(){
	return 3 + 5;
}

float sumaFlotante(){
	return 9.3 + 3.4;
}

int main(int argc, char *argv[]) {
	mensaje();
	printf("%d\n", suma());
	printf("%f\n", sumaFlotante());
	return 0;
}

