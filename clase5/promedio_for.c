#include <stdio.h>

int main(void) {

	float temporal=0;
	float calificacion;
	float promedio ;
	
	for(int x = 1; x<=3; x++){
		printf("Dar calificacion %d: \n", x);
		scanf("%f", &calificacion);
		temporal = calificacion + temporal;
	}
	
	promedio = temporal / 3;//calculo el promedio
	
	printf("Tu promedio es: %.2f\n", promedio);
	return 0;
}

