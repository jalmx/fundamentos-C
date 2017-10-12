#include <stdio.h>

int main(void) {
	//estructura de control **for**
	
	printf("Impresion del 0 al 9\n");//incremento
	/*
	for(
		sentencia que se ejecuta cuando comienza el for;
		evalua al inicio del ciclo, si es true continua, de lo contrario termina el ciclo;
		se ejecuta cada que termina un ciclo
	)
	*/
	for(int contador=0; contador <=10; contador++){
		printf("valor %d\n",contador);
	}
	
	printf("\nImpresion del 9 al 0\n");
	for(float contador2 = 9; contador2 >= 0; contador2--){//decremento
		printf("valor %f\n",(contador2+3));
	}
	
	return 0;
}

