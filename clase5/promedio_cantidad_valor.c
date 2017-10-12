#include <stdio.h>

int main(void) {
	float temporal=0, total, calificacion, promedio;
	
	printf("Calcular promedio\nDar cuantas calificaciones son: ");
	scanf("%f", &total);
	
	for(int x = 1; x <= total; x++){
		printf("Dar calificacion %d: \n", x);
		scanf("%f", &calificacion);
		temporal = calificacion + temporal;
	}
	
	promedio = temporal / total;
	
	printf("Tu promedio es: %.2f\n", promedio);
	return 0;
}

