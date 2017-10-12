#include <stdio.h>

int main(void) {
	printf("CICLO DO-WHILE\n");
	int t = 2, contador = 1, resultado = 0;
	printf("Tabla del %d\n", t);
	
	do{
		resultado = t * contador;
		
		printf("%d X %d = %d\n",t, contador, resultado);
		contador++;
	} while(contador < 10);
	
	return 0;
}

