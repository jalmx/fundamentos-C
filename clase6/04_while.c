#include <stdio.h>

int main(void) {
	printf("CICLO WHILE\n");
	int t = 2, contador = 1, resultado = 0;
	
	printf("Tabla del %d\n", t);
	
	while( contador <= 10){
		resultado = t * contador;
		
		printf("%d X %d = %d\n",t, contador, resultado);
		contador++;
	}
	
	return 0;
}

